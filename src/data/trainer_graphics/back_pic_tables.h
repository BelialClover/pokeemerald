const struct MonCoords gTrainerBackPicCoords[] =
{
    [TRAINER_BACK_PIC_BRENDAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_MAY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RED] = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_LEAF] = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_WALLY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_STEVEN] = {.size = 8, .y_offset = 4},

    [TRAINER_BACK_PIC_RED_RBY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_BLUE] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_GREEN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_ETHAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_LUCAS] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_HILBERT] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_DAWN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_BRENDAN_ORAS] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_MAY_ORAS] = {.size = 8, .y_offset = 4},
};

// this table goes functionally unused, since none of these pics are compressed
// and the place they would get extracted to gets overwritten later anyway
// the casts are so they'll play nice with the strict struct definition
const struct CompressedSpriteSheet gTrainerBackPicTable[] =
{
    [TRAINER_BACK_PIC_BRENDAN] = {
        .data = (const u32 *)gTrainerBackPic_Brendan,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Brendan),
        .tag = TRAINER_BACK_PIC_BRENDAN,
    },
    [TRAINER_BACK_PIC_MAY] = {
        .data = (const u32 *)gTrainerBackPic_May,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_May),
        .tag = TRAINER_BACK_PIC_MAY,
    },
    [TRAINER_BACK_PIC_RED] = {
        .data = (const u32 *)gTrainerBackPic_Red,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Red),
        .tag = TRAINER_BACK_PIC_RED,
    },
    [TRAINER_BACK_PIC_LEAF] = {
        .data = (const u32 *)gTrainerBackPic_Leaf,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Leaf),
        .tag = TRAINER_BACK_PIC_LEAF,
    },
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = {
        .data = (const u32 *)gTrainerBackPic_RubySapphireBrendan,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_RubySapphireBrendan),
        .tag = TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN,
    },
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY] = {
        .data = (const u32 *)gTrainerBackPic_RubySapphireMay,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_RubySapphireMay),
        .tag = TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY,
    },
    [TRAINER_BACK_PIC_WALLY] = {
        .data = (const u32 *)gTrainerBackPic_Wally,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Wally),
        .tag = TRAINER_BACK_PIC_WALLY,
    },
    [TRAINER_BACK_PIC_STEVEN] = {
        .data = (const u32 *)gTrainerBackPic_Steven,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Steven),
        .tag = TRAINER_BACK_PIC_STEVEN,
    },
    [TRAINER_BACK_PIC_RED_RBY] = {
        .data = (const u32 *)gTrainerBackPic_Red_RBY,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Red_RBY),
        .tag = TRAINER_BACK_PIC_RED_RBY,
    },
    [TRAINER_BACK_PIC_BLUE] = {
        .data = (const u32 *)gTrainerBackPic_Blue,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Blue),
        .tag = TRAINER_BACK_PIC_BLUE,
    },
    [TRAINER_BACK_PIC_GREEN] = {
        .data = (const u32 *)gTrainerBackPic_Green,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Green),
        .tag = TRAINER_BACK_PIC_GREEN,
    },
    [TRAINER_BACK_PIC_ETHAN] = {
        .data = (const u32 *)gTrainerBackPic_Ethan,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Ethan),
        .tag = TRAINER_BACK_PIC_ETHAN,
    },
    [TRAINER_BACK_PIC_LUCAS] = {
        .data = (const u32 *)gTrainerBackPic_Lucas,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Lucas),
        .tag = TRAINER_BACK_PIC_LUCAS,
    },
    [TRAINER_BACK_PIC_HILBERT] = {
        .data = (const u32 *)gTrainerBackPic_Hilbert,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Hilbert),
        .tag = TRAINER_BACK_PIC_HILBERT,
    },
    [TRAINER_BACK_PIC_DAWN] = {
        .data = (const u32 *)gTrainerBackPic_Dawn,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Dawn),
        .tag = TRAINER_BACK_PIC_DAWN,
    },
    [TRAINER_BACK_PIC_BRENDAN_ORAS] = {
        .data = (const u32 *)gTrainerBackPic_Hilbert,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_Brendan_ORAS),
        .tag = TRAINER_BACK_PIC_HILBERT,
    },
    [TRAINER_BACK_PIC_MAY_ORAS] = {
        .data = (const u32 *)gTrainerBackPic_Dawn,
        .size = TRAINER_PIC_SIZE * ARRAY_COUNT(gTrainerBackPicTable_May_ORAS),
        .tag = TRAINER_BACK_PIC_DAWN,
    },
};

#define TRAINER_BACK_PAL(trainerPic, pal) [TRAINER_BACK_PIC_##trainerPic] = {pal, TRAINER_BACK_PIC_##trainerPic}

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
    TRAINER_BACK_PAL(BRENDAN, gTrainerPalette_Brendan),
    TRAINER_BACK_PAL(MAY, gTrainerPalette_May),
    TRAINER_BACK_PAL(RED, gTrainerBackPicPalette_Red),
    TRAINER_BACK_PAL(LEAF, gTrainerBackPicPalette_Leaf),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_BRENDAN, gTrainerPalette_RubySapphireBrendan),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_MAY, gTrainerPalette_RubySapphireMay),
    TRAINER_BACK_PAL(WALLY, gTrainerPalette_Wally),
    TRAINER_BACK_PAL(STEVEN, gTrainerPalette_Steven),
    
    TRAINER_BACK_PAL(RED_RBY, gTrainerPalette_Red_RBY),
    TRAINER_BACK_PAL(BLUE, gTrainerPalette_Blue),
    TRAINER_BACK_PAL(GREEN, gTrainerPalette_Green),
    TRAINER_BACK_PAL(ETHAN, gTrainerPalette_Ethan),
    TRAINER_BACK_PAL(LUCAS, gTrainerPalette_Lucas),
    TRAINER_BACK_PAL(HILBERT, gTrainerPalette_Hilbert),
    TRAINER_BACK_PAL(DAWN, gTrainerPalette_Dawn),
    TRAINER_BACK_PAL(BRENDAN_ORAS, gTrainerPalette_Brendan_ORAS),
    TRAINER_BACK_PAL(MAY_ORAS, gTrainerPalette_May_ORAS),
};
