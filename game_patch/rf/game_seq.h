#pragma once

#include <patch_common/MemUtils.h>

namespace rf
{
    enum GameSeqState
    {
        GS_INIT = 0x1,
        GS_MAIN_MENU = 0x2,
        GS_EXTRAS_MENU = 0x3,
        GS_INTRO_VIDEO = 0x4,
        GS_LOADING_LEVEL = 0x5,
        GS_SAVE_GAME_MENU = 0x6,
        GS_LOAD_GAME_MENU = 0x7,
        GS_8 = 0x8,
        GS_9 = 0x9,
        GS_AUTO_LOAD_LEVEL = 0xA,
        GS_IN_GAME = 0xB,
        GS_C = 0xC,
        GS_EXIT_GAME = 0xD,
        GS_OPTIONS_MENU = 0xE,
        GS_MP_MENU = 0xF,
        GS_HELP = 0x10,
        GS_QUITING = 0x11,
        GS_IN_SPLITSCREEN_GAME = 0x12,
        GS_GAME_OVER = 0x13,
        GS_MESSAGE_LOG = 0x14,
        GS_GAME_INTRO = 0x15,
        GS_FRAMERATE_TEST_END = 0x16,
        GS_CREDITS = 0x17,
        GS_BOMB_TIMER = 0x18,
        GS_19 = 0x19,
        GS_1A = 0x1A,
        GS_1B = 0x1B,
        GS_1C = 0x1C,
        GS_1D = 0x1D,
        GS_MULTI_SERVER_LIST = 0x1E,
        GS_MULTI_SPLITSCREEN = 0x1F,
        GS_MULTI_CREATE_GAME = 0x20,
        GS_MULTI_GETTING_STATE_INFO = 0x21,
        GS_MULTI_LIMBO = 0x22,
    };

    static auto& GameSeqSetState = AddrAsRef<int(GameSeqState state, bool force)>(0x00434190);
    static auto& GameSeqGetState = AddrAsRef<GameSeqState()>(0x00434200);
}
