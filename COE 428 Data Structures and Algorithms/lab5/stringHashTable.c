#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//
//
//

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];


int hashvalue(char * tag)
{
    int string_size = strlen(tag);
    int index = 0;
    int ascii_size = 0;
   



    //hash function.

     //counts ascii sum
    for(index; index < string_size; index++)
    {
        ascii_size = ascii_size + tag[index];
    }


    int value = ascii_size;
    while(value >     HASH_TABLE_SIZE)
    {
        value = value/2;

    }

      return value; 

}


void add(char * tag)
{

    int val = hashvalue(tag);
    hash_table[val].count++;
    hash_table[val].string = tag;

}
int get(char * tag)
{
    return hash_table[hashvalue(tag)].count;
}