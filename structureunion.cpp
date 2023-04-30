#include<stdio.h>
//union person{
//	char name[20];
//	int age;
//	float pay;
//	
//}p;
//int main(){
//	printf("%d\n",sizeof(p));
//	p.age=23;
//	p.pay=4500.6789;
//	printf("%d %f",p.age,p.pay);// it will give gabege value
//}

//it will store separetly
union person{
	char name[20];
	int age;
	float pay;
	
}p;
int main(){
	printf("%d\n",sizeof(p));
	p.age=23;
	printf("%d\n",p.age);
	p.pay=4500.6789;
	printf("%f",p.pay);// it will give garbege value
}
