#include <stdio.h>
#include <cs50.h>
int get_height(string prompt); //defining a function
int main(void)
{
    
    int number = get_height("Height: \n"); // asking for a positive number
    for (int height = 0; height < number; height++)
    {
        // print spaces before hashes
        for (int spaces = number - height - 2; spaces >= 0; spaces--)
        {
            printf(" ");
        }
        // print hashes after spaces 
        for (int hashes = 0; hashes <= height; hashes++)
        {
            printf("#");
        }
        // print 2 spaces after hashes in row 1
        printf("  ");
        // print hashes after 2 spaces
        for (int hashes2 = 0; hashes2 <= height; hashes2++)
        {
            printf("#");
        }
        // new line
        printf("\n");
    }
}
// create a function to  get height by user .
int get_height(string prompt)
{
    int number;
    // do while loop to get number between 0 and 9.
    do 
    {
        number = get_int("%s", prompt);
    }
    while (number < 1 || number > 8);
    return number; // for return number
}
