#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>
#include <struct.h>

void haClose(stock *head)
{
	
	stock *iter = head;
	while(iter != NULL)
	{
		float hClose = 0;
		float hOpen = 0;
		float hHigh = 0;
		float hLow = 0;
		
		hClose = (iter->open + iter->high + iter->low + iter->close)/4;
		
		hOpen = (iter->open + iter->close)/2;
		
		hHigh = (iter->high > iter->open) ? (iter->high > iter->close ? iter->high : iter->close) : (iter->open > iter->close ? iter->open : iter->close);
		
		hLow = (iter->low < iter->open) ? (iter->low < iter->close ? iter->low : iter->close) : (iter->open < iter->close ? iter->open : iter->close);
		
		display_stock(iter);
		
		printf("hClose -> %f\n", hClose);
		printf("hOpen -> %f\n", hOpen);
		printf("hHigh -> %f\n", hHigh);
		printf("hLow -> %f\n", hLow);
		printf("\n");
		iter = iter->next;
	}
}	
