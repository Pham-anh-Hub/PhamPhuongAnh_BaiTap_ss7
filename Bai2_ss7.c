#include<stdio.h>
int main(){
	int num[5];
	int a,; 
	for(int i=0; i<5; i++){
		printf("Moi nhap vao so nguyen thu %d ",i+1);
		scanf("%d",&num[i]);
		count++; 
	}for(int i=0; i<5; i++){
		printf("\nnum[%d] = %d ",i, num[i]);
	}
	return 0;
}
