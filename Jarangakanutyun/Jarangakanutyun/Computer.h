#pragma once
#include "CPU.h"
class Computer :
    public CPU
{
    protected :
        char* display;
        int ram;
        int ssd;
    public:
        void set();
        void get();

};

