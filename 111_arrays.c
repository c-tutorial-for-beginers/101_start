#include<stdio.h>
#include<stdlib.h>

//111  c arrays

 



 

int main() {

    int x[]={4,8,9,2,3};
    int length = sizeof(x)/sizeof(x[0]);
    for(int i=0;i<length;i++){
        printf("%d : %d \n",i,x[i]);
    }
   
    
    return 0;
}
