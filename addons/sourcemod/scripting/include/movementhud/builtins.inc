enum
{
    KeysMode_None = 0,
    KeysMode_Underscores,
    KeysMode_NoBlanks,
    KeysMode_COUNT
};

enum
{
    KeysSpaceMode_NativeHD = 0,
    KeysSpaceMode_ResizedHD,
    KeysSpaceMode_NativeQHD,
    KeysSpaceMode_Legacy,
    KeysSpaceMode_COUNT
};

enum
{
    SpeedMode_None = 0,
    SpeedMode_Float,
    SpeedMode_Integer,
    SpeedMode_COUNT
};

enum
{
    Round_Down = 0,
    Round_Nearest = 1,
    Round_Up = 2,
    Round_COUNT
};

enum
{
    Takeoff_None = 0,
    Takeoff_Jump,
    Takeoff_All,
    Takeoff_COUNT
};

enum
{
    SpeedKeyColor_None = 0,
    SpeedKeyColor_Speed,
    SpeedKeyColor_GainInstant,
    SpeedKeyColor_GainAverage,
    SpeedKeyColor_COUNT
};

enum
{
    Char_W,
    Char_A,
    Char_S,
    Char_D,
    Char_Crouch,
    Char_Jump,
    Char_ArrLeft,
    Char_ArrRight,
    Char_COUNT
}
;
enum
{
    KeyMouseStyle_Disabled,
    KeysMouseStyle_Side,
    KeysMouseStyle_Line,
    KeysMouseStyle_COUNT
};

enum
{
    UpdateSpeed_Fastest,
    UpdateSpeed_Fast,
    UpdateSpeed_Normal,
    UpdateSpeed_Slow,
    UpdateSpeed_Slowest,
    UpdateSpeed_COUNT
};