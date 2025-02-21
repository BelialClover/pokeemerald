#include "constants/global.h"
#include "constants/event_objects.h"

#if MODERN == 0
static const u8 sText_OutfitName_UsualGreen[] = _("USUAL GREEN");
static const u8 sText_OutfitDesc_UsualGreen[] = _(
    "The usual, but\nbasic OUTFIT.");

static const u8 sText_OutfitName_UnusualRed[] = _("UNUSUAL RED");
static const u8 sText_OutfitDesc_UnusualRed[] = _(
    "Rather unusual,\nbut still basic\nOUTFIT.");
#endif

static const u16 sRegionMapPlayerIcon_BrendanGfx[]   = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");
static const u16 sRegionMapPlayerIcon_MayGfx[]       = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");
static const u16 sRegionMapPlayerIcon_RSMayGfx[]     = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");


const u16 sRegionMapPlayerIcon_LeafPal[] 		      = INCBIN_U16("graphics/object_events/pics/people/female_player/frlg/icon.gbapal");
const u16 sRegionMapPlayerIcon_LeafGfx[] 		      = INCBIN_U16("graphics/object_events/pics/people/female_player/frlg/icon.4bpp");

const u16 sRegionMapPlayerIcon_RedPal[] 	          = INCBIN_U16("graphics/object_events/pics/people/male_player/frlg/icon.gbapal");
const u16 sRegionMapPlayerIcon_RedGfx[] 	          = INCBIN_U16("graphics/object_events/pics/people/male_player/frlg/icon.4bpp");

const u16 sRegionMapPlayerIcon_BluePal[] 		      = INCBIN_U16("graphics/object_events/pics/people/female_player/rby/icon.gbapal");
const u16 sRegionMapPlayerIcon_BlueGfx[] 		      = INCBIN_U16("graphics/object_events/pics/people/female_player/rby/icon.4bpp");

const u16 sRegionMapPlayerIcon_DawnPal[] 		      = INCBIN_U16("graphics/object_events/pics/people/female_player/dp/icon.gbapal");
const u16 sRegionMapPlayerIcon_DawnGfx[] 		      = INCBIN_U16("graphics/object_events/pics/people/female_player/dp/icon.4bpp");

const u16 sRegionMapPlayerIcon_LucasPal[] 		      = INCBIN_U16("graphics/object_events/pics/people/male_player/dp/icon.gbapal");
const u16 sRegionMapPlayerIcon_LucasGfx[] 		      = INCBIN_U16("graphics/object_events/pics/people/male_player/dp/icon.4bpp");

const u16 sRegionMapPlayerIcon_HilbertPal[]           = INCBIN_U16("graphics/object_events/pics/people/male_player/bw/icon.gbapal");
const u16 sRegionMapPlayerIcon_HilbertGfx[] 	      = INCBIN_U16("graphics/object_events/pics/people/male_player/bw/icon.4bpp");

const u16 sRegionMapPlayerIcon_Red_RBYPal[] 	      = INCBIN_U16("graphics/object_events/pics/people/male_player/rby/icon.gbapal");
const u16 sRegionMapPlayerIcon_Red_RBYGfx[] 	      = INCBIN_U16("graphics/object_events/pics/people/male_player/rby/icon.4bpp");

const u16 sRegionMapPlayerIcon_EthanPal[]             = INCBIN_U16("graphics/object_events/pics/people/male_player/gsc/icon.gbapal");
const u16 sRegionMapPlayerIcon_EthanGfx[] 	          = INCBIN_U16("graphics/object_events/pics/people/male_player/gsc/icon.4bpp");

const u16 sRegionMapPlayerIcon_GreenPal[]             = INCBIN_U16("graphics/object_events/pics/people/male_player/frlg_rival/icon.gbapal");
const u16 sRegionMapPlayerIcon_GreenGfx[] 	          = INCBIN_U16("graphics/object_events/pics/people/male_player/frlg_rival/icon.4bpp");

const u16 sRegionMapPlayerIcon_Brendan_ORASPal[]      = INCBIN_U16("graphics/object_events/pics/people/male_player/oras/icon.gbapal");
const u16 sRegionMapPlayerIcon_Brendan_ORASGfx[] 	  = INCBIN_U16("graphics/object_events/pics/people/male_player/oras/icon.4bpp");

const u16 sRegionMapPlayerIcon_May_ORASPal[]          = INCBIN_U16("graphics/object_events/pics/people/female_player/oras/icon.gbapal");
const u16 sRegionMapPlayerIcon_May_ORASGfx[] 	      = INCBIN_U16("graphics/object_events/pics/people/female_player/oras/icon.4bpp");

