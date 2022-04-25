#include <stdio.h>
#include <math.h>
#include "func.h"
int main (){
	int a;
	printf ("nhap a=");
	scanf ("%d",&a);
	int b;
	printf ("nhap b=");
	scanf ("%d",&b);
	int c;
	printf ("nhap c=");
	scanf ("%d",&c);
	if (kiemTraTamGiac(a,b,c)){
		printf ("%d %d %d la tam giac",a,b,c);
	}else{
	
		printf ("day khong phai la tam giac");
}
	int v = tinhChuViTamGiac(a,b,c);
	printf ("\nchu vi tam giac la: %d",v);
}
