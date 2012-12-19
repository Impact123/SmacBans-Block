# SmacBans: Block

SmacBans: Block is a plugin designed to keep cheaters who have been detected by SMAC away from your server.  
[Smacbans.com](http://smacbans.com) provides a global banlist where caught cheaters are stored, this plugin will check every player against this list.  
If they were found in this list they immediately will be thrown out of your server.  

Because some people get confused about our name, **we aren't the developers of SMAC**.  
We only provide a community driven global banlist and the tools to use it.


## Warning
This repository is used for developement purposes.  
The code here is often not tested extensively enough to use if for productively run servers.  
If you're not a developer or do not intend to help us by testing unstable versions you should visit [our website](http://smacbans.com) for a stable release.  

### Downloading an developement build
Every time something is commited into this reposity the plugin will be build [here](http://vs.gugyclan.eu:8000/job/SmacBans-Block/).  
The files are compiled from the sourcecode you see here, therefore the warning above also applies to these builds.  
**Use them at your own risk.**


## Supported Games
SmacBans: Block is compatible with any game that SMAC and the depencies are available for.  
These include but are not limited to

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
6. Load the plugin  
7. Edit the config to your purposes


## Upgrade
1. Remove the `smacbans-block.cfg` in `../cfg/sourcemod/` if needed
2. Overwrite the file `smacbans-block.smx` in `../addons/sourcemod/plugins` with the newer one
3. Overwrite the file `smacbans-block.phrases.txt` in `../addons/sourcemod/translations` with the newer one


## Notes
* Mesages will be show to Admins with the genericflag or the commandoverride `smacbans_admin`  
* Clients will be rechecked on a lateloadsituation (pluginreload)  
* The plugins needs the [Socket](http://forums.alliedmods.net/showthread.php?t=67640), or [Curl](http://forums.alliedmods.net/showthread.php?t=152216)  extension to work, we recommend socket   
* The plugin will automatically create a `smacbans-block.cfg` in `..cfg/sourcemod/`  
* The plugin has support for the automatic [Updater](http://forums.alliedmods.net/showthread.php?t=169095), we highly recommend you to use it


## Compiling
There is only one thing you should note when compiling.  
The includefile is included locally, hence it must lie in the same folder as the sourcecode, just like in this repo.  