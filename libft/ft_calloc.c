/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:55:34 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 20:29:29 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(nmemb * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, nmemb * size);
	return (buffer);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test 1: Allocate memory for an array of integers
    int *intArray;
    size_t numIntegers = 5;
    
    intArray = (int *)ft_calloc(numIntegers, sizeof(int));
    
    if (intArray == NULL) {
        perror("Memory allocation failed");
        return 1;
    }
    
    printf("Allocated memory for %zu integers.\n", numIntegers);
    
    // Initialize and print the allocated memory
    for (size_t i = 0; i < numIntegers; i++) {
        intArray[i] = i * 2;
        printf("intArray[%zu] = %d\n", i, intArray[i]);
    }
    
    // Free the allocated memory
    free(intArray);
    
    // Test 2: Allocate memory for an array of characters (string)
    char *str;
    size_t strSize = 10;
    
    str = (char *)ft_calloc(strSize, sizeof(char));
    
    if (str == NULL) {
        perror("Memory allocation failed");
        return 1;
    }
    
    printf("\nAllocated memory for a string of size %zu.\n", strSize);
    
    // Initialize and print the allocated memory
    strcpy(str, "Hello!");
    printf("str = %s\n", str);
    
    // Free the allocated memory
    free(str);
    
    return 0;
}
*/
