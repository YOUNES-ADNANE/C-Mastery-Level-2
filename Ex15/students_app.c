/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   students_app.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 20:54:29 by marvin            #+#    #+#             */
/*   Updated: 2026/04/07 20:54:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
   In this final project (ex15), I'm going to build a mini-database for students. 
   I'll collect names from the user, store them in a 2D array, and then 
   generate a clean report that shows each student's ID, name, and the length of their name.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // 1. I'm creating a 2D array to hold 3 student names, 
    // allowing up to 20 characters for each name.
    char students[3][20];

    printf("--- Welcome to Level 2 Final Project --- \n\n");

    // 2. Now, I'm using a loop to interactively ask the user for each name
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name for student %d: ", i + 1);
        // I'm storing each input directly into its specific row in the matrix
        scanf("%s", students[i]);
    }

    // 3. Finally, I'm printing a formatted table to display my database
    printf("\n--- Students Database --- \n");
    printf("ID \t Name \t\t Length \n");
    printf("----------------------------------- \n");

    for (int i = 0; i < 3; i++)
    {
        // For each name, I'm calculating the length on the fly using strlen
        int len = strlen(students[i]);
        printf("%d \t %s \t\t %d chars \n", i + 1, students[i], len);
    }

    printf("----------------------------------- \n");
    printf("Level 2 Completed Successfully! 🎓\n");

    return 0;
}