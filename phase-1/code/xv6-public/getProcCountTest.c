#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    int procCount=getProcCount();
    printf(1,"%d \n",procCount);
    exit();
}