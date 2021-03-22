#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stringHashTable.c"
extern char *  pop();
extern void push(char *);
extern void add(char * tag);

int main (int argc, char * argv[])
{


  int ch;
  int current_letter;
  char *word;
  while ((gets(ch)) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')) 
    {
       continue;
    }
    else if(ch=='<')
    {
        gets(word);
        if(isalpha(word))
        {
           current_letter = getchar();

            if(current_letter !='>')
            {
                printf("invalid input");
            }
            else
            {
             push(word);
		add(word);
            }
        }
    else if(ch =='/')
       {
       gets(word);
       if(isalpha(word))//if ch is an alphabet
         {
           current_letter = getchar();
           int stack_state = isEmpty();

            if(current_letter =='>')
             {
                if(stack_state == 1)
                    { 
                        printf("Invalid");

                    }
                    else if(stack_state != 1) 
                    {
                        if(strcmp(pop(),word)== 0)
						{
							continue;
						}
                    }
                    else 
                    {
                      printf("invalid");

                    }
            }
            else
            {
              printf("invalid input");

            }
         }
      }
  } 
  else
  {
      exit(0);
  }
} 

 if(isEmpty()== 1)
  {
       printf("valid\n");
	int index1=0;
       for(index1; index1<HASH_TABLE_SIZE;index1++ )
       {
           printf("%s,  %d",hash_table[index1].string, hash_table[index1].count );
       }
 }
}