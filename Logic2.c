#include <stdio.h>

int main(){
	int i;
	printf("To use the cinema discount, please verify your age: ");
	scanf("%d",&i);
	if(i=>64 || i>=5 && i<=18){
		printf("The discount code is 886yknuyfjmf, make sure to show it up at the cinema emtrance when asked\n");
	}
	else{
		printf("You're not eligible for th discount. Make sure you've entered the right age and try again.\n");
		main();
	}
	return 0;
}
