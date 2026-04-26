#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

//117  c  threads
// pthread_create(thread, attr, routine, arg);
 
 

 
pthread_t getPid (){
    return pthread_self();
}
void* display(){
    pthread_t  thread_id = getPid();
     printf("The ID of the thread is %p\n",(void*)thread_id);
    printf("Hello world from thread \n");
    printf("\n===================================================\n\n");
   

    return NULL;
}
 
int main() {
 
  pthread_t thread_id;

  pthread_create(&thread_id,NULL,display,NULL);
  printf("thread_id in main is %p\n",(void*)thread_id);

  pthread_join(thread_id,NULL);

 
 
    return 0;
}

