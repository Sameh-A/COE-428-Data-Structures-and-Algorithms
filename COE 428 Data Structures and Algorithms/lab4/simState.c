#include <stdlib.h>
#include<stdio.h>
#include <string.h>








int main(int argc, char * argv[])
{
    int lengthOfMachine=8;
    int garbage[9];
    int counting = 0; 
typedef struct stateMachine {

  char stateName;
  struct stateMachine *val0;
  struct stateMachine *val1;

} stateMachine;
// A=0, B=1, C=2 , D=3, E=4 , F=5 , G=6 , H=7


int garbagio(stateMachine *start, char stringy[10000]){
  
   strcat(stringy, &start->stateName);
   char one = start->val0->stateName;
   char two = start->val1->stateName;
   
   if(strchr(stringy, one) != NULL && strchr(stringy, two) !=NULL){
       
       return 1;
       
   }else{
        if(strchr(stringy, one) == NULL){
       garbagio(start->val0,stringy);
        }
         if(strchr(stringy, two) == NULL){
       garbagio(start->val1,stringy);
         }
       
   }
}



stateMachine stateArray[8];
stateMachine *firstState = (&stateArray[3]);//start state D



void delete_input(char deleted, int *counter, int garbage[9], stateMachine *first){
    char visited[100];
    garbagio(first,visited);
   int index = 0;
int i;
    for(i = 0; i<lengthOfMachine; i++){
        if(strchr(visited, deleted)!=NULL){
            printf("Not deleted\n");
            return;
        }
        if(stateArray[i].stateName ==  deleted){
            garbage[*counter] = i; 
       
        }
    }
   
    *counter+=1;
}



void garbage_delete(int *counter, int garbage[9], stateMachine *first){
    
    char visited[100];
    garbagio(first,visited);
   int loop0;
    for(loop0 = 0; loop0<lengthOfMachine; loop0++){
        if(strchr(visited, stateArray[loop0].stateName)==NULL){
             garbage[*counter] = loop0; 
              *counter+=1;
        }
       
    }
   
   
    
}






stateArray[0].stateName = 'A';
stateArray[1].stateName = 'B';
stateArray[2].stateName = 'C';
stateArray[3].stateName = 'D';
stateArray[4].stateName = 'E';
stateArray[5].stateName = 'F';
stateArray[6].stateName = 'G';
stateArray[7].stateName = 'H';

stateArray[0].val0=&stateArray[5];
stateArray[0].val1=&stateArray[4];
stateArray[1].val0=&stateArray[6];
stateArray[1].val1=&stateArray[2];
stateArray[2].val0=&stateArray[6];
stateArray[2].val1=&stateArray[5];
stateArray[3].val0=&stateArray[7];
stateArray[3].val1=&stateArray[1];
stateArray[4].val0=&stateArray[2];
stateArray[4].val1=&stateArray[0];
stateArray[5].val0=&stateArray[3];
stateArray[5].val1=&stateArray[5];
stateArray[6].val0=&stateArray[4];
stateArray[6].val1=&stateArray[7];   
stateArray[7].val0=&stateArray[0];
stateArray[7].val1=&stateArray[1];











fprintf( stdout,"start:%c\n",firstState->stateName);

while(1){
	printf("enter command\n");
	char input[6];
	fgets (input, 100, stdin);
	if(input[0] == 'c'){
		char S = input[4];
		int num = input[2] - '0';
		//printf("%d", num);
		//printf("%c", S);
	    int check = 1;
	int loop1;
		for(loop1 = 0; loop1<counting; loop1++){
		    if(S == stateArray[garbage[counting]].stateName){
		        printf("Invalid change state\n");
		        check = 0;
		        break;
		    }
		}
		
		if(check){
		int loop2;
		for(loop2 = 0; loop2<8; loop2++){
			
			if(stateArray[loop2].stateName == S){
				
				if(num == 0){
				firstState->val0 = &stateArray[loop2];
				}else{
					firstState->val1 = &stateArray[loop2];
				}
				
			}
			
			
		}
		}
	//	printf("%c", firstState->val0->stateName);
	//	printf("%c", firstState->val1->stateName);
		
		
	}else if(input[0] == 'g'){
	char visited[10000];
	garbagio(firstState,visited);
	int count = 0;
	int loop3;
	for( loop3 = 0; loop3<8; loop3++){
	    
	    
	    if(strchr(visited, stateArray[loop3].stateName)==NULL){
	      count++;
	    }
	}

if(count>0){
    
    printf("Garbage: ");
 int loop4;
    	for(loop4 = 0; loop4<8; loop4++){
	    
	    
	    if(strchr(visited, stateArray[loop4].stateName)==NULL){
	     int check = 1;
		int x = 0;
		while(x<counting){
		    if(garbage[x] == loop4){
		        check = 0;
		    }
	    x++;
		}
		
		if(check){
	     
	     
	      printf("%c ",stateArray[loop4].stateName);
		}
	    }
	}
      
}else{
    
    printf("no garbage");
}
		printf("\n");
	}else if(input[0] == 'p'){
		int loop5;
		for(loop5=0;loop5<lengthOfMachine;loop5++){
		
		int check = 1;
		int x = 0;
		while(x<counting){
		    if(garbage[x] == loop5){
		        check = 0;
		    }
	    x++;
		}
		
		if(check){
		fprintf(stdout,"%c %c %c\n",stateArray[loop5].stateName,stateArray[loop5].val0->stateName,stateArray[loop5].val1->stateName);
		}
		}
}else if(input[0] == '0'){

	firstState=firstState->val0;
	fprintf(stdout,"%c\n",firstState->stateName);	
}else if(input[0] == '1'){

	firstState=firstState->val1;
	fprintf(stdout,"%c\n",firstState->stateName);
}else{
    if(input[1]!= '\n'){
    delete_input(input[2],&counting, garbage,firstState);
   // printf("counting: %d char: %d ", counting, garbage[counting-1]);
    
    }else{
        garbage_delete(&counting, garbage,firstState);
        
    }
}
		
	
}


}
