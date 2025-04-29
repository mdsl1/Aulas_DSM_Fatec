#include <stdio.h>

main()
{
	//Analisa duas horas, e calcula a duração da partida. Se for de um dia pro outro, subtrair a hora inicial por 24 (pra obter o valor de um dia) e soma com as horas do outro dia
	int hi, hf, dur;

	printf("\nHora inicial: ");
		scanf("%d", &hi);
	printf("\nHora final: ");
		scanf("%d", &hf);
		
	if (hf>hi)
	{
		dur = hf-hi;
	}
	else
	{
		dur = 24-hi + hf;
	}
	printf("\nDuracao da partida: %dhrs", dur);
}
