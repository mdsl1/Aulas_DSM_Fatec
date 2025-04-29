#include <stdio.h>

main()
{
    int n1, n2, n3, fst, sec, thir;

    printf("\nNumero 1: ");
       scanf("%d", &n1);
    printf("\nNumero 2: ");
        scanf("%d", &n2);
    printf("\nNumero 3: ");
        scanf("%d", &n3);    

    if (n1>n2 && n1>n3 && n2>n3)
    {
        fst = n1;
        sec = n2;
        thir = n3;
    }
    else if (n2>n1 && n2>n3 && n1>n3)
    {
        fst = n2;
        sec = n1;
        thir = n3;
    }
    else if (n3>n1 && n3>n2 && n2>n1)
    {
        fst = n3;
        sec = n2;
        thir = n3;
    }
    printf("Ordem decrescente: %d, %d, %d\n", thir, sec, fst);
    return main();
    
}
