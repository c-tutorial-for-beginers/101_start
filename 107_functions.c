#include<stdio.h>
#include<stdlib.h>

//103  c functions


void sayHi(){
    printf("Hello how are you?\n");
}

int max(int num1,int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int main() {


    sayHi();
   
    int x=10,y=30;
    printf("Max of X,y is %d\n",max(x,y));
    
    return 0;
}
