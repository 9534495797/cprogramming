//#include<stdio.h>
//int main(){
//	int i=0;
//	for (i=0;i<=100;i=i+2){
//		printf("%d\n",i);
//	}
//}


//#include<stdio.h>
//int main(){
//	int i=2;
//	for(i=2;i<=20;i+=2){
//		printf("%d\n",i);
//	}
//}

//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	a>b?printf("yes"):printf("no");
//}


#include<stdio.h>
int main(){
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if (x>y && x>z){
		printf("x is largest");
	}
	else if(y>x && y>z){
		printf("y is largest");
	}
	else{
		printf("z is largest");
	}
}
