/*****************************************************
 * File: toughBird.cpp
 * Author: Stettsen Olsen
 *
 * Description: This file contains the main function
 *  that starts the game and the callback function
 *  that specifies what methods of the game class are
 *  called each time through the game loop.
 ******************************************************/
#include "sacredBird.h"
#include <iostream>
using namespace std;

/*****************************************************
 * SACREDBIRD :: hit()
 ******************************************************/
int SacredBird :: hit()
{
    kill();
    return -10;
}
