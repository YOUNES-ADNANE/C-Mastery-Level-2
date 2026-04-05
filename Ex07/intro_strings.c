/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 14:51:03 by marvin            #+#    #+#             */
/*   Updated: 2026/04/05 14:51:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex07), I'm going to introduce myself to Strings. 
   I'll create an array of characters to store a word and reveal 
   the "secret" hidden character at the end that tells C the string is over.
*/

#include <stdio.h>

int main()
{
    // 1. Here, I'm creating a character array (String) and initializing it with "YOUNESS"
    // I'm making sure it's large enough to hold the letters plus the null terminator
    char name[10] = "YOUNESS";

    // 2. Now, I'm printing the whole string at once using the %s format specifier
    printf("My name is: %s \n", name);

    // 3. To understand how it's stored, I'll print each character and its index
    printf("\n--- Character Breakdown --- \n");
    for (int i = 0; i < 7; i++) // I'm going up to 7 to see what's after the last letter
    {
        // Here, I'm checking each slot in my 'name' array
        printf("Index %d: %c \n", i, name[i]);
    }

    /* 
       Note for myself: 
       I noticed that at Index 6, there's a hidden character called '\0' (Null Terminator). 
       This is how I let the computer know exactly where my word ends!
    */

    return 0;
}