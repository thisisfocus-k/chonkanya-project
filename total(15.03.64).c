/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
float score[20] = {};
int n = 0;

float cal(int n);
float avg();
float max();
float min();

int main(void){
	int i = 0;
	scanf("%d",&n);
	printf("Total student = %d\n",n);
	for(i = 0; i < n; i++){
		scanf("%f\n",&score[i]);
		while(score[i] < 0){
		    printf("Number less than Zero\n");
		    scanf("%f\n",&score[i]);
		}
	}
	printf("Average = %.2f Max = %.2f Min = %.2f\n",cal(1),cal(2),cal(3));
	//printf("Max = %.2f\n",max());
	//printf("Min = %.2f",min());
	return 0;
}
float cal (int n){
    float result = 0.0;
    if(n == 1){
        result = avg();
    }
    if(n == 2){
        result = max();
    }
    if(n == 3){
        result = min();
    }
    return result;
}
float max(){
	float max_v = 0.0;
	int i;
	max_v = score[0];
	for(i = 1; i < n; i++){
		if(max_v < score[i]){
			max_v = score[i];
		}
	}
	return max_v;
}
float min(){
	float min_v = 0.0;
	int i;
	min_v = score[0];
	for(i = 1; i < n; i++){
		if(min_v > score[i]){
			min_v = score[i];
		}
	}
	return min_v;
}

float avg(){
	float average = 0.0;
	float sum = 0.0;
	int i;
	for(i = 0; i < n; i++){
		sum = sum + score[i];
	}
	average = (double)sum / n;

	return average;
}

