#include<stdio.h>
#include<stdlib.h>

//103  c struct

struct Coordinate
{
    double x;
    double y;
};

struct Coordinate position(double x,double y)
{
    struct Coordinate p = { x, y };
    return p;
};

 

int main() {

  struct  Coordinate box = {.x=10.5,.y=45.3};

  struct Coordinate box2 = position(4.6,8.7);

  printf("Ur box is at position(%lf,%lf) \n",box.x,box.y);
   
  printf("Ur box2 is at position(%lf,%lf) \n",box2.x,box2.y);


    
    
    return 0;
}
