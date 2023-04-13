#include <stdio.h>

//int main() {
//  int arr[] = {1, 2, 3, 4, 5};
//  int len = sizeof(arr) / sizeof(arr[0]);
//  int start = 0;
//  int end = len - 1;
//
//  while (start < end) {
//    int temp = arr[start];
//    arr[start] = arr[end];
//    arr[end] = temp;
//    start++;
//    end--;
//  }
//
//  printf("Reversed array: ");
//  for (int i = 0; i < len; i++) {
//    printf("%d ", arr[i]);
//  }
//  printf("\n");
//
//  return 0;
//}
int main(){
	int a[5]={};
	int i;
	int len=sizeof(a)/sizeof(a[0]);
	int start=0;
	int end=len-1;
	while(start<end){
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
	for(i=0;i<len;i++){
		printf("%d",a[i]);
	}
}


