#ifdef __MAIN_H__
#define __MAIN_H__
#include <struct.h>

extern float haClose(stock *head);

extern int freeLinkedList(stock** headPointer);
extern void appendLinkedList(stock **headPointer, stock* data);
extern void display_stock(stock* st);
extern void printLinkedList(stock *st);
extern int loadFromFile(const char *fileName, stock **headPointer);

#endif
