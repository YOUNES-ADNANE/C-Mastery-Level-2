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
   In this exercise (ex09), I'm going to learn how to concatenate strings. 
   I'll start with two separate words and use 'strcat' to attach the second one 
   to the end of the first, making sure there's enough space to hold both.
*/

#include <stdio.h>
#include <string.h> // I must include this header to use the 'strcat' function

int main()
{
    // 1. First, I'm defining 'first_name' with extra space (20 characters) 
    // so it can comfortably hold the second name when I attach it.
    char first_name[20] = "Younes "; 
    char last_name[] = "Adnane";

    printf("Before: %s \n", first_name);

    // 2. Now, I'm attaching 'last_name' to the end of 'first_name'
    strcat(first_name, last_name);

    printf("After: %s \n", first_name);

    // 3. Challenge: I'm going to add one more word of my choice to the end
    strcat(first_name, " (Student)");
    printf("Full Bio: %s \n", first_name);

    return 0;
}