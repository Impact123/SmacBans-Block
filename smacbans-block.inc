#if defined _smacbans_block_included
	#endinput
#endif
#define _smacbans_block_included




// Taken from smlib, blame them if it's too short :3
#define MAX_STEAMAUTH_LENGTH 21




/**
 * Prints a chatmessage to a all admins with a given adminflag or override.
 *
 * @param admflag		Adminflag.
 * @param format		Formatting rules.
 * @param ...			Variable number of format parameters.
 * @noreturn
*/
stock SmacbansPrintAdminNotice(admflag, const String:format[], any:...)
{
	decl String:Message[4096];
	VFormat(Message, sizeof(Message), format, 3);
	
	for(new i; i <= MaxClients; i++)
	{
		if(IsClientValid(i))
		{
			if(CheckCommandAccess(i, "smacbans_admin", admflag, false))
			{
				SetGlobalTransTarget(i);
				PrintToChat(i, Message);
			}
		}
	}
}




/**
 * Prints an deugmessage to the serverconsole and all ingame players.
 *
 * @param enabled		Bool value to enable/disable this function.
 * @param format		Formatting rules.
 * @param ...			Variable number of format parameters.
 * @noreturn
*/
stock SmacbansDebug(bool:enabled, const String:format[], any:...)
{
	if(enabled)
	{
		decl String:Message[4096];
		VFormat(Message, sizeof(Message), format, 3);
		
		PrintToServer(Message);
		PrintToChatAll(Message);
	}
}




/**
 * Returns if a given clientindex is within the range of being a client.
 *
 * @param client		Client index.
 * @return				True if client is usable, false otherwise.
*/
stock IsClientUsable(client)
{
	if(client > 0 && client <= MaxClients)
	{
		return true;
	}
	
	return false;
}




/**
 * Returns if a given client is authorized and usable.
 *
 * @param client		Client index.
 * @return				True if client is authorized and usable, false otherwise.
*/
stock IsClientUsableAuth(client)
{
	if(client > 0 && client <= MaxClients && IsClientAuthorized(client))
	{
		return true;
	}
	
	return false;
}




/**
 * Returns if a given client is valid (ingame).
 *
 * @param client		CLient index.
 * @return				True if client is valid, false otherwise.
*/
stock bool:IsClientValid(id)
{
	if(id > 0 && id <= MaxClients && IsClientInGame(id))
	{
		return true;
	}
	
	return false;
}




/**
 * Finds a client matching the given AuthID.
 *
 * @param auth			AuthID.
 * @return				Clientindex or -1 on failure.
 * @error				-1
*/
// Used to find a matching client to an auth
stock GetClientFromSteamId(const String:auth[])
{
	new String:clientAuth[MAX_STEAMAUTH_LENGTH];
	for(new i; i <= MaxClients; i++) 
	{
		if(IsClientUsableAuth(i) && !IsFakeClient(i))
		{
			GetClientAuthString(i, clientAuth, sizeof(clientAuth));
			
			if(StrEqual(auth, clientAuth)) 
			{
				return i;
			}
		}
	}
	
	return -1;
}




/**
 * Formats an long to an dotted IP-string
 *
 * @param str			String to store the ip into.
 * @param maxlen		Length of buffer.
 * @noreturn
 */
stock LongToIp(long, String:str[], maxlen)
{
	new pieces[4];
	
	pieces[0] = (long >>> 24 & 255);
	pieces[1] = (long >>> 16 & 255);
	pieces[2] = (long >>> 8 & 255);
	pieces[3] = (long & 255); 
	
	Format(str, maxlen, "%d.%d.%d.%d", pieces[0], pieces[1], pieces[2], pieces[3]); 
}
