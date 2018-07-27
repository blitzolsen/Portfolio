/*************************************************************
 * File: toughBird.h
 * Author: Stettsen Olsen
 *
 * Description: Base Class for Bird in the skeet game.
 *
 *************************************************************/

#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "bird.h"
#define HITS 3

class ToughBird : public Bird
{
public:
  int hits;
  ToughBird() : Bird(point), hits(3)
  {
    velocity.setDx(random(2, 4));
    float yPos = random(-200, 200);
    if (yPos > 0)
      if (yPos > 0)
        velocity.setDy(random(-3, 0));
      else
        velocity.setDy(random(1, 4));
  }

  void draw() { drawToughBird(point, 15, 3);}
  int hit();
  void setPoint(Point point)
    {
        this->point.setX(-200);
        this->point.setY(yPos);
    }
  
};

#endif /* TOUGHBIRD_H */
