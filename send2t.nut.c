#include<stdio.h>
void main(){
	int n,number,nosubject;
	float score;
	scanf("%d %d", &number, &nosubject);
	printf("student number : %d\n",number);
		for(n = 1; n <= nosubject; n++){
			scanf("%f",&score);
			printf("student score : %f\n",score);
			if(score >= 80){
        		printf("GRADE 4\n");
   			}
    		if(score >= 70 && score < 80){
        		printf("GRADE 3\n");
    		}
    		if(score >= 60 && score < 70){
        		printf("GRADE 2\n");
   			}
    		if(score >= 50 && score < 60){
        		printf("GRADE 1\n");
    		}
    		if(score < 50){
        		printf("GRADE 0\n");
    		}
		}
	}
