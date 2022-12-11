#ifndef _STRUCT_H_
#define _STRUCT_H_

#define DATE_LEN 100
#define STOCK_LINE_BUFFER 256

//#define PARSEDLEN 200
//#define RANGE1 (float)10
//#define RANGE2 (float)50

typedef struct _stock
{
	char date[DATE_LEN];
	float open; 
	float high;
	float low;
	float close;
	float adjClose;
	int volume;
	struct _stock *next;
} stock;

#endif
