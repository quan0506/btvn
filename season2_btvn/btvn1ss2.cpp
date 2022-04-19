#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	printf("nhap vao mot so nguyen:");
	int N;
	scanf("%d",&N);
	if(N<2 || N>8){
		printf("Khong phai ngay trong tuan");
	}else{
		if(N==8){
			printf("Day la Chu nhat");
		}else{
			printf("Day la thu: %d",N);
		}
	}
}
