#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 8;
    printf ("Quantos segundo(s) faltam?\n");
    scanf(" %d", &i);
    while ( i != 0)
    {
        printf("Faltam %i segundo(s) para terminar teste\n", i);
        sleep(1);
        i--;
    }
    return 0;

}