#include <stdio.h>
void menu(){
	printf("\t\tTINH TOAN\n");
	printf("\t======================\n");
	printf("\t1. Nhap so\n");
	printf("\t2. Tinh tong\n");
	printf("\t3. Tinh hieu\n");
	printf("\t4. Tinh tich\n");
	printf("\t5. Tinh thuong\n");
	printf("\t6. Thoat\n");
	printf("\t======================\n");
	printf("\tChon:\n");
	}
int sum(int a,int b){
	int sum= a+b;
	return sum;
}
int sub(int a,int b){
	int sub=a-b;
	return sub;
}
int multi(int a,int b){
	int multi=a*b;
	return multi;
}
float div(int a,int b){
	float div=(float)a/b;
	return div;
}
int main(){
	menu();
	int n,k;
	int a,b;
	scanf("%d",&n);

	while(n!=1){
		if	(n<1||n>6){
		printf("so nhap vao ngoai cac gia tri trong menu\n");
		scanf("%d",&n);
		}	
		if(n>1&&n<6){
		printf(" xin chon 1 va enter de nhap so:");
		scanf("%d",&n);
		}
	}
	while(n==1){
		printf("nhap so a:");
		scanf("%d",&a);
		printf("nhap so b:");
		scanf("%d",&b);
		int m=1;
		while(m<2){
			printf("xin moi nhap so chon chuc nang muon thuc hien theo menu\n");
			int x;
			scanf("%d",&x);
			if(x==1){
				n=n-1;
				m=300;
			}
			if(x<1||x>6){
			printf("so nhap vao ngoai cac gia tri trong menu\n");
			}
			if(x==2){
				int tong;
				tong=sum(a,b);
				printf("Tong cua %d va %d la: %d\n",a,b,tong); 
				m=m+1;
			}
			if(x==3){
				int hieu;
				hieu=sub(a,b);
				printf("Hieu cua %d va %d la: %d\n",a,b,hieu); 
				m=+1;
			}
			if(x==4){
				int tich;
				tich=multi(a,b);
				printf("Tich cua %d va %d la: %d\n",a,b,tich); 
				m=+1;
			}
			if(x==5){
				float thuong;
				thuong=div(a,b);
				printf("Thuong cua %d va %d la: %f\n",a,b,thuong); 
				m=+1;
			}
			if(x==6){
				m=m+300;
			}
			m=m-1;
		}
		n=n+1;
	}
}

