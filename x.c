#include<stdio.h>
int main(void){
	int i,num,ans;
	scanf("%d",&num);
	for(i = 1; i < 13; i++){
		ans = num * i;
		printf("%d\n",ans);
	}
	
	return 0;
}

