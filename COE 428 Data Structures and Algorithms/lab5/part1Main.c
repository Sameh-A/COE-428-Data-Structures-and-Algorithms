#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
                printf("invalid");
            }
            else
            {
             push(word);
		
            }
        }
    else if(ch =='/')
       {
       gets(word);
       if(isalpha(word))         {
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
              printf("invalid ");

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
   }
   else
	{
		printf("invalid\n");
	}

}