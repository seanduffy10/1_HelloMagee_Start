/*
 * Fun to Try! To Dare is To Do!
 *
 * v0.1
 * Author: Dr Darryl Charles
 * Date: Summer 2021
 *
 * Copyright notice: Public Domain
 */ 

#include <iostream>
#include <chrono>
#include <thread>
#include "myTimer.h"
#include "myWait.h"

int main()
{
    int delay = 1000;

    dc::myTimer timer;
    timer.start();

    dcw::wait(delay);
    std::cout << "Time elapsed in Seconds: " << timer.elapsedSeconds() << std::endl;
    std::cout << "Time elapsed in Milliseconds: " << timer.elapsedMilliseconds() << std::endl;

    return 0;
}



