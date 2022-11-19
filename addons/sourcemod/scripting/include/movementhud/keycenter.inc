// Whitespace char size (1440p)
// | |-> 14
// | |-> 15
// | |-> 18
// | |-> 20
// | |-> 22
// | |-> 28
// | |-> 30
// | |-> 31
// | |-> 54
// 1440p
#define MHUD_SPACE_1440 "      "
#define MHUD_UNDERSCORE_1440 " — "
#define MHUD_W_1440 " W "
#define MHUD_A_1440 " A "
#define MHUD_S_1440 "  S  "
#define MHUD_D_1440 "  D "
#define MHUD_CROUCH_1440 "  C  "
#define MHUD_JUMP_1440 "  J  "
#define MHUD_ARROW_LEFT_1440 "  ← "
#define MHUD_ARROW_RIGHT_1440 " →  "

// 1080p native
#define MHUD_SPACE_1080 "     "
#define MHUD_UNDERSCORE_1080 "  —  "
#define MHUD_W_1080 " W "
#define MHUD_A_1080 "  A  "
#define MHUD_S_1080 "  S  "
#define MHUD_D_1080 "  D  "
#define MHUD_CROUCH_1080 "  C  "
#define MHUD_JUMP_1080 "  J  "
#define MHUD_ARROW_LEFT_1080 "  ← "
#define MHUD_ARROW_RIGHT_1080 " →  "

// 1080p from 1440p
#define MHUD_SPACE_1080_V2 "     "
#define MHUD_UNDERSCORE_1080_V2 "  —  "
#define MHUD_W_1080_V2 " W "
#define MHUD_A_1080_V2 "  A  "
#define MHUD_S_1080_V2 "  S  "
#define MHUD_D_1080_V2 "  D  "
#define MHUD_CROUCH_1080_V2 "  C  "
#define MHUD_JUMP_1080_V2 "  J  "
#define MHUD_ARROW_LEFT_1080_V2 "  ← "
#define MHUD_ARROW_RIGHT_1080_V2 " →  "


stock char[] GetKeyString(int charID, int keysMode, int spaceMode, bool pressed)
{
    char retString[20];
    if (!pressed)
    {
        switch (keysMode)
        {
            case KeysMode_NoBlanks:
            {
                switch (spaceMode)
                {
                    case KeysSpaceMode_NativeHD:
                    {
                        retString = MHUD_SPACE_1080;
                    }
                    case KeysSpaceMode_ResizedHD:
                    {
                        retString = MHUD_SPACE_1080_V2;
                    }
                    case KeysSpaceMode_NativeQHD:
                    {
                        retString = MHUD_SPACE_1440;
                    }
                    default:
                    {
                        retString = "";
                    }
                }
            }
            case KeysMode_Underscores:
            {
                switch (spaceMode)
                {
                    case KeysSpaceMode_NativeHD:
                    {
                        retString = MHUD_UNDERSCORE_1080;
                    }
                    case KeysSpaceMode_ResizedHD:
                    {
                        retString = MHUD_UNDERSCORE_1080_V2;
                    }
                    case KeysSpaceMode_NativeQHD:
                    {
                        retString = MHUD_UNDERSCORE_1440;
                    }
                    default:
                    {
                        retString = "";
                    }
                }
            }
        }
        return retString;
    }
    switch (charID)
    {
        case Char_W:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_W_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_W_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_W_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_A:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_A_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_A_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_A_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_S:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_S_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_S_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_S_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_D:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_D_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_D_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_D_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_Crouch:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_CROUCH_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_CROUCH_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_CROUCH_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_Jump:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_JUMP_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_JUMP_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_JUMP_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_ArrLeft:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_ARROW_LEFT_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_ARROW_LEFT_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_ARROW_LEFT_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
        case Char_ArrRight:
        {
            switch (spaceMode)
            {
                case KeysSpaceMode_NativeHD:
                {
                    retString = MHUD_ARROW_RIGHT_1080;
                }
                case KeysSpaceMode_ResizedHD:
                {
                    retString = MHUD_ARROW_RIGHT_1080_V2;
                }
                case KeysSpaceMode_NativeQHD:
                {
                    retString = MHUD_ARROW_RIGHT_1440;
                }
                default:
                {
                    retString = "";
                }
            }
        }
    }
    return retString;
}
