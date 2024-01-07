/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarre <fnavarre@student.42.fr>              +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:24:05 by marvin            #+#    #+#             */
/*   Updated: 2024/01/05 11:24:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <stdio.h>



int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	while(argv)
	{
		if (*argv[i] != '\0')
			printf("%s\n", argv[i]);
		++i;
	}
	//printf ("%s\n", argv[1]);
	return (0);
}

//ALGORITMO
// Paso 1: análisis, coloque los números en la pila A si no se detectan errores
// Paso 2: comprueba si todos los números de A están ordenados. Si es así, finalice
// 		el programa sin imprimir nada. Sería preferible escribir una función A_is_sorted()
// Paso 3: si el tamaño de A ≤ 5, llame a la función sort_small_stack(). De lo contrario, 
// 		llame a la función sort_big_stack()
// 		if x = 3 then n < 3
// 		if x = 5 then n < 12
// 		if x = 100 then n <1500
// 		if x = 500 then n <11500

// Implementa sawp, rotate, reverse rotate, push
// Elie un algoritmo de ordenación 
