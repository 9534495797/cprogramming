//#include<stdio.h>
//int main(){
//	int a=5;
//	int b=6;
//	int temp=a;
//	a=b;
//	b=temp;
//	printf("a=%d\n",a);
//	printf("b=%d",b);
//}



#include<stdio.h>
int main(){
	int a=5;
	int b=6;
	a,b=b,a;
	printf("a=%d\n",a);
	printf("b=%d",b);
}
