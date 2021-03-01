#include<stdio.h>
float score[20] = {};
int n = 0;

float avg();

int main(void){
	int i = 0;
	scanf("%d",&n);
	printf("Total student = %d\n",n);
	for(i = 0; i < n; i++){
		scanf("%d\n",&score[i]);
	}
	printf("Average = %.2f",avg());
	return 0;
}

float avg(){
	float average = 0.0;
	float sum = 0.0;
	int i;
	for(i = 0; i < n; i++){
		sum = sum + score[i];
	}
	average = sum / n;
	
	return average;
}