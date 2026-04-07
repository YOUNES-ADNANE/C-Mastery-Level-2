/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manual_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 20:32:45 by marvin            #+#    #+#             */
/*   Updated: 2026/04/07 20:32:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex14), I'm going to challenge myself to count the length 
   of a string manually. Instead of using a ready-made function, I'll build 
   a loop that visits every character until it hits the hidden '\0' marker.
*/

#include <stdio.h>

int main()
{
    // 1. First, I'm defining the word "Success" in a character array
    char word[] = "Success";
    
    // 2. I'm setting up a counter starting from 0 to keep track of my steps
    int i = 0;

    // 3. Now, I'm using a 'while' loop to move through the string.
    // I'll keep going as long as the current character is NOT the null terminator '\0'.
    while (word[i] != '\0')
    {
        i++; // For every character I find, I'll increment my counter by 1
    }

    // 4. Finally, the total count in 'i' tells me exactly how many letters I passed
    printf("The word is: %s \n", word);
    printf("The manual length is: %d \n", i);

    return 0;
}