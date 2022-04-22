#include "stdio.h"


int main(void) {
    //------------------------- COMO CRIAR UM PONTEIRO ------------------------
    int num = 10;
    int *p;

    p = &num;

    printf("Valor de num: %d\n", num);
    printf("Endereço de num: %p\n", &num);
    printf("Valor de p: %p\n", p);
    printf("Endereço de p: %p\n", &p);
    printf("Valor apontado por p: %d\n", *p);
    //_________________________________________________________________________
    
    
  return 0;
}
