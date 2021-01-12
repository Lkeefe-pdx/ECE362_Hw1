/*
ECE361 Embedded Operating Systems
Hw1 - val
Using argc and argv to pull command line arguments to add or multiple
Uses makefile to call test and executables.
By Liam Keefe
1/11/2021

*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int i = 0;
    int total = 0;
    int conv;

    if (strcmp(argv[1], "-m") == 0){
        total = 1;
        for (i = 2; i < argc; i++){
            conv = atoi(argv[i]);
            total = total * conv;

        }
    }

    else{
        for (i = 1; i < argc; i++){
            conv = atoi(argv[i]);
            total += conv;
        }
    }


    printf("Output: %d\n", total);
    //return total;  //Gets makefile errors with the return

}

