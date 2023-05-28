#include<stdio.h>
//int main(){
//	int x[5];
//	int i,sum=0;
//	for(i=0;i<5;i++){
//		scanf("%d",&x[i]);
//		
//	}
//	for(i=0;i<5;i++){
//		sum+=x[i];
//	}
//	printf("%d",sum);
//}


//int main(){
//	int x[5];
//	int i,mul=1;
//	for(i=0;i<5;i++){
//		scanf("%d",&x[i]);
//		
//	}
//	for(i=0;i<5;i++){
//		mul*=x[i];
//	}
//	printf("%d",mul);
//}

int main(){
	int x[5];
	int i,diff=0;
	for(i=0;i<5;i++){
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<5;i++){
		diff-=x[i];
	}
	printf("%d",diff);
}
