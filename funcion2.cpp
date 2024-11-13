#include <stdio.h>
// Nombre y apellido:Matias Gamarra 6°2°
// Link GIT: https://github.com/M4tiasGamarra
// Nombre y apellido Lider:Matias Gamarra 6°2°
// Link lider de Grupo: https://github.com/M4tiasGamarra
float cmpl(float cm){ //Funcion conversion de centimetros a pulgadas
    return cm/2.54;
}
float plcm(float pul){ //Funcion conversion de pulgadas a centimetros
    return pul*2.54;
}
int main() {
    int resultado;
    int resultado2;
    resultado=cmpl(100);
    resultado2=plcm(50);
    printf("%d\n",resultado);
    printf("%d\n",resultado2);
    
    return 0;
}

