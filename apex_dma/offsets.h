#define OFFSET_ENTITYLIST			0x18b9a98
#define OFFSET_LOCAL_ENT			0x1c684b8 //LocalPlayer

#define OFFSET_TEAM					0x430
#define OFFSET_HEALTH				0x420
#define OFFSET_NAME					0x561
#define OFFSET_SIG_NAME				0x558
#define OFFSET_SHIELD				0x170
#define OFFSET_ABS_VELOCITY         0x140 //m_vecAbsVelocity
#define OFFSET_VISIBLE_TIME         0x1A6C

#define OFFSET_LIFE_STATE			0x770  //>0 = dead
#define OFFSET_BLEED_OUT_STATE		0x2670 //>0 = knocked

#define OFFSET_ORIGIN				0x14c //m_vecAbsOrigin
#define OFFSET_BONES				0xF18 //m_bConstrainBetweenEndpoints
#define OFFSET_AIMPUNCH				0x23c8 //m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
#define OFFSET_CAMERAPOS			0x1E6C
#define OFFSET_VIEWANGLES			0x24A0
#define OFFSET_BREATH_ANGLES		OFFSET_VIEWANGLES - 0x10
#define OFFSET_OBSERVER_MODE		0x3304
#define OFFSET_OBSERVING_TARGET		0x3308

#define OFFSET_MATRIX				0x1b3bd0
#define OFFSET_RENDER				0x40deec8 

#define OFFSET_WEAPON				0x1a0c //m_latestPrimaryWeapons
#define OFFSET_BULLET_SPEED         0x1e08
#define OFFSET_BULLET_SCALE         0x1e10

#define OFFSET_ITEM_GLOW            0x290
#define OFFSET_GLOW_ENABLE          0x330 //7 = enabled
#define OFFSET_GLOW_THROUGH_WALLS   0x340 //2 = enabled