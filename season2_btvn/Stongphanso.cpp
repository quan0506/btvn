#include <stdio.h> 
int main() {
	
	float n;
	printf ( " nhap n=") ;
    scanf ( "%f",&n) ;
	 
	 float i= 1;
	 float S=0; 

	while ( n >= i){
		S += 1/i;
	    i ++; 
	
	}
     printf ("S=%f",S) ;	
	
} 

