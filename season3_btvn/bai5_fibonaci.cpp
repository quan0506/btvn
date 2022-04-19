#include<stdio.h>
int main() {
  int n;
 printf ( "nhap so n:");
 scanf("%d",&n);
 int i=1;

 int a1 = 1;
 int a2 = 1;
    if (n == 1 || n == 2){
 printf("so thu %d trong day Fibonaci la 1",n);
 }else{
         
 int a;
    while (i <= n-2)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    printf("so thu %d trong day Fibonaci la: %d",n,a);
}
}
