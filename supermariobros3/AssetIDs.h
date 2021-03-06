#pragma once

//
// This file contains all IDs of game assets 
//

#define ID_TEX_BBOX -100		// special texture to draw object bounding box
#define ID_TEX_BLACK -1
#define ID_TEX_MARIO 0
#define ID_TEX_ENEMY 10
#define ID_TEX_MISC 20


#define OBJECT_TYPE_MARIO	0
#define OBJECT_TYPE_BRICK	1
#define OBJECT_TYPE_GOOMBA	2
#define OBJECT_TYPE_KOOPA	3
#define OBJECT_TYPE_COIN 7
#define OBJECT_TYPE_PLATFORM 5
#define OBJECT_TYPE_PIRANHAPLANT	4
#define OBJECT_TYPE_FIRE_PIRANHAPLANT	70
#define OBJECT_TYPE_PIPE	80
#define OBJECT_TYPE_SWITCH	8


#define OBJECT_TYPE_PORTAL	50

#define ID_SPRITE_BRICK 20000

#define ID_SPRITE_GOOMBA 30000
#define ID_SPRITE_GOOMBA_WALK (ID_SPRITE_GOOMBA + 1000)
#define ID_SPRITE_GOOMBA_DIE (ID_SPRITE_GOOMBA + 2000)

#define ID_SPRITE_COIN 40000

#define ID_SPRITE_CLOUD 50000
#define ID_SPRITE_CLOUD_BEGIN (ID_SPRITE_CLOUD + 1000)
#define ID_SPRITE_CLOUD_MIDDLE (ID_SPRITE_CLOUD + 2000)
#define ID_SPRITE_CLOUD_END (ID_SPRITE_CLOUD + 3000)