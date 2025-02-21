@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route105/map.json
@

Route105_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M, 19, 60, 1, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 6, Route105_EventScript_Luis, 0
	object_event 2, OBJ_EVENT_GFX_SWIMMER_M, 27, 36, 1, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 7, 0, TRAINER_TYPE_NORMAL, 3, Route105_EventScript_Dominik, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_F, 8, 45, 1, MOVEMENT_TYPE_WALK_UP_AND_DOWN, 0, 7, TRAINER_TYPE_NORMAL, 3, Route105_EventScript_Beverly, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F, 19, 9, 1, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 5, TRAINER_TYPE_NORMAL, 3, Route105_EventScript_Imani, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 8, 73, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Route105_EventScript_ItemIron, FLAG_ITEM_ROUTE_105_IRON
	object_event 6, OBJ_EVENT_GFX_HIKER, 17, 48, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 0, 7, TRAINER_TYPE_NORMAL, 3, Route105_EventScript_Foster, 0
	object_event 7, OBJ_EVENT_GFX_MAN_5, 4, 54, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 2, TRAINER_TYPE_NORMAL, 2, Route105_EventScript_Josue, 0
	object_event 8, OBJ_EVENT_GFX_HIKER, 4, 58, 3, MOVEMENT_TYPE_FACE_UP, 0, 2, TRAINER_TYPE_NORMAL, 4, Route105_EventScript_Andres, 0

Route105_MapWarps:
	warp_def 9, 20, 0, 0, MAP_ISLAND_CAVE

Route105_MapBGEvents:
	bg_hidden_item_event 15, 68, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE
	bg_hidden_item_event 5, 56, 3, ITEM_BIG_PEARL, FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL

Route105_MapEvents::
	map_events Route105_ObjectEvents, Route105_MapWarps, NULL, Route105_MapBGEvents

