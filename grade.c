#include<stdio.h>
void main(){
	int n,m,o,nostudent,noscore;
	float score,total,sum;
	scanf("%d %d", &nostudent, &noscore);
	for(n = 1; n <= nostudent; n++){
		total = 0;
		printf("student %d\n",n);
		for(m = 1; m <= noscore; m++){
			scanf("%f",&score);
			printf("%f",score);
			o = score;
			sum = score + o;
		}
		printf("total = %f",sum);
		if(sum >= 80){
        	printf("GRADE 4\n");
   		}
    	if(sum >= 70 && sum < 80){
        	printf("GRADE 3\n");
    	}
    	if(sum >= 60 && sum < 70){
        	printf("GRADE 2\n");
   		}
    	if(sum >= 50 && sum < 60){
        	printf("GRADE 1\n");
    	}
    	if(sum < 50){
        	printf("GRADE 0\n");
    	}
		printf("\nThe average of student %d is ",n);
	}
	
}
