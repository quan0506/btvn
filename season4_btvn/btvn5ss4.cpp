#include <stdio.h>
#include <cmath>


int main(){
	int	n;
	int A=0;
	int Amax=0;
	printf("nhap n:");
	scanf("%d",&n);
		printf("chu so lon nhat cua %d la: ",n);
		while (n>0){
	A= n%10;
	if(Amax<A){
		Amax=A;
	}
	
	n=n/10;
}
		printf("%d",Amax);
}
