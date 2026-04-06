/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_compare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 21:22:12 by marvin            #+#    #+#             */
/*   Updated: 2026/04/06 21:22:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex11), I'm going to learn how to compare two strings. 
   I'll set a secret code and then ask the user for their input to see 
   if it matches exactly, using the 'strcmp' function to find the difference.
*/

#include <stdio.h>
#include <string.h> // I must include this header to use the 'strcmp' function

int main()
{
    // 1. First, I'm setting up my secret code and a place to store the user's input
    char secret[] = "1337";
    char input[20];

    printf("Enter the secret code: ");
    scanf("%s", input);

    // 2. Now, I'm comparing the input with my secret code.
    // I'm keeping in mind that 'strcmp' returns 0 only when the words are a perfect match.
    int result = strcmp(input, secret);

    // 3. Here, I'm checking the result; if it's 0, it means I found no differences.
    if (result == 0)
    {
        printf("Access Granted! Words match. \n");
    }
    else
    {
        printf("Access Denied! Difference found. \n");
    }

    return 0;
}