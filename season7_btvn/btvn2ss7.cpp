#include <stdio.h>
#include <cstring>
int main (){
    int n;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	char s[n][4];
 	printf ("nhap mang chuoi n=\n");
 	for (int i=0;i<n;i++){
 		printf("nhap s[%d]: \n",i);
 		scanf ("%sn",s[i]);
 	   	printf("s[%d] la : %s\n",i,s[i]);
 	}
 	char str[4];
 	printf ("nhap  chuoi str=\n");
   	scanf ("%sn",str);
   	printf("str la : %s\n",str);
   	bool f=true;
	for (int i=0;i<n;i++){
		if (strcmp (s[i],str)==0){
   	//		printf("s[%d] la : %s\n",i,s[i]);
   			f=false;
   			break;
   	   	}
	}
 	if(f){
 		printf("chuoi nhap vao khong co trong danh sach");
	}else{
		printf("chuoi nhap vao co trong danh sach");
	}
}
