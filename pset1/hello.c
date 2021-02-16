#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // variables
    string name = get_string("What's your name\n");
    // print hello with name insterted by user
    printf("hello, %s\n", name);
}
