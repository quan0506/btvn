#include <stdio.h>
#include "funcNhapdulieu.h"
#include "funcTinhtoan.h"
int main(){
	int n;
	printf("nhap so n:");
	scanf("%d",&n);
	int arr[n];
	nhapMang (arr,n);
   	int UCLN=uocCLN(arr,n);
  	printf("uoc chung lon nhat cua cac gia tri trong mang la: %d\n",UCLN);
}
