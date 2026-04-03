/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro_arrays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 01:31:34 by marvin            #+#    #+#             */
/*   Updated: 2026/04/03 01:31:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to demonstrate how I create an array, 
   fill it with some ages, and then print those values one by one 
   to make sure everything is stored correctly.
*/

#include <stdio.h>

int main()
{
    // 1. First, I'm defining an array named 'ages' where I'll keep 3 integers
    int ages[3]; 

    // 2. Now, I'm filling the slots, keeping in mind that I must always start counting from 0
    ages[0] = 20; // Here I'm putting the first age (20) in Index 0
    ages[1] = 22; // Here I'm putting the second age (22) in Index 1
    ages[2] = 19; // Here I'm putting the third age (19) in Index 2

    // 3. Finally, I'm printing the values I've stored to see them on the screen
    printf("Age 1: %d \n", ages[0]);
    printf("Age 2: %d \n", ages[1]);
    printf("Age 3: %d \n", ages[2]);

    return 0;
}