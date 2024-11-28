#include<stdio.h>
int main(){
	int num[5];
	 
	for(int i=0; i<5; i++){
		printf("Moi nhap vao so nguyen thu %d ",i+1);
		scanf("%d",&num[i]);
	}for(int i=0; i<5; i++){
		printf("\nnum[%d] = %d ",i, num[i]);
	}
	return 0;
}
