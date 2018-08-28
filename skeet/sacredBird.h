/*************************************************************
 * File: sacredBird.h
 * Author: Stettsen Olsen
 *
 * Description: Base Class for Bird in the skeet game.
 *
 *************************************************************/

#ifndef SACREDBIRD_H
#define SACREDBIRD_H
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "bird.h"

class SacredBird : public Bird
{
  public:
    SacredBird() : Bird(point) {}
    void draw() { drawSacredBird(point, 15); }
    int hit();
    void setPoint(Point point)
    {
        this->point.setX(-200);
        this->point.setY(yPos);
    }
};

#endif /* SACREDBIRD_H */
