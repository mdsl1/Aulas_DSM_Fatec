#include <stdio.h>

main()
{
	//Calcula se um ano e bissexto ou nao e retorna
	int ano;

    printf("\nDigite o ano: ");
        scanf("%d",&ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 > 0)
    {
        printf("E um ano bissexto\n");
    }
    else
    {
        printf("Nao e um ano bissexto\n");
    }
    return main();
}