const u16 sRegionMapPlayerIcon_Dawn_PTPal[]           = INCBIN_U16("graphics/object_events/pics/people/female_player/pt/icon.gbapal");
const u16 sRegionMapPlayerIcon_Dawn_PTGfx[] 	      = INCBIN_U16("graphics/object_events/pics/people/female_player/pt/icon.4bpp");

//! TODO: Should the gfx here be seperated?

static const u8 sFrontierPassPlayerIcons_Unused[]         = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");
const u16 sRegionMapPlayerIcon_UnusedGfx[] 	              = INCBIN_U16("graphics/object_events/pics/people/female_player/pt/icon.4bpp");

static const u8 sFrontierPassPlayerIcons_BrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

static const u8 sFrontierPassPlayerIcons_RSBrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/rs_map_heads.4bpp");

#define TRAINER_ID(m, f) \
{ \
    [MALE] =   { TRAINER_PIC_ ## m, TRAINER_BACK_PIC_ ## m, }, \
    [FEMALE] = { TRAINER_PIC_ ## f, TRAINER_BACK_PIC_ ## f, }, \
}

#define AVATAR_GFX_ID(m, f) \
{ \
    [MALE] = { \
        [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ ## m ## _NORMAL, \
        [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ ## m ## _ACRO_BIKE, \
        [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ ## m ## _SURFING, \
        [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ ## m ## _UNDERWATER \
    }, \
    [FEMALE] = { \
        [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ ## f ## _NORMAL, \
        [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ ## f ## _ACRO_BIKE, \
        [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ ## f ## _SURFING, \
        [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ ## f ## _UNDERWATER \
    }, \
}

#define ANIM_GFX_ID(m, f) \
{ \
    [MALE] = { \
        [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ ## m ## _FIELD_MOVE, \
        [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ ## m ## _FISHING, \
        [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ ## m ## _WATERING, \
        [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ ## m ## _DECORATING \
    }, \
    [FEMALE] = { \
        [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ ## f ## _FIELD_MOVE, \
        [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ ## f ## _FISHING, \
        [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ ## f ## _WATERING, \
        [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ ## f ## _DECORATING \
    }, \
}

#define REGION_MAP_GFX(m, f)   { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }
#define REGION_MAP_GFX_G(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

// bandaids to avoid adding unnecessary merge conflicts
// remove these if you have them added/renamed yourself.
#define TRAINER_PIC_RUBY_SAPPHIRE_BRENDAN TRAINER_PIC_RS_BRENDAN
#define TRAINER_PIC_RUBY_SAPPHIRE_MAY     TRAINER_PIC_RS_MAY

#define TRAINER_PIC_UNUSED              TRAINER_PIC_BRENDAN
#define TRAINER_BACK_PIC_UNUSED         TRAINER_BACK_PIC_BRENDAN
#define OBJ_EVENT_GFX_UNUSED_NORMAL     OBJ_EVENT_GFX_BRENDAN_NORMAL
#define OBJ_EVENT_GFX_UNUSED_ACRO_BIKE  OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE
#define OBJ_EVENT_GFX_UNUSED_SURFING    OBJ_EVENT_GFX_BRENDAN_SURFING
#define OBJ_EVENT_GFX_UNUSED_UNDERWATER OBJ_EVENT_GFX_BRENDAN_UNDERWATER
#define OBJ_EVENT_GFX_UNUSED_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
#define OBJ_EVENT_GFX_UNUSED_FISHING    OBJ_EVENT_GFX_BRENDAN_FISHING
#define OBJ_EVENT_GFX_UNUSED_WATERING   OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_UNUSED_DECORATING OBJ_EVENT_GFX_BRENDAN_DECORATING
#define OBJ_EVENT_GFX_UNUSED_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE

/*
List of Lacking Stuff
-Hilbert front and Back Sprite
-Dawn Front and Back Sprites(Diamond and Pearl Version)
-Dawn Back Sprite Animations
-Green whole spritesheet
-ORAS Brendan Front and Back Sprites
-ORAS May Front and Back Sprites
-Frontier Pass Heads for everything but the Emerald and RS Sprites
*/

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_EMERALD] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("Emerald"),
        .desc            = COMPOUND_STRING("Emerald Outfit."),
        .trainerPics     = TRAINER_ID     (BRENDAN, MAY),
        .avatarGfxIds    = AVATAR_GFX_ID  (BRENDAN, MAY),
        .animGfxIds      = ANIM_GFX_ID    (BRENDAN, MAY),
        .iconsRM         = REGION_MAP_GFX (Brendan, May),
        .iconsFP         = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_RS] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("RS"),
        .desc            = COMPOUND_STRING("Ruby\nand Sapphire\nOutfit."),
        .trainerPics     = TRAINER_ID     (RUBY_SAPPHIRE_BRENDAN, RUBY_SAPPHIRE_MAY),
        .avatarGfxIds    = AVATAR_GFX_ID  (BRENDAN_RS, MAY_RS),
        .animGfxIds      = ANIM_GFX_ID    (BRENDAN_RS, MAY_RS),
        .iconsRM         = REGION_MAP_GFX (RSBrendan,  RSMay),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_FRLG] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("FRLG"),
        .desc            = COMPOUND_STRING("Fire Red\nand Leaf Green\nOutfit."),
        .trainerPics     = TRAINER_ID     (RED,     LEAF),
        .avatarGfxIds    = AVATAR_GFX_ID  (RED,     LEAF),
        .animGfxIds      = ANIM_GFX_ID    (RED,     LEAF),
        .iconsRM         = REGION_MAP_GFX (Red,     Leaf),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_RBY] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("RBY"),
        .desc            = COMPOUND_STRING("Red, Blue and\nYellow Outfit."),
        .trainerPics     = TRAINER_ID     (RED_RBY, BLUE),
        .avatarGfxIds    = AVATAR_GFX_ID  (RED_RBY, BLUE),
        .animGfxIds      = ANIM_GFX_ID    (RED_RBY, BLUE),
        .iconsRM         = REGION_MAP_GFX (Red_RBY, Blue),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_PT] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("Platinum"),
        .desc            = COMPOUND_STRING("Platinum Outfit."),
        .trainerPics     = TRAINER_ID     (LUCAS, DAWN),//
        .avatarGfxIds    = AVATAR_GFX_ID  (LUCAS, DAWN_PT),
        .animGfxIds      = ANIM_GFX_ID    (LUCAS, DAWN_PT),
        .iconsRM         = REGION_MAP_GFX (Lucas, Dawn_PT),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_GSC] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("GSC"),
        .desc            = COMPOUND_STRING("Gold and Silver\nOutfit."),
        .trainerPics     = TRAINER_ID     (ETHAN, UNUSED),
        .avatarGfxIds    = AVATAR_GFX_ID  (ETHAN, UNUSED),
        .animGfxIds      = ANIM_GFX_ID    (ETHAN, UNUSED),
        .iconsRM         = REGION_MAP_GFX (Ethan, Unused),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
        .hiddenForFemale = TRUE,
    },
    [OUTFIT_BW] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("BW"),
        .desc            = COMPOUND_STRING("Black and White\nOutfit."),
        .trainerPics     = TRAINER_ID     (HILBERT, UNUSED),
        .avatarGfxIds    = AVATAR_GFX_ID  (HILBERT, UNUSED),
        .animGfxIds      = ANIM_GFX_ID    (HILBERT, UNUSED),
        .iconsRM         = REGION_MAP_GFX (Hilbert, Unused),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
        .hiddenForFemale = TRUE,
    },
    [OUTFIT_ORAS] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("ORAS"),
        .desc            = COMPOUND_STRING("Omega Ruby and\nAlpha Sapphire\nOutfit."),
        .trainerPics     = TRAINER_ID     (BRENDAN_ORAS, MAY_ORAS), //ToDo
        .avatarGfxIds    = AVATAR_GFX_ID  (BRENDAN_ORAS, MAY_ORAS),
        .animGfxIds      = ANIM_GFX_ID    (BRENDAN_ORAS, MAY_ORAS),
        .iconsRM         = REGION_MAP_GFX (Brendan_ORAS, May_ORAS),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_MISC] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("FRLG Rival"),
        .desc            = COMPOUND_STRING("FRLG Green\nOutfit."),
        .trainerPics     = TRAINER_ID     (GREEN, UNUSED),
        .avatarGfxIds    = AVATAR_GFX_ID  (GREEN, UNUSED),
        .animGfxIds      = ANIM_GFX_ID    (GREEN, UNUSED),
        .iconsRM         = REGION_MAP_GFX (Green, Unused),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
        .hiddenForFemale = TRUE,
    },
    [OUTFIT_DP] = {
        .isHidden        = TRUE,
        .prices          = { 0, 0 },
        .name            = COMPOUND_STRING("DP Outfit"),
        .desc            = COMPOUND_STRING("Diamond and\nPearl Outfit."),
        .trainerPics     = TRAINER_ID     (UNUSED, DAWN),
        .avatarGfxIds    = AVATAR_GFX_ID  (UNUSED, DAWN),
        .animGfxIds      = ANIM_GFX_ID    (UNUSED, DAWN),
        .iconsRM         = REGION_MAP_GFX (Unused, Dawn),
        .iconsFP         = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
        .hiddenForMale   = TRUE,
    },
};
