/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_sum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 16:24:06 by marvin            #+#    #+#             */
/*   Updated: 2026/04/04 16:24:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to create a small 2x2 matrix and let the user fill it. 
   As the numbers are being entered, I'll keep track of the total sum of all elements, 
   and finally, I'll display the matrix and the final sum.
*/

#include <stdio.h>

int main()
{
    // I'm setting up a 2x2 matrix and a variable to store the cumulative sum
    int matrix[2][2]; 
    int sum = 0;

    // 1. Now, I'm starting the Input Phase to fill the grid
    printf("--- Fill the 2x2 Matrix --- \n");
    for (int i = 0; i < 2; i++) // This loop handles the rows
    {
        for (int j = 0; j < 2; j++) // This loop handles the columns
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
            // Here, I'm immediately adding the input value to my 'sum' variable
            sum += matrix[i][j]; 
        }
    }

    // 2. Next, I'm going to display the matrix in an organized grid format
    printf("\n--- Your Matrix ---\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        // After each row is finished, I'm moving to a new line
        printf("\n"); 
    }

    // 3. Finally, I'm printing the grand total of all the elements combined
    printf("\nTotal Sum of all elements: %d \n", sum);

    return 0;
}