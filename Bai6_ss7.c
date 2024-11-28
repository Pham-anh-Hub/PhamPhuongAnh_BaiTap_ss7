#include<stdio.h>
int main(){
	int num[5]={41,37,18,13,4};
	int a;
	printf("Mang moi la: ");
	for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
		a=num[i]; 
		if(a%2==0){
			a+=3; 
		}else{
			a+=2; 
		}
		printf("\n%d",a); 
	}
	
	return 0;	
} 
