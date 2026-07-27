#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Negative Number");
    }

    return 0;
}
