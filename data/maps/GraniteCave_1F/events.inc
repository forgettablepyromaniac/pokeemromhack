@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/GraniteCave_1F/map.json
@

GraniteCave_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 36, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, GraniteCave_1F_EventScript_Hiker, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 17, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, GraniteCave_1F_EventScript_ItemEscapeRope, FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE

GraniteCave_1F_MapWarps:
	warp_def 37, 12, 3, 0, MAP_ROUTE106
	warp_def 35, 3, 3, 0, MAP_GRANITE_CAVE_B1F
	warp_def 17, 11, 3, 1, MAP_GRANITE_CAVE_B1F
	warp_def 5, 10, 3, 0, MAP_GRANITE_CAVE_STEVENS_ROOM

GraniteCave_1F_MapEvents::
	map_events GraniteCave_1F_ObjectEvents, GraniteCave_1F_MapWarps, NULL, NULL

