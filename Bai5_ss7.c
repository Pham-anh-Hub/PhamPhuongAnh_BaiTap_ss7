#include<stdio.h>
int main(){
	int num[5]={22,12,37,41,18};
	int max=num[0], min=num[0];
	
	for(int i=0;i<5;i++){
		if(max<num[i]){
			max=num[i];
			
		}
		if(min>num[i]){
			min = num[i];  
		}
		
	} 
	printf("Max = %d",max);
	printf("Min = %d",min);
	
	return 0; 
	
}
