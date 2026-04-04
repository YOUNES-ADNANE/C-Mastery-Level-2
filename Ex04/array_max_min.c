/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_max_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 15:59:49 by marvin            #+#    #+#             */
/*   Updated: 2026/04/04 15:59:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to find both the largest and the smallest 
   numbers in an unsorted list. I'll start by making an initial guess 
   and then compare it with every other number in the array.
*/

#include <stdio.h>

int main()
{
    // I'm setting up an array with some random numbers to test my logic
    int numbers[5] = {12, 45, 2, 67, 19}; 
    
    // 1. First, I'm assuming that the very first number (Index 0) 
    // is both the largest and the smallest for now
    int max = numbers[0];
    int min = numbers[0];

    // 2. Now, I'm looping through the rest of the numbers (from Index 1 to 4)
    for (int i = 1; i < 5; i++)
    {
        // If I find a number that is bigger than my current 'max', I'll update it
        if (numbers[i] > max)
        {
            max = numbers[i];
        }

        // Similarly, if I find a number smaller than my current 'min', I'll update it
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    // 3. Finally, I'm printing the results to see the extremes I've found
    printf("The Largest number is: %d \n", max);
    printf("The Smallest number is: %d \n", min);

    return 0;
}