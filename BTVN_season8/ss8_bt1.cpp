#include <stdio.h>
#include "tinhtoan.h"
int main(){
	int a,b,c;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf(" gia tri cua %d luy thua %d la: \n",a,b);
	printf("%d",c=luyThua(a,b));

}
