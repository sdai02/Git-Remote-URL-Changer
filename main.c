#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "src/change.h"

int main (int argv, char *argc[]){

    if(argv > 1){
        
        if (strcmp(argc[1], "-c") == 0){
            change(argc[2],argc[3]);   
        }else {
            printf("Usage: -c [username] [repository name]\n");
        }
    } 

    return 0;
}