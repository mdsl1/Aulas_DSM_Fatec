#include <stdio.h>

main()
{
	//terão 6 números com 6 dígitos cada, a senha é o unico valor diferente de cada algarismo(centena de milhar,dezena de milhar, milhar,dezena, centena, unidade)
	int i,cenmi[6], dezmi[6], mil[6], cent[6], dez[6], un[6], key[6], ki=0;
	//Numeros usados na criptografia da chave
	int cripkey[6]={153456,123406,124456,323456,123458,123756};
	
	//Separa todos os algarismos e guarda eles em arrays
	for(i=0;i<6;i++)
	{
		cenmi[i] = cripkey[i] / 100000;          // Primeiro dígito
	    dezmi[i] = (cripkey[i] / 10000) % 10;    // Segundo dígito
	    mil[i] = (cripkey[i] / 1000) % 10;     // Terceiro dígito
	    cent[i] = (cripkey[i] / 100) % 10;      // Quarto dígito
	    dez[i] = (cripkey[i] / 10) % 10;       // Quinto dígito
	    un[i] = cripkey[i] % 10;              // Sexto dígito
	}
	
	//Analisa qual é o diferente em cada algarismo
	//Centena de milhar
	for(i=0;i<6;i++)
	{
		switch (i)
		{
			case 0:
				if(cenmi[i] != cenmi[i+1] && cenmi[i] != cenmi[i+2])
					{
						key[ki] = cenmi[i];
						ki++;
					}	
				break;
			default:
				if(cenmi[i] != cenmi[i-1] && cenmi[i] != cenmi[i+1])
					{
						key[ki] = cenmi[i];
						ki++;
					}	
				break;
			case 5:
				if(cenmi[i] != cenmi[i-1] && cenmi[i] != cenmi[i-2])
					{
						key[ki] = cenmi[i];
						ki++;
					}	
				break;
		}
	}
	//Dezena de milhar
	for(i=0;i<6;i++)
	{
		switch (i)
		{
			case 0:
				if(dezmi[i] != dezmi[i+1] && dezmi[i] != dezmi[i+2])
					{
						key[ki] = dezmi[i];
						ki++;
					}	
				break;
			default:
				if(dezmi[i] != dezmi[i-1] && dezmi[i] != dezmi[i+1])
					{
						key[ki] = dezmi[i];
						ki++;
					}	
				break;
			case 5:
				if(dezmi[i] != dezmi[i-1] && dezmi[i] != dezmi[i-2])
					{
						key[ki] = dezmi[i];
						ki++;
					}	
				break;
		}
	}
	//Milhar
	for(i=0;i<6;i++)
	{
		switch (i)
		{
			case 0:
				if(mil[i] != mil[i+1] && mil[i] != mil[i+2])
					{
						key[ki] = mil[i];
						ki++;
					}	
				break;
			default:
				if(mil[i] != mil[i-1] && mil[i] != mil[i+1])
					{
						key[ki] = mil[i];
						ki++;
					}	
				break;
			case 5:
				if(mil[i] != mil[i-1] && mil[i] != mil[i-2])
					{
						key[ki] = mil[i];
						ki++;
					}	
				break;
		}
	}
	//Centena
	for(i=0;i<6;i++)
	{
		switch (i)
		{
			case 0:
				if(cent[i] != cent[i+1] && cent[i] != cent[i+2])
					{
						key[ki] = cent[i];
						ki++;
					}	
				break;
			default:
				if(cent[i] != cent[i-1] && cent[i] != cent[i+1])
					{
						key[ki] = cent[i];
						ki++;
					}	
				break;
			case 5:
				if(cent[i] != cent[i-1] && cent[i] != cent[i-2])
					{
						key[ki] = cent[i];
						ki++;
					}	
				break;
		}
	}
	//Dezena
	for(i=0;i<6;i++)
	{
		switch (i)
		{
			case 0:
				if(dez[i] != dez[i+1] && dez[i] != dez[i+2])
					{
						key[ki] = dez[i];
						ki++;
					}	
				break;
			default:
				if(dez[i] != dez[i-1] && dez[i] != dez[i+1])
					{
						key[ki] = dez[i];
						ki++;
					}	
				break;
			case 5:
				if(dez[i] != dez[i-1] && dez[i] != dez[i-2])
					{
						key[ki] = dez[i];
						ki++;
					}	
				break;
		}
	}
	//Unidade
	for(i=0;i<6;i++)
	{
		switch (i)
		{
			case 0:
				if(un[i] != un[i+1] && un[i] != un[i+2])
					{
						key[ki] = un[i];
						ki++;
					}	
				break;
			default:
				if(un[i] != un[i-1] && un[i] != un[i+1])
					{
						key[ki] = un[i];
						ki++;
					}	
				break;
			case 5:
				if(un[i] != un[i-1] && un[i] != un[i-2])
					{
						key[ki] = un[i];
						ki++;
					}	
				break;
		}
	}
	
	//printa na tela
	for(i=0;i<6;i++)
	{
		printf("%d", key[i]);
	}
}
