//Sameh Ahmed
#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
 int i, key, j;  
    for (i = first; i < last; i++) 
    {  
       myCopy(&array[i],&j);
        j = i - 1;  
  
        while (j >= 0 && (myCompare(array[j],key)>0)) 
        {  
	    mySwap(&array[j],&array[j+1]);
            
            j = j - 1;  
        }  
        myCopy(&array[j+1],&key);  
    }  
    }
