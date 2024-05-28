#pragma once

#include "Lp/Sys/ctrl.h"
namespace starlight {
    class Controller {
        public:
        enum Buttons {
	        A = 1 << 0,
            B = 1 << 1,
            ZL = 1 << 2,
            X = 1 << 3,
            Y = 1 << 4,
            ZR = 1 << 5,
            RStick = 1 << 6,
            LStick = 1 << 7,

            Unk1 = 1 << 8,
            Minus1 = 1 << 9,
            Plus1 = 1 << 10,
            Plus2 = 1 << 11,
            Minus2 = 1 << 12,
            L = 1 << 13,
            R = 1 << 14,
            Unk2 = 1 << 15,

            UpDpad = 1 << 16,
            DownDpad = 1 << 17,
            LeftDpad = 1 << 18,
            RightDpad = 1 << 19,
            UpLStickOrdinal = 1 << 20,
            DownLStickOrdinal = 1 << 21,
            LeftLStickOrdinal = 1 << 22,
            RightLStickOrdinal = 1 << 23,
            
            UpRStickOrdinal = 1 << 24,
            DownRStickOrdinal = 1 << 25,
            LeftRStickOrdinal = 1 << 26,
            RightRStickOrdinal = 1 << 27,
        };

        Lp::Sys::Ctrl *mController;
        long mLastPoll[20];
        int mCntr;
        
        Controller();
        Controller(Lp::Sys::Ctrl *controller);
        void update();
        u32 isHeld(Buttons inputs);
        u32 isPressed(Buttons inputs);
        u32 wasPressed(Buttons inputs);
        u32 isPressedWithRepeat(Buttons inputs);
        
    };
};