startingCave_MapScripts::
	.byte 0

startingCave_EventScript_Bag::
    lock
    faceplayer
	setflag FLAG_SYS_POKEMON_GET
    fadescreen FADE_TO_BLACK
    setflag FLAG_STARTING_CAVE_BAG
    special ChooseStarter
	removeobject LOCALID_START_BAG
    waitstate
	setvar VAR_ROUTE102_STATE, 1
	release
    end

startingCave_Text_NoAdvance:
	.string "Check the bag first!$"

startingCave_Movement_PreventAdvance:
	walk_down
	step_end

startingCave_EventScript_PreventAdvance::
	lockall
	msgbox startingCave_Text_NoAdvance, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, startingCave_Movement_PreventAdvance
	waitmovement 0
	releaseall
	end