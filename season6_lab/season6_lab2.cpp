#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	int ary[n];
  	int tg;
    int i;
    int k;
    for(i=0;i<n;i++){
    	printf("nhap a[%d]",i);
   		scanf("%d",&ary[i]);
 			for (int j=i; j>0;j--){
				if (ary[j-1]>ary[j]){
				tg=ary[j-1];
				ary[j-1]=ary[j];
				ary[j]=tg;
				}			
			}
				for (k=0;k<=i;k++){
					printf(" ary[%d]  sap xep lai theo thu tu be den lon la: %d\n",k,ary[k]);
				}
	}
	for(i=0; i<n; i++)
   	{
    			printf(" a[%d]  sap xep lai la: %d\n",i,ary[i]);
		
	}
}
