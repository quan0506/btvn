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
   int x;
 printf("nhap so x:");
  scanf("%d",&x);
  bool f=true;
   for(i=0; i<n; i++){
   	if(ary[i]==x){
   		
   	f=false;
   		break;
	   }
   }
  if(f){
  
  printf("%d khong co trong mang",x);
  }else{
  	printf("%d co trong mang",x);
  }
}
