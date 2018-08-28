/*************************************************************
 * File: flyingObjects.h
 * Author: Stettsen Olsen
 *
 * Description: Base Class for Bird in the skeet game.
 *
 *************************************************************/

#ifndef FLYINGOBJECTS_H
#define FLYINGOBJECTS_H
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"

class FlyingObjects
{
protected:
  bool alive;
  Velocity velocity;
  Point point;

public:
  Point getPoint() { return point; }
  Velocity getVelocity() { return velocity; }
  bool isAlive() { return alive; }
  virtual void setPoint(Point point) = 0;
  void setVelocity(Velocity velocity) { this->velocity = velocity; }
  void kill() { alive = false; }
  void advance()
    {
      point.addX(velocity.getDx()); 
      point.addY(velocity.getDy());
      // draw();
    }
  virtual void draw() = 0;
};
#endif /* FLYINGOBJECTS_H */
