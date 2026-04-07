/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:22:29 by marvin            #+#    #+#             */
/*   Updated: 2026/04/07 13:22:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to create a list of multiple words. 
   Instead of just one word, I'll use a 2D array of characters where 
   the first number is how many names I want, and the second is the 
   maximum letters each name can have.
*/

#include <stdio.h>

int main()
{
    // 1. Here, I'm defining a 2D array to hold 3 names, 
    // giving each one a maximum space of 10 characters.
    char students[3][10] = {"Younes", "Adnane", "1337"};

    printf("--- Students List --- \n");

    // 2. Now, I only need one loop to go through the names. 
    // Each index 'i' represents a full word in my list.
    for (int i = 0; i < 3; i++)
    {
        // I'm printing each student's name using the %s format
        printf("Student %d: %s \n", i + 1, students[i]);
    }

    return 0;
}
