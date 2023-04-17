#include<stdio.h>
struct student{
	char name[6];
	int age;
	int study;
}s;
int main(){
	s.name='ankit';
	s.age=20;
	s.study=12;
	printf("%s %d %d",s.name,s.age,s.study);
}
