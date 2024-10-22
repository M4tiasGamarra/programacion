#include <stdio.h>
float cmpl(float cm){
    return cm/2.54;
}
float plcm(float pul){
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

