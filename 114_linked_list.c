#include<stdio.h>
#include<stdlib.h>

//114  c linked list

typedef struct node{
  int data;
  struct node* next;
}node_t;
 
int main() {
node_t one;
node_t two;
node_t three;

one.data=1;
two.data =2;
three.data =3;

one.next =&two;
two.next =&three;
three.next =NULL;

node_t* it=&one;

while (it!=NULL)
{
    printf("data: %d \n",it->data);
    it=it->next;
}

 


    
    return 0;
}
