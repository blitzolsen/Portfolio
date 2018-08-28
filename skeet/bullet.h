/*************************************************************
 * File: bullet.h
 * Author: Stettsen Olsen
 *
 * Description: Base Class for Bullet in the skeet game.
 *
 *************************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"
#include "flyingObjects.h"
#include <cmath> // used for sin, cos, and M_PI
#define BULLET_SPEED 10.0

class Bullet : public FlyingObjects
{
  public:
    Bullet()
    {
        alive = true;
        point.setX(200);
        point.setY(-200);
    }
    void draw() { drawDot(point);}
    void fire(Point point, float angle);
    void setPoint(Point point) { this->point = point; }
};

#endif /* BULLET_H */