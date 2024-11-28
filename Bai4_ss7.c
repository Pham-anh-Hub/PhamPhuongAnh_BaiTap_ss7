#include<stdio.h>
int main(){
	int length; 
	
	printf("Nhap vao do dai cua mang ");
	scanf("%d", &length);
	int num[length]; 
	
	for(int i=0;i<length;i++){
		printf("Moi nhap so nguyen ");
		scanf("%d",&num[i]); 
	}
	return 0; 
} 
