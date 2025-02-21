@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AbandonedShip_HiddenFloorRooms/map.json
@

AbandonedShip_HiddenFloorRooms_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 41, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, AbandonedShip_HiddenFloorRooms_EventScript_ItemLuxuryBall, FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 16, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, AbandonedShip_HiddenFloorRooms_EventScript_ItemScanner, FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 5, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, AbandonedShip_HiddenFloorRooms_EventScript_ItemTM18, FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM18
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 31, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, AbandonedShip_HiddenFloorRooms_EventScript_ItemWaterStone, FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE

AbandonedShip_HiddenFloorRooms_MapWarps:
	warp_def 6, 14, 3, 0, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 7, 14, 3, 0, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 21, 14, 3, 1, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 22, 14, 3, 1, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 36, 14, 3, 2, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 37, 14, 3, 2, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 6, 1, 3, 3, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 21, 1, 3, 4, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	warp_def 36, 1, 3, 5, MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS

AbandonedShip_HiddenFloorRooms_MapBGEvents:
	bg_hidden_item_event 42, 10, 3, ITEM_ROOM_1_KEY, FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY
	bg_hidden_item_event 20, 5, 3, ITEM_ROOM_2_KEY, FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY
	bg_hidden_item_event 1, 12, 3, ITEM_ROOM_4_KEY, FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY
	bg_hidden_item_event 1, 2, 0, ITEM_ROOM_6_KEY, FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY
	bg_sign_event 8, 5, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	bg_sign_event 11, 3, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	bg_sign_event 10, 10, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	bg_sign_event 16, 3, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	bg_sign_event 25, 2, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	bg_sign_event 24, 6, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_HiddenFloorRooms_EventScript_Trash

AbandonedShip_HiddenFloorRooms_MapEvents::
	map_events AbandonedShip_HiddenFloorRooms_ObjectEvents, AbandonedShip_HiddenFloorRooms_MapWarps, NULL, AbandonedShip_HiddenFloorRooms_MapBGEvents

