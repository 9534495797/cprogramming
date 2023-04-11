#include <stdio.h>

//int add(int x, int y) {
//  int result = x + y;
//  return result;
//}

//int main() {
//  int a ;
//  int b ;
//  scanf("%d",&a);
//  scanf("%d",&b);
//  int sum = add(a, b);
//
//  printf("Sum=%d",sum);
//  return 0;
//}
//int main(){
//	int a[5]={1,3,4,5,5};
//	int sum=1;
//	int i;
//	for(i=0;i<5;i++){
//		sum*=a[i];
//	}
//	printf("%d",sum);
//}
int main(){
	int a[3];
	int sum=1;
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		sum*=a[i];
	}
	printf("%d",sum);
}
