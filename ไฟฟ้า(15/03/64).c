/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float cal (int n);

int main(void){
	int i, n;
	float ans;
	printf("Select (1)Voltage (2)Current (3)Resistance\n");
	printf("Enter : ");
	scanf("%d", &n);\
	ans = cal(n);
	printf("Answer is %f", ans);
	return 0;

}

float cal (int n){
	float result = 0.0 ;
	float v, i, r ;
	if (n == 1){
		printf("I = ");
		scanf("%f" , &i);
		printf("R = ");
		scanf("%f", &r);
		result = i * r;

	}

	if (n == 2){
		printf("V = ");
		scanf("%f" , &v);
		printf("R = ");
		scanf("%f", &r);
		result = v / r;

	}	

	if (n == 3){
		printf("V = ");
		scanf("%f" , &v);
		printf("I = ");
		scanf("%f" , &i);
		result = v / i;

	}	
	return result;
}

