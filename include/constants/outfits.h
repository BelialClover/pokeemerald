#ifndef GUARD_CONSTANTS_OUTFITS_H
#define GUARD_CONSTANTS_OUTFITS_H

//! macro modes

// ScrCmd_getoutfitstatus
#define OUTFIT_CHECK_FLAG 0
#define OUTFIT_CHECK_USED 1
// ScrCmd_toggleoutfit
#define OUTFIT_TOGGLE_UNLOCK 0
#define OUTFIT_TOGGLE_LOCK 1
// BufferOutfitStrings
#define OUTFIT_BUFFER_NAME  0
#define OUTFIT_BUFFER_DESC  1

//! outfits
#define OUTFIT_NONE        0
#define OUTFIT_EMERALD     1
#define OUTFIT_RS          2
#define OUTFIT_ORAS        3

#define OUTFIT_RBY         4
#define OUTFIT_FRLG        5
#define OUTFIT_MISC        6

#define OUTFIT_GSC         7
#define OUTFIT_PT          8
#define OUTFIT_BW          9
#define OUTFIT_DP          10

#define OUTFIT_COUNT       11

// inclusive
#define OUTFIT_BEGIN OUTFIT_EMERALD
#define OUTFIT_END   OUTFIT_MISC

#define DEFAULT_OUTFIT OUTFIT_EMERALD

#endif //! GUARD_CONSTANTS_OUTFITS_H
