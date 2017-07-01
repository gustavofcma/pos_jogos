// EXEMPLO DO AVA - SLIDE 4

#include <stdio.h>
#include <stdlib.h>

int mensagem();

main() {
    mensagem();
    printf ("Eu estou vivo!\n");
    system("Pause");
}

int mensagem() { /* Funcao simples: so imprime Ola! */
    printf ("Ola! ");
    return(0);
}
