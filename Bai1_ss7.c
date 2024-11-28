#include<stdio.h>
int main(){
	int num[7]={2,5,1,5,3,4,6};
	int count; 
	for(int i=0;i<sizeof(num)/sizeof(num[0]); i++){
		printf("%d ",num[i]);
		count++; 
	}printf("\nDo dai cua mang la: %d", count);
	return 0;
	 
} 
