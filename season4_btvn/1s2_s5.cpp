#include <stdio.h>
int main(){
	int n;
	int S=0; 
	do{
	printf("nhap so n: ") ;
	scanf("%d",&n);
	printf("cac uoc cua %d la: ",n);
	} while(n<=0) ;
	

	for(int i=1;i<n;i++) {
		if(i%i==0) ;
		printf ("%d",i) ;
		S=S+i;
	}
	printf ("tong cac uoc cua %d la: %d ",n,S) ;
}
