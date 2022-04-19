#include <stdio.h>
#include <cmath>

int main(){
int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	float ary[n];
  	float a,min,arymin=0;
    int i;
    for(i=0;i<n;i++){
    	printf("nhap a[%d]",i);
   		scanf("%f",&ary[i]);
	}
	int x;
	printf("nhap so x:");
  	scanf("%d",&x);
  	min=fabs(ary[0]-(float)x);
	for(i=0;i<n;i++){
		a= fabs(ary[i]-(float)x);
		if (min>=a){
			min=a;
			arymin=ary[i];
		}
	}
	for(i=0;i<n;i++){
      	if(min==fabs(ary[i]-(float)x)){
		    printf("cac gia tri trong mang gan gia tri x nhat la ary[%d] gia tri la: %f\n",i,ary[i]);
		}
	}

}
