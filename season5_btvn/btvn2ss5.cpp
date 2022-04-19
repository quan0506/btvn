#include <stdio.h>

int main(){
 int n;
 printf("nhap so n:");
  scanf("%d",&n);
  int ary[n];
    int i, total=0,  so=0;
    float tb=0;
    for(i=0; i<n; i++)
    {
    	printf("nhap a[%d]",i);
	 scanf("%d",&ary[i]);
  }
  for(i=0; i<n; i++){
  	if(ary[i]%2!=0&&i%2==0){
  		total=total+ary[i];
  		so=so+1;
  		 }
  }
  printf("so so le vi tri chan la: %d\n",so);
  printf("total la: %d\n",total);
  tb=(float)total/so;
  printf("trung binh cong cac so le vi tri chan cua %d so la: %f\n",n,tb);
}
