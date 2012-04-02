#include "KiTrack/IHit.h"

#include <cmath>

using namespace KiTrack;

float IHit::distTo( IHit* otherHit ){
   
   
   
   float dx = otherHit->getX() - _x;
   float dy = otherHit->getY() - _y;
   float dz = otherHit->getZ() - _z;
      
   return sqrt( dx*dx + dy*dy + dz*dz );
   
}



 



   