#include<stdio.h>
int main(){
	char i=97;
	for(; ;){
		printf("%c",i++);
		if(i==107){
			goto stop;
		}
		//goto stop;
	}
	stop:;
}


//int main(){
//	int x;
//	for(x=7;x<100;x++){
//		if (x%4==0 && x%5==4 && x%6==4 ){
//			printf("%d",x);
//		}
//	}
//}



