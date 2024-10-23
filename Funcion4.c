
#include <stdio.h>

void linea(char simbl) {
    for(int i=0;i<20;i++){
        printf("%c",simbl);
    }
    printf("\n");
}
int main(){
    linea('#');
    linea('*');
return 0;
}