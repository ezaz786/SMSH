#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>
#include <struct.h>

//#define MAXCHAR 1000

int main()
{
    
    printf("###################################################\n");
    printf("********     Welcome to TA Screener 2     ********\n");
    printf("###################################################\n");
    
    float k;
    stock *headPointer = NULL;
    loadFromFile("../data/tatapower.csv",&headPointer);
    
    //printLinkedList(headPointer);
    
    haClose(headPointer);
    
    freeLinkedList(&headPointer);
   
    return EXIT_SUCCESS;

}
 

	
    
    
    
    
    
    
    
    
    
    
   
