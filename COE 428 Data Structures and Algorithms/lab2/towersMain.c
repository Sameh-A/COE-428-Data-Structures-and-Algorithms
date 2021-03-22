#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char *argv[])
{
    int n = 3;
    int from = 1;
    int dest = 2;

/* if there is no argument*/ 
if (argc==1) {		        
	towers(3,1,2);
	exit(0);
    }
if (argc>4) {		        
	fprintf(stderr,"please enter one or three parameters");
        exit(1);
    }
if (argc==3) {		        
	fprintf(stderr,"please enter another parameter or get rid of one");
        exit(1);
    }
if (argc==2) {		        
	if(atoi(argv[1])<=0){
	fprintf(stderr,"please enter a positive quantity or a value that isnt 0");
        exit(1);
}
else{
	n = atoi(argv[1]);
	towers(n,1,2);
	exit(0);
    }
}

if (argc==4) {	
if(atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0 || atoi(argv[3]) <=0 || atoi(argv[2]) > 3 || atoi(argv[3]) > 3 ){
           fprintf(stderr,"invalid inputs(tower must exist 1-3 and tower must be postive)");
	    exit(1);
}
else{	        
	n = atoi(argv[1]);
	from = atoi(argv[2]);
	dest = atoi(argv[3]);
	towers(n,from,dest);
	exit(0);
    }


}}


