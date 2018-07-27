/***********************************************************************
 * Header File:
 *    Velociy : A class representing the lunar landscape
 * Author:
 *    Stettsen Olsen
 * Summary:
 *    The velocity class is responsible for the speed of the lander.
 ************************************************************************/
#ifndef VELOCITY_H
#define VELOCITY_H

#include <iostream>
using namespace std;

class Velocity
{
  public:
     float Dx;
     float Dy;

     /*********************************************
     * Velocity Constructor
     *********************************************/
     Velocity()
     {
        Dx = -0.3;
     }
     /*********************************************
     * Veloctiy Methods
     *********************************************/
     void setDx(float x)
     {
        this->Dx = x;
     }
     float getDx()
     {
        return Dx;
     }
     void setDy(float y)
     {
        this->Dy = y;
     }
     float getDy()
     {
        return Dy;
     }

};

#endif /* VELOCITY_H */
