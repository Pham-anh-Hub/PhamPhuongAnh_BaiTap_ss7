#include<stdio.h>
int main(){
	int length; 
	int checkNum; 
	printf("Nhap vao so phan tu cua mang ");
	scanf("%d", &length);
	int num[length]; 
	int a=0;
	for(int i=0;i<length;){
		printf("\nMoi nhap so nguyen ");
		scanf("%d",&checkNum);
		if(checkNum%2!=0){
			num[i]=checkNum;
			i++;
		}else{
			printf("\tMoi nhap lai: "); 
		} 
	}
	return 0; 
} 

