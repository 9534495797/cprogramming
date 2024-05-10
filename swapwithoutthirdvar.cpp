//#include<stdio.h>
//int main(){
//	int x;
//	int y;
//	scanf("%d",&x);
//	scanf("%d",&y);
//	x=x+y;
//	y=x-y;
//	x=x-y;
//	printf("a=%d b=%d",x,y);
//}
#include<stdio.h>
int main(){
	int x,y;
	int z;
	scanf("%d",&x);
	scanf("%d",&y);
	z=x;
	y=z;
	x=z;
	printf("x=%d",x);
	printf("y=%d",y);
	
}
