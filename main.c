#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//practice 07
	
	int answer=50;
	int input;
	int cnt=0;
	
	
	do
	{
		printf("guess a number : ");
		scanf("%d",&input);
		if(input<answer)
			{
				printf("low!\n");
			}
		else if(input>answer)
			{
				printf("high!\n");
			}
			cnt++;
	}
	while(input!=answer);
	
	printf("Congratulation. trial : %i\n", cnt);
	return 0;
}
