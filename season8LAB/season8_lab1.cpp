#include <stdio.h>
#include <math.h>
#include "func.h"
int main (){
	int n;
	printf ("vui long nhap n:");
	scanf ("%d",&n);
	int z= tinhTongCacChuSo(n);
	printf ("tong cac chu so la: %d",z);
}
