/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:59:33 by marvin            #+#    #+#             */
/*   Updated: 2026/04/07 12:59:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex12), I'm going to learn how to search for a "substring" 
   inside a larger string. I'll provide a full sentence and ask the computer 
    to find if a specific word exists within it using the 'strstr' function.
*/

#include <stdio.h>
#include <string.h> // I must include this to use the 'strstr' function

int main()
{
    // 1. Here is the big sentence I'm going to search through
    char sentence[] = "I want to be a student in 1337 school";
    
    // 2. This is the specific word I'm looking for
    char target[] = "1337";

    // 3. Now, I'm performing the search. 
    // This function returns the "address" of where the word starts if it finds it.
    char *result = strstr(sentence, target);

    // 4. If the result is NOT NULL, it means I successfully found the word!
    if (result != NULL)
    {
        printf("Good news! The word '%s' was found in the sentence. \n", target);
    }
    else
    {
        // If it's NULL, the word simply isn't there.
        printf("Sorry, word not found. \n");
    }

    return 0;
}