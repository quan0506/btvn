
int tinhTong(int a, int b){//int a va int b la tham so -> bat buoc phai co int
	int c=a+b;//int c la bien dia phuong
	return c;// co the viet la return a+b; ko can sd c=a+b
}

bool checkEven(int n){
//	if(n%2==0){
//		return true;
//	}
//	return false;
	return n%2==0;//chi su dung khi chi co hai truong hop 
}


bool checkSNT(int n){
	if (n<2) return false;
	if (n<4) return true;
	for (int i=2;i<=n/2;i++){
		if (n%i==0){
			return false;
		}
		return true;
	}
}

int timMax(int arr[], int n){ // co the viet arr[] <-> *arr
	int m=arr[0];
	for (int i=0;i<n;i++){
		if (m<arr[i]){
			m=arr[i];
		}
	}
	return m;
}

void nhapMang(int arr[],int n){
	printf ("nhap mang:\n");
	for (int i=0;i<n;i++){
		scanf ("%d", &arr[i]);
	}
	
}

void xuatMang (int arr[],int n){
	printf ("xuat mang: \n");
	for (int i=0;i<n;i++){
		printf ("%5d",arr[i]);
	}
}

void sapXepMangNhap(int arr[],int n){
 int tg;
    int i;
    for(i=0;i<n;i++){
     for (int j=i; j>0;j--){
   if (arr[j-1]>arr[j]){
    tg=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=tg;
    }   
   }
 }
 for(i=0;i<n;i++){
  printf(" arr[%d]  sap xep lai theo thu tu be den lon la: %d\n",i,arr[i]);
 }
}

int tinhTongCacChuSo(int n){
	int s=0;
	int t=0;
	while (n!=0){
		t=n%10;
		s+=t;
		n/=10;
	}
	return s;
}

bool kiemTraTamGiac(int a, int b, int c){
	if(a+b>c && a+c>b && b+c>a){
		return true;
	//	printf ("day la tam giac");
	}else{
		return false;
	//	printf ("day khong phai tam giac");
	}
}

int tinhChuViTamGiac(int a,int b, int c){
	int chuvi=a+b+c;
	return chuvi;
}

float tinhDienTichTamGiac(int a,int b, int c){
	float p=(a+b+c)/2;
	float s=sqrt (p*(p-a)*(p-b)*(p-c));
	return s;
}

int timUcln(int a,int b){
	int x=0;
	if (a==0 && b==0){
		printf ("\nkhong co Ucln");
	}
	if (a==0||b==0){
		printf ("\nUcln la %d",a+b);
	}else{
		for (int i=1; i<=a && i<=b ;i++){
			if (a%i==0 && b%i==0){
				 x=i;
			}
		}
		printf ("\nUcln cua (%d %d) la : %d",a,b,x);
	}
	return x;
}

int timBcnn(int a, int b){
	int y=0;
		if (a==0 && b==0){
		printf ("\nkhong co Bcnn");
	}
	if (a==0||b==0){
		printf ("\n khong co Bcnn");
	}else{
		for (int i=1; i<=a*b ;i++){
			if (i%a==0 && i%b==0){
				 y=i;
			}
		}
		printf ("\nBcnn cua (%d %d) la : %d",a,b,y);
	}
	return y;
}
