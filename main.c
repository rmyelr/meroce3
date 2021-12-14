#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	printf("I have in mind a number in between 1 and 100, can you find it?\n");
	int n = rand() % 100;
	int a = 0;
	scanf("%d",&a);
	while(n != a){
		if(a > 0 && a <= 100){
			if(a < n){
				printf("The number to guess is higher\n");
				scanf("%d",&a);
			}
			else if(a > n){
				printf("The number to guess is lower\n");
				scanf("%d",&a);
			}
		}
		else{
			printf("Invalid argument");
			return 1;
		}
	}
	printf("You just found the number, it was indeed %d\n", n);
	return 0;
}
