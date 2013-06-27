#pragma once

#define TICK                    0.120 /* one server tick, not exposed through the protocol of course */
#define CS_QUERY_YESNO          0x1
#define CS_QUERY_SINGLECHAR     0x2
#define CS_QUERY_HIDEINPUT      0x4
#define CS_SAY_NORMAL           0x1
#define CS_SAY_SHOUT            0x2
#define CS_SAY_GSAY             0x4
#define FLOAT_MULTI             100000
#define FLOAT_MULTF             100000.0
#define CS_STAT_HP              1
#define CS_STAT_MAXHP           2
#define CS_STAT_SP              3
#define CS_STAT_MAXSP           4
#define CS_STAT_STR             5
#define CS_STAT_INT             6
#define CS_STAT_WIS             7
#define CS_STAT_DEX             8
#define CS_STAT_CON             9
#define CS_STAT_CHA             10
#define CS_STAT_EXP             11
#define CS_STAT_LEVEL           12
#define CS_STAT_WC              13
#define CS_STAT_AC              14
#define CS_STAT_DAM             15
#define CS_STAT_ARMOUR          16
#define CS_STAT_SPEED           17
#define CS_STAT_FOOD            18
#define CS_STAT_WEAP_SP         19
#define CS_STAT_RANGE           20
#define CS_STAT_TITLE           21
#define CS_STAT_POW             22
#define CS_STAT_GRACE           23
#define CS_STAT_MAXGRACE        24
#define CS_STAT_FLAGS           25
#define CS_STAT_WEIGHT_LIM      26
#define CS_STAT_EXP64           28
#define CS_STAT_SPELL_ATTUNE    29
#define CS_STAT_SPELL_REPEL     30
#define CS_STAT_SPELL_DENY      31
#define CS_STAT_RESIST_START    100
#define CS_STAT_RESIST_END      117
#define CS_STAT_RES_PHYS        100
#define CS_STAT_RES_MAG         101
#define CS_STAT_RES_FIRE        102
#define CS_STAT_RES_ELEC        103
#define CS_STAT_RES_COLD        104
#define CS_STAT_RES_CONF        105
#define CS_STAT_RES_ACID        106
#define CS_STAT_RES_DRAIN       107
#define CS_STAT_RES_GHOSTHIT    108
#define CS_STAT_RES_POISON      109
#define CS_STAT_RES_SLOW        110
#define CS_STAT_RES_PARA        111
#define CS_STAT_TURN_UNDEAD     112
#define CS_STAT_RES_FEAR        113
#define CS_STAT_RES_DEPLETE     114
#define CS_STAT_RES_DEATH       115
#define CS_STAT_RES_HOLYWORD    116
#define CS_STAT_RES_BLIND       117
#define CS_STAT_SKILLINFO       140
#define CS_NUM_SKILLS           50
#define SF_FIREON               0x01
#define SF_RUNON                0x02
#define NDI_BLACK               0
#define NDI_WHITE               1
#define NDI_NAVY                2
#define NDI_RED                 3
#define NDI_ORANGE              4
#define NDI_BLUE                5
#define NDI_DK_ORANGE           6
#define NDI_GREEN               7
#define NDI_LT_GREEN            8
#define NDI_GREY                9
#define NDI_BROWN               10
#define NDI_GOLD                11
#define NDI_TAN                 12
#define NDI_MAX_COLOR           12
#define NDI_COLOR_MASK          0x1f
#define NDI_REPLY               0x20
#define NDI_NOCRATE             0x40
#define NDI_CLEAR               0x80
#define a_none                  0
#define a_readied               1
#define a_wielded               2
#define a_worn                  3
#define a_active                4
#define a_applied               5
#define F_APPLIED               0x000F
#define F_LOCATION              0x00F0
#define F_UNPAID                0x0200
#define F_MAGIC                 0x0400
#define F_CURSED                0x0800
#define F_DAMNED                0x1000
#define F_OPEN                  0x2000
#define F_NOPICK                0x4000
#define F_LOCKED                0x8000
#define CF_FACE_NONE            0
#define CF_FACE_BITMAP          1
#define CF_FACE_XPM             2
#define CF_FACE_PNG             3
#define CF_FACE_CACHE           0x10
#define FACE_FLOOR              0x80
#define FACE_COLOR_MASK         0xf
#define UPD_LOCATION            0x01
#define UPD_FLAGS               0x02
#define UPD_WEIGHT              0x04
#define UPD_FACE                0x08
#define UPD_NAME                0x10
#define UPD_ANIM                0x20
#define UPD_ANIMSPEED           0x40
#define UPD_NROF                0x80
#define UPD_SP_MANA             0x01
#define UPD_SP_GRACE            0x02
#define UPD_SP_LEVEL            0x04
#define SOUND_NORMAL            0
#define SOUND_SPELL             1

#define PICKUP_NOTHING          0x00000000

#define PICKUP_DEBUG            0x10000000
#define PICKUP_INHIBIT          0x20000000
#define PICKUP_STOP             0x40000000
#define PICKUP_NEWMODE          0x80000000

#define PICKUP_RATIO            0x0000000F

#define PICKUP_FOOD             0x00000010
#define PICKUP_DRINK            0x00000020
#define PICKUP_VALUABLES        0x00000040
#define PICKUP_BOW              0x00000080

#define PICKUP_ARROW            0x00000100
#define PICKUP_HELMET           0x00000200
#define PICKUP_SHIELD           0x00000400
#define PICKUP_ARMOUR           0x00000800

#define PICKUP_BOOTS            0x00001000
#define PICKUP_GLOVES           0x00002000
#define PICKUP_CLOAK            0x00004000
#define PICKUP_KEY              0x00008000

#define PICKUP_MISSILEWEAPON    0x00010000
#define PICKUP_ALLWEAPON        0x00020000
#define PICKUP_MAGICAL          0x00040000
#define PICKUP_POTION           0x00080000

#define PICKUP_SPELLBOOK        0x00100000
#define PICKUP_SKILLSCROLL      0x00200000
#define PICKUP_READABLES        0x00400000
#define PICKUP_MAGIC_DEVICE     0x00800000

#define PICKUP_NOT_CURSED       0x01000000

#define PICKUP_JEWELS           0x02000000
#define PICKUP_FLESH            0x04000000