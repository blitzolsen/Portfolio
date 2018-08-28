/*****************************************************
 * File: bullet.cpp
 * Author: Stettsen Olsen
 *
 * Description: This file contains the main function
 *  that starts the game and the callback function
 *  that specifies what methods of the game class are
 *  called each time through the game loop.
 ******************************************************/
#include "bullet.h"
#include <iostream>
using namespace std;

/*****************************************************
 * BULLET :: fire(Point point, float angle)
 ******************************************************/
void Bullet::fire(Point point, float angle)
{
	velocity.setDx(-cos((M_PI / 180) * (angle)) * 10.0); 
	velocity.setDy(sin((M_PI / 180) * (angle)) * 10.0);
}
