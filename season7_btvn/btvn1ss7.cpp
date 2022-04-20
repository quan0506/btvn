	// nhap vao 1 string, sap xep mang theo alphabet
#include<stdio.h>
#include<string.h>
int main(){
	int n ;
	printf("Nhap n=");
	scanf ("%d",&n);
	
	 char arrs[n][50];
	 for (int i=0;i< n;i++ ){ 
	 scanf("%s",arrs[i]);

}
for ( int i=0;i< n-1;i++){
	for ( int j=0;j< n-1; j++) {
		// so sanh
		// doi cho
	if (strcmp(arrs[j],arrs[j+1])>0) {
		char tmp[50];
		strcpy(tmp,arrs[j]); // tmp = arrs[j];
		strcpy(arrs[j],arrs[j+1]);// arrs[j] = arrs[i]
		strcpy(arrs[j+1],tmp);  // arrs[j+1]=tmp
	}
}
}
printf("sau khi sap xep: \n");
for (int i=0;i<n;i++){
	printf ("%s\n", arrs[i]);
}
}

