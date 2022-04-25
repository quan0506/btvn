//chuong trinh quan li sinh vien
#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
void menu(){
	printf("\t\tQUAN LY SINH VIEN\n");
	printf("\t============================================\n");
	printf("\t1. Nhap so luong sinh vien cua lop\n");
	printf("\t2. Nhap danh sach ten sinh vien\n");
	printf("\t3. Sap xep ten sinh vien theo thu tu alphabe\n");
	printf("\t4. In ra danh sach sinh vien\n");
	printf("\t5. Thoat\n");
	printf("\t============================================\n");
	printf("\tChon chuc nang:\n");
}
void nhapTenSV(char ten[][50],int k){
 	printf ("nhap ten sinh vien: \n");
 	for (int i=0;i<k;i++){
 		printf ("ten sinh vien thu %d: ",i+1);
 		scanf ("%s",ten[i]);
	}
}
void xuatTenSV(char ten[][50],int k){
	printf("Danh sach sinh vien da sap xep theo thu tu Alphabe la: \n");
	for (int i=0;i<k;i++){
		printf ("\nSTT %d: ",i+1);
		printf("%s",ten[i]);
	}
}
void sapXepTenSV(char ten[][50],int k){
    for(int i=0;i<k;i++){
   	 for (int j=0;j<k-i-1;j++){
			if (strcmp (ten[j],ten[j+1]) >0){
   				char temp[50];
    			strcpy( temp,ten[j]);
   	 			strcpy(ten[j],ten[j+1]);
      			strcpy(ten[j+1],temp);
			}
		}
	}
}
int main()
{
	menu();
	int n,n1,n2,n3; // cac bien cua vong lap chon cac chuc nang cua chuong trinh
	int x; // so luong sinh vien trong lop
	scanf("%d",&n);
	char ten[n][50];
	while(n!=1&&n!=5){
		if	(n<1||n>5){
		printf("so nhap vao ngoai cac gia tri trong menu\n");
		scanf("%d",&n);
		}	
		if(n>1&&n<5){
		printf(" xin chon 1 va enter de nhap so luong sinh vien cua lop:");
		scanf("%d",&n);
		}
	}
	while(n==1){
		printf("nhap so luong sinh vien:");
		scanf("%d",&x);
		printf("da nhap xong so luong, xin chon 2 va enter de nhap danh sach ten sinh vien:\n");
		scanf("%d",&n1);
		while (n1==5){
			return 0;
		}
		while(n1!=2&&n1!=5){
			printf("xin chon 2 va enter de nhap danh sach ten sinh vien:\n");
			scanf("%d",&n1);
		}
		while(n1==2){
			nhapTenSV(ten,x);
			printf("da nhap xong danh sach, xin chon 3 va enter de sap xep ten sinh vien theo thu tu alphabe:\n");
			scanf("%d",&n2);
			while(n2==5){
				return 0;
			}
			while(n2!=3&&n2!=5){
				printf("xin chon 3 va enter de sap xep ten sinh vien theo thu tu alphabe:\n");
				scanf("%d",&n2);	
			}
			while (n2==3){
				sapXepTenSV(ten,x);	
				printf("da sap xep xong, xin chon 4 va enter de in ra danh sach sinh vien theo thu tu alphabe:\n");
				scanf("%d",&n3);
				while (n3==5){
					return 0;
				}
				while(n3!=4&&n3!=5){
					printf("xin chon 4 va enter de in ra danh sach sinh vien theo thu tu alphabe:\n");
					scanf("%d",&n3);	
				}
				while(n3==4){
					xuatTenSV(ten,x);
					printf("\n da in xong, xin moi nhap so chon chuc nang muon thuc hien theo menu\n");
					scanf("%d",&n3);	
					n=n3-1;
					n3++;
				}
				n2++;
			}
			n1=n1+1;
		}
		n=n+1;
	}
	while(n=5){
		return 0;
	}
	return 0;
}
