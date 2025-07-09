#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipo
bool isprime(unsigned num);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("¿Eso que? Dame numeros, papito. \nUso: ./primosenarreglo num1 num2 num3 ...");
        return 1;
    }
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
