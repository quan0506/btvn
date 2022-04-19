#include<stdio.h>  
#include<conio.h>  

int main()  
{  
int n,
S =0, m;  

printf("Nhap mot so bat ky: ");  
scanf("%d",&n);  
while(n>0)  
{  
m=n%10;  
S=S +m;  
n=n/10;  
}  
printf("\nTong cac chu so cua so da cho = %d",S);  


} 
