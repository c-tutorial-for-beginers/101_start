#include<stdio.h>
#include<stdlib.h>

//113  c malloc and free

 
//  malloc stores bytes and returns pointer to the first byte
//free clears the memory


 

int main() {

    int* dynamicArry =malloc(sizeof(int)*5);

    dynamicArry[0] =8;
    dynamicArry[1]=6;
    dynamicArry[2] =20;
    dynamicArry[3] =19;
    dynamicArry[4] =10;
    int* ptr=dynamicArry;

  for (int i = 0; i < 5; i++) {
    printf("%d\n",dynamicArry[i] );
    
}
    
  
    free(dynamicArry);
    return 0;
}
