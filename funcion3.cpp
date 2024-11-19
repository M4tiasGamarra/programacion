#include <stdio.h>
//Código de la alumna Crystal López 
//link de GIT personal: https://github.com/ilopezcrystal
//link de Git grupal (lider): https://github.com/M4tiasGamarra
int repetir (char texto[], int num){
    for (int x=1;x<=num;x++){
        printf("%s \n",texto);
    }
}

int cartel (char text2[], int num2){
    printf("..................\n");
    repetir (text2,num2);
    printf("..................\n");
}


int main() {
    int resultado;
    repetir ("hola",3);
    repetir ("como estas?",6);
    cartel ("chauuu",5);
    
return 0;
}
