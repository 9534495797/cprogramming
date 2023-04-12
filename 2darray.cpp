#include<stdio.h>
//print matrix
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("a[%d][%d]->",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	
//}
//}
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("a[%d][%d]>>",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			if(i+j==3-1){
//				printf("%d",a[i][j]);
//			}
//		
//			//printf("%d ",a[j][i]);
//		}
//		printf("\n");
//	}
//}

//print 1st diagonal of matrix
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("a[%d][%d]->",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			if(i==j){
//				printf("%d ",a[i][j]);
//			}
//			//printf("%d ",a[i][j]);
//		}
//		
//		printf("\n");
//	
//}
//}
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("a[%d][%d]",i,j);
//			scanf("%d",&a[i][j]);		}
//			
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			if(i==j){
//				printf("%d",a[i][j]);			}
//			
//	}printf("\n");}}

//print 2nd diagonal
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("a[%d][%d]->",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			if(i+j==3-1){
//				printf("%d ",a[i][j]);
//			}
//			//printf("%d ",a[i][j]);
//		}
//		
//		printf("\n");
//	
//}
//}


//transpose
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("a[%d][%d]->",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[j][i]);
//		}
//		printf("\n");
//	
//}
//}
//#include<stdio.h>
//int main(){
//	int a[3][3],i,j;
//	for(i=0;i<3;i++){
//		for (j=0;j<3;j++){
//			printf("a[%d][%d]",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",a[j][i]);
//		}
//		
//		printf("\n");
//	}
//}
#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]>>",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d",a[i][j]);
		}printf("\n");
	}
	
}









