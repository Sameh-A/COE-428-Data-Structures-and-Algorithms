Sameh Ahmed 
500907041
1. The advantage to the betterSort is that
any parameters within the array can be sorted
as opposed to the mySort used, which can only 
sort any two parameters if the sort is edited each 
time. with the betterSort none of the code must be
edited since a first index and last index is called
by the user. Whereas for mySort the array and
the mySort method must be edited if different boundries 
are made. Thus the betterSort is more efficient
then the mySort

code : void betterSort(int data[], first, last)  
{  
    int i, key, j;  
    for (i = first; i < last; i++) 
    {  
        key = d[i];  
        j = i - 1;  
  
        while (j >= 0 && d[j] > key) 
        {  
            d[j + 1] = d[j];  
            j = j - 1;  
        }  
        d[j + 1] = key;  
    }  
}  

note : insertion sort is taken from lecture notes
provided on D2L.