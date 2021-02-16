/* use cs50 ide online or other ide to run this code */
#include <stdio.h>
#include <cs50.h>
/* Variables declaration */
int height;
int lines;
int spaces;
int hashes;
int main()
{
/* conditional , do while */
    do 
    {
        height = get_int("height: \n");
    }
    while (height < 1 || height > 8);
/* nested loop */
    for (lines = 0; lines < height; lines++)
    {
        for (spaces = height - 1; spaces > lines; spaces--)
        {
            printf(" ");
        }
        for (hashes = 0; hashes <= lines; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
