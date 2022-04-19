 #include <stdio.h>
 #include <math.h>
 int main(){
 	 int a,b,c ;
	  printf("Nhap a=");
	  scanf("%d", &a) ;
	  printf("Nhap b=");
	  scanf("%d", &b) ;
	  printf("Nhap c=");
	  scanf("%d", &c) ;
	  
	  if ( a + b> c){
	  	if ( a + c > b){
	  		if ( b + c >a ){
	  			printf ( " day la mot tam giac\n ");
	  				int p = ( a + b + c )/2;
	  	            float C = 2*p ;
	  	            float S = sqrt(p*(p-a)*(p-b)*(p-c));
	  	        printf ( " dien tich tam giac : %f", C);
	  	
	  			}else{
			  	printf ( " day khong phai tam giac ");
			  }
		  }
	  }
	  	
	  }
