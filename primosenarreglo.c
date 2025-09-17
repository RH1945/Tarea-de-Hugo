#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Este programita sirve para ver que numeros primos tenemos en una lista

// Prototipo
bool isprime(unsigned num);

// Un input que solo acepta numeros
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("¿Eso que? Dame numeros, papito. \nUso: ./primosenarreglo num1 num2 num3 ...");
        return 1;
    }
    // Imprime la lista de los numeros que sí son primos
    printf("De tu lista, estos numeros son primos: ");
    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (isprime(num))
        {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
// Le regresa solo numeros primos al printf
bool isprime(unsigned num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    for (unsigned i = 3; i <= num / i; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
