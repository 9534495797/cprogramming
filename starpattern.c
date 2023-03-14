#include<stdio.h>
//int main(){
//	int x,i,j;
//	printf("enter your number=");
//	scanf("%d",&x);
//	for(i=1;i<=x;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//int main(){
//	int i,c=0;
//	printf("enter a number=");
//	scanf("%d",&i);
//	for(;i>=0;i--){
//		c=i;
//		printf("\n");
//		for(; ;){
//			printf("%3d",c);
//			if (c==0)
//			break;
//			c--;
//		}
//	}
//}


void main(){
	int k,i,j,x,p=34;
	printf("enter a number=");
	scanf("%d",&x);
	for(j=0;j<=x;j++){
		gotoxy(p,j+1);
		for(i=0-j;i<=j;i++)
		printf("%d",abs(i));
		p=p-3;
	}
}
