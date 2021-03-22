//Sameh Ahmed
#include "mySort.h"
#include "metrics.h"
void mergeSort(int array[],int first,int mid,int last);
void mySort(int array[], unsigned int first, unsigned int last)
    {
      if(myCompare(first,last)<0)//recursive method
	{
		int p=((first+last)/ 2);
		mySort(array,first,p);
		mySort(array,p,last);
		mergeSort(array,first,p,last);
	}

    }
void mergeSort(int array[],  int first,  int mid, int last)
    {
int i,j,k;
int n1;
n1 =(mid-first)+1;
int n2;
n2 = last - mid;
int L[n1+1];
int R[n2+1];

for(i=0;i<n1;i++){

myCopy(&array[first+i],&L[i]);

}
for(j=0;j<n2;j++){

myCopy(&array[mid+j+1],&R[j]);

}
 L[n1]=9999999;//infinity
 R[n2]=9999999;//infinity
i=1;
 j=1;
for(k=first;k<=last;k++){
if(myCompare(L[i],R[j])<=0){
myCopy(&L[i],&array[k]);
i++;
}
else{
myCopy(&R[j],&array[k]);
j++;
}
}

    }
