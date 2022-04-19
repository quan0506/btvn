#include <stdio.h>
#include <cmath>

int main(){
int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	float ary[n];
  	float a,max=0,arymax=0;
    int i;
    for(i=0;i<n;i++){
    	printf("nhap a[%d]",i);
   		scanf("%f",&ary[i]);
	}
	int x;
	printf("nhap so x:");
  	scanf("%d",&x);
	for(i=0;i<n;i++){
	    a= fabs(ary[i]-(float)x);
			if (max<=a){
			max=a;
		    arymax=ary[i];
	}
	}
	for(i=0;i<n;i++){
      	if(max==fabs(ary[i]-(float)x)){
		    printf("cac gia tri trong mang xa gia tri x nhat la ary[%d] gia tri la: %f\n",i,ary[i]);
		}
	}
}
