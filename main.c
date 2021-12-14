#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]){
	srand(time(NULL));
	if(argc == 1){
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
				printf("Invalid argument\n");
				return 1;
			}

		}
		printf("You just found the number, it was indeed %d\n", n);
		return 0;
		}
	else if(atoi(argv[1])!=0){
		int n = rand() % atoi(argv[1]);
		int a = 0;
		printf("I have in mind a number in between 1 and %d, can you find it ?\n",atoi(argv[1]));
		scanf("%d",&a);
		while(n != a){
			if(a > 0 && a <= atoi(argv[1])){
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
}
