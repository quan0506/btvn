void nhapMang(int arr[],int n){
	printf("Nhap mang: \n");

	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int arr[],int n){
	printf("Xuat mang: \n");
	for (int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void xapSepMangNhap(int arr[],int n){
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
