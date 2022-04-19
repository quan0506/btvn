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
	  
	   if(a==0){
	   	  if(b==0){
	   	  	if(c==0){
	   	  		printf("PT vo so nghiem") ;
	   	  	}else{
	   	  		printf("PT vo nghiem") ;
				 } 
			 }else{
			 	float x = -c/((float)b);
			 	printf("PT co nghiem: %f",x);
			 }
	   }else{
	   	int d= b*b - 4*a*c ;
	   	if(d < 0){
	   		printf("PT vo nghiem");
		   }else{
		   	if(d==0){
		   		float x =  -b/((float)2*a);
		   		printf("PT co ngiem: %f",x);
		   		
			   }else{
			   	float x1 = (-b+ sqrt(d))/(2*a);
			   	float x2 = (-b- sqrt(d))/(2*a);
			   	printf("Nghiem thu nhat: %f \n",x1);
			   	printf("Nghiem thu hai: %f \n ",x2);
			   }
		   }
	   }
 }
