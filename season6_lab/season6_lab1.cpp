#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	int ary[n];
    int i;
    for(i=0;i<n;i++){
    	printf("nhap a[%d]",i);
   		scanf("%d",&ary[i]);
			for (int j=0; j<i;j++){
				if (ary[j]==ary[i]){
				printf("trung so, nhap lai a[%d]\n",i);
				scanf("%d",&ary[i]);
				}			
			}
	}
	for(i=0; i<n; i++)
   	{
    	printf(" a[%d] la: %d\n",i,ary[i]);
		
	}
}
