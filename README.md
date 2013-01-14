# SmacBans: Block

[![Smacbans: Block logo](https://www.smacbans.com/images/plugin_noversion.png)](http://smacbans.com)  
SmacBans: Block is a plugin designed to keep cheaters who have been detected by SMAC away from your server.  
[Smacbans.com](http://smacbans.com) provides a global banlist where caught cheaters are stored, this plugin will check every player against this list.  
If they were found in this list they immediately will be thrown out of your server.  

Because some people get confused about our name, **we aren't the developers of SMAC**.  
We only provide a community driven global banlist and the tools to use it.


## Warning
This repository is used for development purposes.  
The code here is often not tested extensively enough to use if for productively run servers.  
If you're not a developer or do not intend to help us by testing "unstable" versions you should visit [our website](http://smacbans.com) for a stable release.  

### Downloading an development build
Every time something is committed into the masterbranch of this reposity the plugin will be build [here](http://vs.gugyclan.eu:8000/job/SmacBans-Block/).  
The files are compiled from the sourcecode you see here, therefore the warning above also applies to these builds.  
**Use them at your own risk.**


## Supported Games
SmacBans: Block should compatible with any game Sourcemod supports.  
These games include but are not limited to the following

    Counter-Strike: Source
    Counter-Strike: Global Offensive
    Left4Dead
    Left4Dead2
    Team Fortress 2
    Half-Life 2: Deathmatch
    Day of Defeat: Source

You can see a list of servers running this plugin [here](http://www.game-monitor.com/search.php?vars=smacbans_block_version)


## Installation
1. Get at least **one** of the needed exensions: [Socket](http://forums.alliedmods.net/showthread.php?t=67640), [Curl](http://forums.alliedmods.net/showthread.php?t=152216)  
2. Get the optional [Plugin updater](http://forums.alliedmods.net/showthread.php?t=169095), we highly recommend you to use it  
3. Put `smacbans-block.smx` in your `../addons/sourcemod/plugins` directory  
4. Put `smacbans-block.phrases.txt` in your `../addons/sourcemod/translations` directory  
5. Add the `smacbans-block.cfg` in your `../cfg/sourcemod` folder or load the plugin, it will automatically create it  
6. Load the plugin or change the map 
7. Edit the config to your purposes


## Upgrade
**Since 0.1.9, we use an automatic configappender, you don't have to delete your pluginconfig anymore**  

1. Overwrite the file `smacbans-block.smx` in `../addons/sourcemod/plugins` with the newer one
2. Overwrite the file `smacbans-block.phrases.txt` in `../addons/sourcemod/translations` with the newer one


## Notes
* Messages will be show to Admins with the genericflag or the commandoverride `smacbans_admin`  
* Clients will be rechecked on a lateloadsituation (pluginreload)  
* The plugins needs the [Socket](http://forums.alliedmods.net/showthread.php?t=67640), or [Curl](http://forums.alliedmods.net/showthread.php?t=152216) extension to work, we recommend socket   
* The plugin will automatically create a `smacbans-block.cfg` in `..cfg/sourcemod/`  
* The plugin has support for the automatic [Updater](http://forums.alliedmods.net/showthread.php?t=169095), we highly recommend you to use it


## Compiling
There is only one thing you should note when compiling.  
The includefile is included locally, hence it can lie in the same folder as the sourcecode, just like in this repo.

### Dependencies

In order to compile SmacBans:Block you need the following dependencies in your include directory.  
* [AutoExecConfig](https://github.com/Impact123/AutoExecConfig)
* [Updater](http://forums.alliedmods.net/showthread.php?t=169095)
* [Socket](http://forums.alliedmods.net/showthread.php?t=67640)
* [Curl](http://forums.alliedmods.net/showthread.php?t=152216)


## Integrating
In version 0.1.9 some IPC-features were added which you can use in your own plugins.  
If you write a plugin which integrates with SmacBans: Block we'd be happy to hear about it.  
More features can be added on request if needed.  

### Forwards


    forward SmacBans_OnSteamIDStatusRetrieved(String:auth[], banstatus, String:banreason[]);
Called after the status of an steamid was retrieved.  
It is not gauranteed that the owner of the auth is available at this time.  
This can be used for example to implement an SQL-based logging mechanism.


    forward Smacbans_OnSteamIDBlock(client, String:auth[], String:banreason[]);
Called after the status of a banned steamid was retrieved and the owner is about to be kicked.  
The client is gauranteed to be authorized at this time.


Please take a look at the includefile for more informations.
