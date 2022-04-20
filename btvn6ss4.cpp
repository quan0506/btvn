#include <stdio.h>
#include <cmath>


int main(){
	int	n;
	int A=0;

	printf("nhap n:");
	scanf("%d",&n);
		printf("so nguyen duong %d: ",n);
		while (n>10){
	A= n%10;
	if(A%2!=0){
	n=n/10;
	}else{
		break;
	}
}
	if(n%2==0){
			printf("khong phai toan chu so le");
	}else{
			printf("toan chu so le");
}
}
