# 1 "data/maps/startingCave/scripts.pory"

# 2 "data/maps/startingCave/scripts.pory"
startingCave_MapScripts::
# 3 "data/maps/startingCave/scripts.pory"
	.byte 0
# 4 "data/maps/startingCave/scripts.pory"

# 5 "data/maps/startingCave/scripts.pory"
startingCave_EventScript_Bag::
# 6 "data/maps/startingCave/scripts.pory"
    lock
# 7 "data/maps/startingCave/scripts.pory"
    faceplayer
# 8 "data/maps/startingCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 9 "data/maps/startingCave/scripts.pory"
    fadescreen FADE_TO_BLACK
# 10 "data/maps/startingCave/scripts.pory"
    setflag FLAG_STARTING_CAVE_BAG
# 11 "data/maps/startingCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 12 "data/maps/startingCave/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 13 "data/maps/startingCave/scripts.pory"
    special ChooseStarter
# 14 "data/maps/startingCave/scripts.pory"
	removeobject LOCALID_START_BAG
# 15 "data/maps/startingCave/scripts.pory"
    waitstate
# 16 "data/maps/startingCave/scripts.pory"
	setvar VAR_ROUTE102_STATE, 1
# 17 "data/maps/startingCave/scripts.pory"
	release
# 18 "data/maps/startingCave/scripts.pory"
    end
# 19 "data/maps/startingCave/scripts.pory"

# 20 "data/maps/startingCave/scripts.pory"
startingCave_Text_NoAdvance:
# 21 "data/maps/startingCave/scripts.pory"
	.string "Check the bag first!$"
# 22 "data/maps/startingCave/scripts.pory"

# 23 "data/maps/startingCave/scripts.pory"
startingCave_Movement_PreventAdvance:
# 24 "data/maps/startingCave/scripts.pory"
	walk_down
# 25 "data/maps/startingCave/scripts.pory"
	step_end
# 26 "data/maps/startingCave/scripts.pory"

# 27 "data/maps/startingCave/scripts.pory"
startingCave_EventScript_PreventAdvance::
# 28 "data/maps/startingCave/scripts.pory"
	lockall
# 29 "data/maps/startingCave/scripts.pory"
	msgbox startingCave_Text_NoAdvance, MSGBOX_DEFAULT
# 30 "data/maps/startingCave/scripts.pory"
	closemessage
# 31 "data/maps/startingCave/scripts.pory"
	applymovement LOCALID_PLAYER, startingCave_Movement_PreventAdvance
# 32 "data/maps/startingCave/scripts.pory"
	waitmovement 0
# 33 "data/maps/startingCave/scripts.pory"
	releaseall
# 34 "data/maps/startingCave/scripts.pory"
	end
