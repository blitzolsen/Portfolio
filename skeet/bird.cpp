/*****************************************************
 * File: bird.cpp
 * Author: Stettsen Olsen
 *
 * Description: This file contains the main function
 *  that starts the game and the callback function
 *  that specifies what methods of the game class are
 *  called each time through the game loop.
 ******************************************************/
#include "bird.h"
#include <iostream>
using namespace std;

/*****************************************************
 * BIRD :: hit()
 ******************************************************/
int Bird ::hit()
{
    if (alive)
    {
        kill();
        return 1;
    }
    else
        return 0;
}