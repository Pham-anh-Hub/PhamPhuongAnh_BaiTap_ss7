#include<stdio.h>
int main(){
	int num[5]={2,5,7,4,1};
	int count=0; 
	
	for(int i=0; i<5; i++){
	
		int a=num[i];
		if(a%2==0){
			printf("\nSo chan trong mang la: ");
			printf("\n\t%d", a);
			count++; 
		}
	
	}
	if(count==0){
		printf("\n Khong co so chan nao trong mang"); 
	}
		 return 0; 
}

