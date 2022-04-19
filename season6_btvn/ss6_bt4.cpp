#include<stdio.h>
int main (){
	int n;
	printf ( "Nhap n=");
	scanf ("%d",&n);
	int arr[n];
	printf ("Nhap mang:");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	// tim a  - tim min
	// tim b - tim max
	int a = arr[0];
	int b = arr [0];
	for( int i=1;i<n;i++){
		if (arr[i] >b){
			b = arr [i];
		}
		if (arr[i]<a ){
			a = arr [i];
		}
	}
	int a1=a;
	if(a<0){
		a1=-a;
	}
	int b1=b;
	if(b<0){
		b1=-b;
	}
	if (a1> b1){
		printf("doan can tom [%d,%d]",-a1,a1);
	}else{
		printf ("doan can tim [%d,%d]",-b1,b1);
	}
	printf ("doan can tim [%d,%d]",a,b);
}
