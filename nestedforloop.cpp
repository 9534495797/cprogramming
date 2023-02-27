#include<stdio.h>
//int main(){
//	int i,j;
//	for (i=0;i<=3;i++){
//		for (j=0;j<=3;j++){
//			printf("%d,%d\n",i,j);
//		}
//	}
//}



int main(){
	int i,j;
	for (i=1;i<=10;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
