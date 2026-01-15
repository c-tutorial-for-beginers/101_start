#include<stdio.h>
#include<stdlib.h>

//103  c struct

struct Coordinate
{
    double x;
    double y;
};

typedef struct Position{
     double x;
    double y;
} Position_t;

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


  Position_t box3 ={.x=8.2,.y=34.0};

 printf("Ur box3 is at position(%lf,%lf) \n",box3.x,box3.y);



    
    
    return 0;
}
