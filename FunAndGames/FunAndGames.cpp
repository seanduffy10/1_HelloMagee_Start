/*
 * Fun to Try! To Dare is To Do!
 *
 * v0.1
 * Author: Sean Duffy
 * Date: 29/09/2021
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
    int delay = 1000; // in  milliseconds

    sd::myTimer timer;
    timer.start();
    int counter = 0;

    sdWait::wait(delay);

    std::cout << "Delay in Seconds: " << timer.elapsedSeconds() << std::endl;
    std::cout << "Delay in Milliseconds: " << timer.elapsedMilliseconds() << std::endl;

    timer.stop();

    return 0;
}


