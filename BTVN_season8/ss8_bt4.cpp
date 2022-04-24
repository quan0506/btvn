#include <stdio.h>
#include "nhapdulieu.h"
#include "tinhtoan.h"
int main(){
	int n;
	printf("nhap so n:");
	scanf("%d",&n);
	int arr[n];
	nhapMang (arr,n);
//	xuatMang(arr,n);
//	int n;
// 	printf("nhap so n:");
//  	scanf("%d",&n);
//  	int arr[n];
//    int i,BCNN;
//    for(i=0; i<n; i++)
//    {
//    	printf("nhap a[%d]",i);
//    	scanf("%d",&arr[i]);
//  	}
   	int BCNN=boiCNN(arr,n);
  	printf("boi chung nho nhat cua cac gia tri trong mang la: %d",BCNN);
}
