#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  int value;
  int sizeOfheap;
  sizeOfheap = heapSize();
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
addHeap(value);
  }
XMLheapprint(0);
heapDelete(); 
int loop2;
for(loop2=0;loop2<sizeOfheap;loop2++){
	printf("%d\n",pop());
	
	
}








}
