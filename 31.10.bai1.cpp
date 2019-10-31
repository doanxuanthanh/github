#include <stdio.h>
int main () {
	int mot = 1;
	int hai = 1;
	int tong = 0;
	
	for(int i = 3; mot + hai < 100; i++){
		if(i == 3){
			printf("1: %d\n",mot);
			printf("2: %d\n",hai);
		}
		tong = mot + hai;
		mot = hai;
		hai = tong;
		printf("%d: %d \n",i,tong);
	}
	
	return 0;
}

