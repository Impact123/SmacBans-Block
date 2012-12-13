# SmacBans: Block
[![Build Status](http://vs.gugyclan.eu:8000/job/SmacBans-Block/badge/icon)](http://vs.gugyclan.eu:8000/job/SmacBans-Block/)

SmacBans: Block is a plugin designed to keep cheaters who have been detected by SMAC away from your server.  
[Smacbans.com](http://smacbans.com) provides a global banlist where caught cheaters are stored, this plugin will check every player against this list.  
If they were found in our list they immediately will be thrown out of your server


## Warning
This repository is used for developement purposes.  
The code here is often not tested extensively enough to use if for productively run servers.  
If you're not a developer please visit our website for a stable release.  


## Supported Games
SmacBans: Block will be compatible with any game SMAC and the depencies are available for.  
These include the following

    Counter-Strike: Source
    Counter-Strike: Global Offensive
    Left4Dead
    Left4Dead2
    Team Fortress 2
    Half-Life 2: Deathmatch
    Day of Defeat: Source

And many others.


## Installation
1. Get **one** of the needed exensions: [Socket](http://forums.alliedmods.net/showthread.php?t=67640), [Curl](http://forums.alliedmods.net/showthread.php?t=152216)  
2. Get the optional [Plugin updater](http://forums.alliedmods.net/showthread.php?t=169095), we highly recommend you use it  
3. Put `smacbans-block.smx` in your `../addons/sourcemod/plugins` directory.  
4. If you update please delete the `smacbans-block.cfg` from `../cfg/sourcemod/`  
5. Add the `smacbans-block.cfg` in your `../cfg/sourcemod` folder or load the plugin, it will automatically create it.  
6. Load the plugin  
8. Edit the config to your purposes.


## Upgrade
1. Remove the `smacbans-block.cfg` in `../cfg/sourcemod/` if needed
2. Overwrite the file `smacbans-block.smx` in `../addons/sourcemod/plugins` with the newer one
3. Overwrite the file `smacbans-block.phrases.txt` in `../addons/sourcemod/translations` with the newer one


## Notes
* Mesages will be show to Admins with the genericflag or the commandoverride `smacbans_admin`  
* Clients will be rechecked on a lateloadsituation (pulginreload).  
* The plugins needs the [Socket](http://forums.alliedmods.net/showthread.php?t=67640), or [Curl](http://forums.alliedmods.net/showthread.php?t=152216)  extension to work, we recommend socket.  
* The plugin will automatically create a configfile in `..cfg/sourcemod/smacbans-block.cfg`  
* The plugin has support for the automatic [Updater](http://forums.alliedmods.net/showthread.php?t=169095), we recommend you use it


## Compile
There is only one thing you should note when compiling.  
The includefile is included locally, thus it must lie in the same folder where the sourcecode, just like in this repo.  