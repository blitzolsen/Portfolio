/*****************************************************
 * File: toughBird.cpp
 * Author: Stettsen Olsen
 *
 * Description: This file contains the main function
 *  that starts the game and the callback function
 *  that specifies what methods of the game class are
 *  called each time through the game loop.
 ******************************************************/
#include "toughBird.h"
#include <iostream>
using namespace std;

/*****************************************************
 * TOUGHBIRD :: hit()
 ******************************************************/
int ToughBird :: hit()
{
    hits--;
    if (hits >= 1)
    {
        
        return 1;
    }
    else
    {
        kill();
        return 3;
    }
}
