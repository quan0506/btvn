#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
 int n;
 printf("nhap so n:");
  scanf("%d",&n);
  int ary[n];
    int i;
    for(i=0; i<n; i++)
    {
    	printf("nhap a[%d]",i);
	 scanf("%d",&ary[i]);
  }
   for(i=n-1; i>=0; i--){
   	if (ary[i]%2!=0){
   		printf("%d la so le cuoi cung cua mang",ary[i]);
   		break;
	   }
   	
   }
}
