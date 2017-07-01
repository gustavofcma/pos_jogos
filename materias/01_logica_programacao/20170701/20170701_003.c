// EXEMPLO DO AVA - SLIDE 5

#include <stdio.h>
#include <stdlib.h>

int mult(float a, float b, float c) {    /* Multiplica 3 numeros */
    printf ("%f\n",a*b*c);
    return(0);
}

main() {
    float x,y;
    x=5.5;
    y=2;
    mult(x,y,3);
    mult(4,8,2);
    system("Pause");
}
