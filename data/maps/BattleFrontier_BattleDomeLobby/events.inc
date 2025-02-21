@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_BattleDomeLobby/map.json
@

BattleFrontier_BattleDomeLobby_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 5, 10, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant, 0
	object_event 2, OBJ_EVENT_GFX_MAN_3, 1, 11, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_BattleDomeLobby_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 14, 14, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_BattleDomeLobby_EventScript_Lass, 0
	object_event 4, OBJ_EVENT_GFX_FAT_MAN, 18, 14, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_BattleDomeLobby_EventScript_FatMan, 0
	object_event 5, OBJ_EVENT_GFX_MANIAC, 8, 14, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_BattleDomeLobby_EventScript_Maniac, 0
	object_event 6, OBJ_EVENT_GFX_TEALA, 17, 10, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant, 0

BattleFrontier_BattleDomeLobby_MapWarps:
	warp_def 11, 16, 0, 1, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	warp_def 12, 16, 0, 1, MAP_BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_BattleDomeLobby_MapBGEvents:
	bg_sign_event 4, 10, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults
	bg_sign_event 7, 10, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree
	bg_sign_event 18, 10, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults
	bg_sign_event 15, 10, 0, BG_EVENT_PLAYER_FACING_ANY, BattleFrontier_BattleDomeLobby_EventScript_RulesBoard

BattleFrontier_BattleDomeLobby_MapEvents::
	map_events BattleFrontier_BattleDomeLobby_ObjectEvents, BattleFrontier_BattleDomeLobby_MapWarps, NULL, BattleFrontier_BattleDomeLobby_MapBGEvents

