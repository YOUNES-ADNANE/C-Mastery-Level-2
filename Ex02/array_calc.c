/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 08:16:51 by marvin            #+#    #+#             */
/*   Updated: 2026/04/04 08:16:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to calculate the average of 5 grades. 
   I'll collect the grades from the user, add them all up into a sum, 
   and then divide that sum by the total number of grades to get the final result.
*/

#include <stdio.h>

int main()
{
    // I'm defining an array for grades using 'float' because they usually have decimals
    float grades[5]; 
    // I'm also creating a 'sum' variable, starting it at 0 so I can add to it correctly
    float sum = 0;   
    float average;

    // 1. Here, I'm using a loop to let the user input the 5 grades one by one
    printf("Enter 5 grades: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Grade %d: ", i + 1);
        scanf("%f", &grades[i]);
        
        // 2. Right after I get each grade, I'm adding it to my 'sum' variable
        sum = sum + grades[i]; 
    }

    // 3. Now, I'm calculating the average by dividing my total sum by 5
    average = sum / 5;

    // 4. Finally, I'm printing the total sum and the average formatted to 2 decimal places
    printf("\nTotal Sum = %.2f \n", sum);
    printf("Average Grade = %.2f \n", average);

    return 0;
}
