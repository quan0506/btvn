int luyThua(int x, int y){
	int lt=1;
	int i;
	for (i=1;i<=y;i++){
		lt=lt*x;
	}
	return lt;
}

int soNtMin(int arr[],int n){
	int max=arr[0];
	int minnt;
	for (int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	if(max<2){
		printf("so nguyen to nho nhat lon hon moi gia tri trong mang la: 2");
	}else{
		for (int i=1;i<max*2;i++){
			minnt=max+i;
			bool f=true;
				for (int j=2;j<=minnt/2;j++){

					if((minnt)%j==0){

						f=false;
						break;
					}
				}
			if(f){
				printf("so nguyen to nho nhat lon hon moi gia tri trong mang la: %d khi i = %d",minnt,i);
				break;
			}

		}
	}

}
int kiemTraSoNT(int n){
	bool f=true;
	if(n<2){
		f=false;
	}
	if(n==2||n==3){
		f=true;
	}
	if(n==4){
		f=false;
	}
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			f=false;
		}
	}
	return f;
}
int snt(int arr[],int n){
	int max=arr[0];
	int minnt;
	for (int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	if(max<2){
		printf("so nguyen to nho nhat lon hon moi gia tri trong mang la: 2");
	}else{
		int i=0;
		minnt=max+i;
		int f=true;
		do{
			i=i+1;
			printf("i la: %d",i);
			for(int j=2;j<minnt/2;j++){
				printf("minnt chia j la: %d",(minnt%j));
				if((minnt)%j==0){
					f=false;
					printf("i la: %d, j la: %d",i,j);
					break;
				}else{
					printf("i la: %d, j la: %d",i,j);
				}
			}
		}while(f==false);
		if(!f){
			printf("so nguyen to nho nhat lon hon moi gia tri trong mang la: %d khi i = %d",minnt,i);
		}
	}

}
int timMax(int arr[],int n){
	int max=arr[0];
	for (int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}
int timMin(int arr[],int n){
	int min=arr[0];
	for (int i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	return min;
}
int uocCLN(int arr[],int n){
	int UCLN;
	bool f=false;
	for (int i=arr[0];i>0;i--){
		for(int j=0;j<n;j++){
			if(arr[j]%i!=0){
				f=false;
				break;
			}else{
				f=true;
			}
		}
		if(f){
			UCLN=i;
			break;
		}
	}
	return UCLN;
}
int boiCNN(int arr[],int n){
	int BCNN;
	bool f=false;
	for (int i=1;f==false;i++){
		BCNN=arr[0]*i;
		for(int j=1;j<n;j++){
			if(BCNN%arr[j]!=0){
				f=false;
				break;
			}else{
				f=true;
			}
		}
	}
	return BCNN;
}
