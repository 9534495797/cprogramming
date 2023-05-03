#include<stdio.h>
//find element it will print idex +1 means position
//int main(){
//	int a[10]={2,4,6,8,10,12,14,16,18,20};
//	int i,loc=-1,key;
//	printf("enter value =");
//	scanf("%d",&key);
//	for(i=0;i<10;i++){
//		if (a[i]==key){
//			loc=i+1;
//			break;
//		}
//	}
//	if(loc!=-1){
//		printf("element found at %d",loc);
//	}
//	else{
//		printf("not found");
//	}
//}


//count the value
//int main(){
//	int a[11]={1,2,5,1,5,7,10,12,13,1,1};
//	int i,c=0,key=1;
//	printf("enter value =");
//	scanf("%d",&key);
//	for(i=0;i<12;i++){
//		if (a[i]==key){
//			c++;
//			
//		}
//	}print("%d",c);
//
//}

//binary search

//#include<stdio.h>
//int main(){
//	int loc=-1,key,beg=0,last=9,mid;
//	int a[10]={2,4,6,8,10,12,37,45,68,89};
//	printf("Enter integer value to search:");
//	scanf("%d",&key);
//	while(beg<=last)
//	{
//	mid=(beg+last)/2;
//	if(a[mid]==key)
//	{
//	loc=mid;
//	break;
//	}
//	else if(a[mid]>key)
//	{
//	last=mid-1;
//	}
//	else if(a[mid]<key)
//	{
//	beg=mid+1;
//	}
//	}
//	if(loc!=-1)
//	{
//		printf("Element found at %d",loc+1);
//	}
//	else{
//		printf("Element not found");
//	}}


//sorting
int main(){
	int i,hold,pass;
	int a[5]={2,4,3,5,6};
	for(i=0;i<5;i++){
		printf("%4d",a[i]);
		}
		
		for(pass=1;pass<5;++pass){
			for(i=0;i<5;++i){
				if(a[i]>a[i+1]){
					hold=a[i];
					a[i]=a[i+1];
					a[i+1]=hold;
				}
			}
		}
		printf("data items in ascending order");
		for(i=0;i<5;++i){
			printf("%4d",a[i]);
		}
		}
		

