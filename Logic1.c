#include <stdio.h>
(=
int main(){
	int i;
	printf("Insert a number: ");
	scanf("%d",&i);
	if((i>=15 && i<=18) || (i>=39 && i<=44) || (i>=92 && i<=102)){
		printf("The number %d is valid\n",i);
 	}
	else{
		printf("The number %d is not valid\n",i);
        }
	return 0;
}
