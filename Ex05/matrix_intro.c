/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_intro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 16:16:06 by marvin            #+#    #+#             */
/*   Updated: 2026/04/04 16:16:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* 
   In this program, I'm going to work with a 2D array, also known as a Matrix. 
   I'll organize my numbers into rows and columns, and then use nested loops 
    to go through each cell and print it in a nice grid format.
*/

#include <stdio.h>

int main()
{
    // 1. First, I'm defining a matrix with 2 rows and 3 columns
    // [2] represents the number of rows, while [3] represents the columns
    int matrix[2][3] = {
        {10, 20, 30}, // This is the first row (Index 0)
        {40, 50, 60}  // This is the second row (Index 1)
    };

    printf("--- Printing the Matrix --- \n");

    // 2. To print this table, I'm going to need "Nested Loops"
    // The first loop will go through each row (i)
    for (int i = 0; i < 2; i++)
    {
        // The second loop will go through each column (j) inside the current row
        for (int j = 0; j < 3; j++)
        {
            // Here, I'm printing the value and adding a Tab space (\t) for alignment
            printf("%d \t", matrix[i][j]); 
        }
        // Once I finish a whole row, I'm jumping to a new line
        printf("\n"); 
    }

    return 0;
}