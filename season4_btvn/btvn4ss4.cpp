#include <stdio.h>
#include <cmath>


int main(){
	int	n;
	int A=0;
	printf("nhap n:");
	scanf("%d",&n);
		printf("chu so dau tien cua %d la: ",n);
		while (n>10){
//	A=A+ n%10;
	n=n/10;
}
		printf("%d",n);
}
