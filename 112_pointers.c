#include<stdio.h>
#include<stdlib.h>

//112  c pointers

 
// pointers are variables that holds memory address 


 

int main() {
  int x=10;

  printf("X = %d\n",x);

  int* ptrX=&x;

  printf("Address of x is %p \n",ptrX);

  *ptrX = 20;
    printf("X = %d\n",x);

    printf("the address of ptrx is = %p \n",&ptrX);

    
    return 0;
}
