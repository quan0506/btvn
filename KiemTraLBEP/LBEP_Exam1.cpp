//  tinh tong day so S
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int i,n;
	float S;
	S=0;
	i= 1;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<1){
			printf( "n khong hop le \n");
		}
	}while(n<1);
	while( i <=n ){
		S= S+ 1.0/i;
		i++;
	}
	printf( "S= %f \n",S);
	printf("Tong day so S: 1 + 1/2 + 1/3 +...+ 1/%d la: %.3f \n ",n,S);
}
