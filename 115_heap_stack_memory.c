#include<stdio.h>
#include<stdlib.h>

//115  c  stack and heap memory

//stack temporary data
//heap long waiting memory compare to stack


int* heapAllocate(int size){
    int* arry = malloc(sizeof(int)*size);

printf("The address of the array %p \n",arry);
printf("The address of the variable [arry] = %p \n",&arry);

    return arry;
}

 
 
int main() {
 
 int size =10;

 int* array = heapAllocate(10);
 printf("The address of array inside main %p \n",array);
 printf("The address of the variable inside main [array] = %p \n",&array);
 
    return 0;
}
