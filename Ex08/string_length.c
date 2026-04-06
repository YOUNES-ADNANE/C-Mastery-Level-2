/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:39:56 by marvin            #+#    #+#             */
/*   Updated: 2026/04/05 18:39:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex08), I'm going to learn how to ask the computer: 
   "How many characters are in this word?" I'll use the 'strlen' function 
   to count the letters automatically without counting the hidden '\0' at the end.
*/

#include <stdio.h>
#include <string.h> // I must include this header to use 'strlen' and other string functions

int main()
{
    // 1. First, I'm defining a character array called 'word' with "Programming"
    char word[] = "Programming";
    
    // 2. Now, I'm calculating its length
    // I'm using 'strlen' because it counts the visible characters only
    int length = strlen(word);

    printf("The word is: %s \n", word);
    printf("The number of characters is: %d \n", length);

    // 3. Mini-Challenge: I'll let the user enter a word and I'll find its length too
    char user_word[50];
    printf("\nEnter any word: ");
    // Here, I'm taking the input and storing it in 'user_word'
    scanf("%s", user_word);
    
    // I'm printing the result directly; using %zu is the standard for size_t values
    printf("Your word has %zu characters. \n", strlen(user_word));

    return 0;
}