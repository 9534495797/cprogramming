#include <stdio.h>

//int main() {
//  int arr[] = {10, 20, 30, 40, 50};
//  int len = sizeof(arr) / sizeof(arr[0]);
//  int max = arr[0];
//
//  for (int i = 1; i < len; i++) {
//    if (arr[i] > max) {
//      max = arr[i];
//    }
//  }
//
//  printf("Max element in array: %d\n", max);
//
//  return 0;
//}





//#include <stdio.h>

//int main() {
//  int arr[] = {10, 20, 30, 40, 50};
//  int len = sizeof(arr) / sizeof(arr[0]);
//  int max = arr[0];
//  int sec_max = arr[0];
//
//  for (int i = 1; i < len; i++) {
//    if (arr[i] > max) {
//      sec_max = max;
//      max = arr[i];
//    } else if (arr[i] > sec_max && arr[i] != max) {
//      sec_max = arr[i];
//    }
//  }
//
//  printf("Second largest element in array: %d\n", sec_max);
//
//  return 0;
//}
int main(){
	int a[]={2,3,4,5};
	int len=sizeof(a)/sizeof(a[0]);
	int i;
	int max=a[0];
	int sec_max=a[0];
	for(i=1;i<len;i++){
		if(a[i]>max){
			sec_max=max;
			max=a[i];

		}else if(a[i]>sec_max && a[i]!=max){
			sec_max=a[i];
		}
	}
	printf("%d",sec_max);
}


//#include <stdio.h>
//
//int main() {
//  int arr[] = {1, 2, 3, 4, 5};
//  int len = sizeof(arr) / sizeof(arr[0]);
//  float sum = 0;
//
//  for (int i = 0; i < len; i++) {
//    sum += arr[i];
//  }
//
//  float avg = sum / len;
//  printf("Average of elements in array: %f\n", avg);
//
//  return 0;
//}



//
//#include <stdio.h>
//
//int main() {
//  int arr[] = {1, 2, 3, 4, 5};
//  int len = sizeof(arr) / sizeof(arr[0]);
//  int sum = 0;
//
//  for (int i = 0; i < len; i++) {
//    sum += arr[i];
//  }
//
//  printf("Sum of elements in array: %d\n", sum);
//
//  return 0;
//}



