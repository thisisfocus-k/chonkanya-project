#include<stdio.h>
#include<conio.h>
int main(void){
	int n = 0;
	while(n != 2){
		system("CLS");
		printf("Select Menu");
		printf("\n(1) Hello ");
		printf("\n(2) END\n");
		scanf("%d",&n);
		if(n == 1){
			printf("\nHello\n");
			getch();

		}
	}
	
	return 0;
}
