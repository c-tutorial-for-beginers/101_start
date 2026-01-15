#include<stdio.h>
#include<stdlib.h>

//103 c conditionals
int main(){
  
    int x=-10;

    if(x<0){
        printf("X is negative number\n");
    }else{
        printf("X is posetive number\n");
    }

    double grade = 95;

    if(grade>90){
        printf("Student got A+\n");
    }else if(grade>85){
        printf("Student got A");

    }else if(grade>75){
       printf("Student got b+\n");
    }
 

    
    return 0;
}