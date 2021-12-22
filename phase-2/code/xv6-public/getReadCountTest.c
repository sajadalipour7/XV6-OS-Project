#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    int readCount=getReadCount();
    printf(1,"%d \n",readCount);
    exit();
}