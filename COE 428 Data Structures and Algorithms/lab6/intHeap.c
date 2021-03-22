/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
#include <stdio.h>
#include <stdlib.h>
 int size = 0;
int heapArray[1000];
/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

void heapDelete()
{
int i=1;
int j=i+1;
int k;
int temp1; 
 
  /*
  for loop that ensures heap goes in descending order
  
  */
  for (i = 1; i < size; i++) 
        {
            for (j=i+1 ; j < size; j++) 
            {
                if (heapArray[i] < heapArray[j]) 
                {
					
                    temp1 = heapArray[i];
                    heapArray[i] = heapArray[j];
                    heapArray[j] = temp1;
                }
            }
        }
	for (k=0;k<size;k++){
		  printf("%d/n",heapArray[k]);
		 push(heapArray[k]);
		
	}
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
 int getpNode(int x)
{
return ((x-1)/2);
}
 void heapify(int chnode) {

            int pnode;
			int  holder;

            if (chnode != 0) {
                  pnode = getpNode(chnode);
                  if (heapArray[pnode] < heapArray[chnode]) {
                        holder = heapArray[pnode];
                       heapArray[pnode] = heapArray[chnode];
                        heapArray[chnode] = holder;
                        heapify(pnode);

                  }

            }

      }
void addHeap(int thing2add)
{
	size++;
    heapArray[size - 1] = thing2add;
    heapify(size - 1);
}
 



/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}

void XMLheapprint(int node)
{
	if(node <=size){
 printf("\n<node id= %c%d%c >", 34,heapArray[node],34);
if((node*2+1)<=size){
	XMLheapprint(node*2+1);
	
}
if((node*2+2)<=size){		
	XMLheapprint(node*2+2);
}

}
printf("</node>");

}




















