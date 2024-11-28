#include<stdio.h>
int main(){
	int length;
	printf("Moi nhap vao so phan tu mang  ");
	scanf("%d",&length);
	
	int num[length];
	int count=0, count2=0; 
	for(int i=0; i<length; i++){
		printf("Moi nhap vao so nguyen (Khac 0) thu %d ",i+1);
		scanf("%d",&num[i]);
	}
	for(int i=0; i<length; i++){
		count = 0; 
		for(int a=2;a<=num[i];a++){
			if(num[i]%a==0){
				count++;
			} 
		}
		if(count==1){
			printf("\nSo nguyen to: "); 
			printf(" \t%d ", num[i]);
			count2++; 
			
		} 
		
	}
	if(count2==0){
		printf("Mang khong chua so nguyen to"); 
	} 
	return 0;
}
