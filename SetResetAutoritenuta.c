#include <stdio.h>
#include <string.h>

int main(){
	char i[] = "Lorem ipsum";
	char S1[] = "Lorem ipsum";
        char S2[] = "Lorem ipsum";
        int S1_ON;
        int S1_OFF;
        int S2_ON;
        int S2_OFF;
        printf("Verificatore di circuito Set/Reset con autoritenuta\n");
        printf("Inserire ""Set"" per verificare un circuito a set prevalente, o ""Reset"" per un circuito a reset prevalente: ");
        scanf("%s", i);
	if(strcmp(i, "Reset")==0){
		{
			printf("Impostare S1 (Valori accettabili: ON,OFF): ");
	                scanf("%s",S1);
        	        printf("%s\n",S1);
                	S1_ON=strcmp(S1, "ON");
	                S1_OFF=strcmp(S1, "OFF");
		}
                {
			printf("Impostare S2 (Valori accettabili: ON,OFF): ");
	                scanf("%s",S2);
        	        printf("%s\n",S2);
                	S2_ON=strcmp(S2, "ON");
	                S2_OFF=strcmp(S2, "OFF");
		}
                if(S1_OFF==0 && S2_OFF==0){
                        printf("Il carico non funziona\n");
                }
                else if(S1_OFF==0 && S2_ON==0){
                        printf("Il carico non funziona\n");
                }
                else if(S1_ON==0 && S2_OFF==0){
                        printf("Il carico funziona\n");
                }
                else if(S1_ON==0 && S2_ON==0){
                        printf("Il carico non funziona\n");
                }
	}
	else if(strcmp(i, "Set")==0){
		{
			printf("Impostare S1 (Valori accettabili: ON,OFF): ");
	                scanf("%s",S1);
	                printf("%s\n",S1);
        	        S1_ON=strcmp(S1, "ON");
	                S1_OFF=strcmp(S1, "OFF");
		}
		{
	                printf("Impostare S2 (Valori accettabili: ON,OFF): ");
	                scanf("%s",S2);
        	        printf("%s\n",S2);
	                S2_ON=strcmp(S2, "ON");
	                S2_OFF=strcmp(S2, "OFF");
		}
                if(S1_OFF==0 && S2_OFF==0){
                        printf("Il carico non funziona\n");
                }
                else if(S1_OFF==0 && S2_ON==0){
                        printf("Il carico non funziona\n");
                }
                else if(S1_ON==0 && S2_OFF==0){
                        printf("Il carico funziona\n");
                }
                else if(S1_ON==0 && S2_ON==0){
                        printf("Il carico funziona\n");
                }
        }
	else{
		main();
	}
	return 0;
}
