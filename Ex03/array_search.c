/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 15:41:55 by marvin            #+#    #+#             */
/*   Updated: 2026/04/04 15:41:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this program, I'm going to search for a specific number within an array. 
   I'll prepare a list of numbers first, then I'll ask the user what they're looking for 
   and loop through the list to see if there's a match.
*/

#include <stdio.h>

int main()
{
    // I'm setting up an array with 5 pre-defined numbers to search through
    int numbers[5] = {10, 25, 40, 55, 70}; 
    int search_key;
    // I'm using 'found' as a "key" or flag to track if I've found the number (0 = no, 1 = yes)
    int found = 0; 

    printf("Enter the number you are looking for: ");
    scanf("%d", &search_key);

    // 1. Now, I'm looping through the array, checking each number one by one
    for (int i = 0; i < 5; i++)
    {
        // 2. Here, I'm comparing the current number in the list with the user's input
        if (numbers[i] == search_key)
        {
            found = 1; // I found it! So I'm changing my "key" to 1
            printf("Number %d found at index %d! \n", search_key, i);
            break; // Since I found it, there's no need for me to keep searching, so I'll stop the loop
        }
    }

    // 3. After the search is over, I'm checking if my "key" is still 0
    if (found == 0)
    {
        // If it's still 0, it means I never hit that 'found = 1' line
        printf("Sorry, number %d is not in the list. \n", search_key);
    }

    return 0;
}