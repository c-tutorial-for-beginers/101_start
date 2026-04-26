#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

//117  c  threads
// pthread_create(thread, attr, routine, arg);
 
 

 
pthread_t getPid (){
    return pthread_self();
}
void* display(){
     
     printf("The ID of the thread is %p\n", getPid());
    printf("Hello world from thread \n");
    printf("\n===================================================\n\n");
   

    return NULL;
}
 
int main() {
 
  pthread_t thread_id;

  printf("The ID of the main thread is %p\n", getPid());
  
  pthread_create(&thread_id,NULL,display,NULL);
  printf("thread_id in main is %p\n", thread_id);

  pthread_join(thread_id,NULL);

 
 
    return 0;
}

