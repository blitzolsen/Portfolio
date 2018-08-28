/*************************************************************
 * File: bird.h
 * Author: Stettsen Olsen
 *
 * Description: Base Class for Bird in the skeet game.
 *
 *************************************************************/

#ifndef BIRD_H
#define BIRD_H
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "flyingObjects.h"

class Bird : public FlyingObjects
{

  public:
    float yPos;
    Bird(Point point) : yPos(random(-200, 200))
    {
        alive = true;
        setPoint(point);
        velocity.setDx(random(3, 7));
        if (yPos > 0)
            velocity.setDy(random(-4, -1));
        else
            velocity.setDy(random(1, 4));
    }
    void setPoint(Point point)
    {
        this->point.setX(-200);
        this->point.setY(yPos);
    }
    virtual void draw() { drawCircle(point, 15); }
    virtual int hit();
};

#endif /* BIRD_H */
