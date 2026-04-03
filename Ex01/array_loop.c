/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_loop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 02:15:07 by marvin            #+#    #+#             */
/*   Updated: 2026/04/03 02:15:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to create an array that holds 5 numbers. 
   I'll use a loop to let the user fill it up, and then another loop 
    to display all the numbers I've collected back on the screen.
*/

#include <stdio.h>

int main()
{
    // 1. Here, I'm defining an array called 'numbers' to store 5 integers for me
    int numbers[5];

    // 2. Now, I'm using a Loop to fill the array with user input
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        // Here, I'm taking the input and storing it in the slot at index i
        scanf("%d", &numbers[i]); 
    }

    // 3. Finally, I'm using a second Loop to print out all the numbers I've stored
    printf("\nYour numbers are: \n");
    for (int i = 0; i < 5; i++)
    {
        // Here, I'm showing the number stored at each specific index
        printf("Number at index %d is: %d \n", i, numbers[i]);
    }

    return 0;
}
