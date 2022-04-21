#include <stdio.h>
#include <cstring>
int main (){
   
 	char s[40];
 	printf ("nhap chuoi s:\n");
 	scanf ("%s",s);
 	int a=0;
	int e=0;
	int i=0;
	int o=0; 
	int u=0;
	printf ("chuoi s vua nhap la: %s\n",s);
 	for (int j=0;j<40;j++){
 		
 		if(s[j]==97){
 			a++;
		}
		if(s[j]==101){
 			e++;
		}
		if(s[j]==105){
 			i++;
		}
		if(s[j]==111){
 			o++;
		}
		if(s[j]==117){
 			u++;
		}
 	}
 	printf(" so nguyen am a la: %d\n",a);
 	printf(" so nguyen am e la: %d\n",e);
 	printf(" so nguyen am i la: %d\n",i);
 	printf(" so nguyen am o la: %d\n",o);
  	printf(" so nguyen am u la: %d\n",u);
}
