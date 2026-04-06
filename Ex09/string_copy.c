/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 08:35:11 by marvin            #+#    #+#             */
/*   Updated: 2026/04/06 08:35:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this exercise (ex10), I'm going to learn how to copy text between strings. 
   I'll start with an original string, prepare an empty one, and then 
   use 'strcpy' to move the content from the source to the destination.
*/

#include <stdio.h>
#include <string.h> // I must include this to use the 'strcpy' function

int main()
{
    // 1. First, I'm creating a source string with "1337 Student"
    char original[] = "1337 Student";
    
    // 2. Now, I'm preparing an empty array that can hold up to 20 characters
    char duplicate[20];

    // 3. Here, I'm copying the word from 'original' into 'duplicate'
    // I'm using (destination, source) as the order for the arguments
    strcpy(duplicate, original);

    // 4. Now, I'm checking if my empty "bag" is actually filled
    printf("The original word: %s \n", original);
    printf("The copied word: %s \n", duplicate);

    // 5. Challenge: I'm changing the word directly within the code
    strcpy(duplicate, "Future Developer");
    printf("After changing the copy: %s \n", duplicate);

    return 0;
}