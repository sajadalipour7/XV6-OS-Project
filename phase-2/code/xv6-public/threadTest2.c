#include "types.h"
#include "stat.h"
#include "user.h"

void childPrint(void * args){
    // printf(1, "hi, childs function executed properly with argument : %d\n",  *(int*)args);
    int i;
    for(i=0;i<10;i++){
        printf(1,"%d ",*(int*)args);
    }
}


int main(void){
    int argument_1=1; 
    int argument_2=2;
    int argument_3=3;
    int thread_id_1 = thread_creator(&childPrint, (void*)&argument_1);
    int thread_id_2 = thread_creator(&childPrint, (void*)&argument_2);
    int thread_id_3 = thread_creator(&childPrint, (void*)&argument_3);

    if(thread_id_1 < 0)
        printf(1, "thread_create failed\n");
   if(thread_id_2 < 0)
        printf(1, "thread_create failed\n");
   if(thread_id_3 < 0)
        printf(1, "thread_create failed\n");

    thread_join();
    thread_join();
    thread_join();

    printf(1, "thread_id : %d\n", thread_id_1);
    printf(1, "thread_id : %d\n", thread_id_2);
    printf(1, "thread_id : %d\n", thread_id_3);
    exit();
}