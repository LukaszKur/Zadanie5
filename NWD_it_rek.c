#include <stdio.h>
#include <stdlib.h>

int NWD_iter(int a, int b)
{
    while(a!=b)
        if(a>b)
            a-=b; //lub a = a - b;
        else
            b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}
int NWD_rek(int a, int b)
{
    if (b != 0) {

        return NWD_rek(b, a % b);
    }
}


int main()
{
    int a, b;

    printf("Podaj dwie liczby: \n");
    scanf("%i",&a);
    scanf("%i",&b);

    printf("NWD(%i,%i) = %i\n",a,b,NWD_iter(a,b));
    printf("NWD(%i,%i) = %i\n",a,b,NWD_rek(a,b));
    system("pause");
    return 0;
}