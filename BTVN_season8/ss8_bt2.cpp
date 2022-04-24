#include <stdio.h>
#include "tinhtoan.h"
int main(){
	int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	int ary[n];
    int i;
    bool f=false;
    for(i=0; i<n; i++)
    {
    	printf("nhap a[%d]",i);
    	scanf("%d",&ary[i]);
  	}
  	int sntnn;
  	sntnn=timMax(ary,n);
  	while(f==false){
  		sntnn++;
  		f=kiemTraSoNT(sntnn);
  		if(f){
  			break;
		  	}
	}

	printf("so nguyen to nho nhat lon hon gia tri trong mang la: %d",sntnn);


}
