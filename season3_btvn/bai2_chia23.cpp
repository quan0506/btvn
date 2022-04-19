#include <stdio.h>

int main() {
  int n;
 printf ( "nhap so n:");
 scanf("%d",&n);
 int i=n-1;

 while (i>1){
  if(i%2==0 && i%3==0){
  printf("so lon nhat nho hon %d chia het cho 2 va 3 la:",n);
  printf("%d",i);
  break;
  }
  i--;
  }
 if(i==1){
  printf(" khong co so nho hon %d chia het cho 2 va 3",n);
  }
}
