#include <stdio.h>
#include <string.h>

int main(void)
{

    // allow user to put in a number into the program from the Keyboard
    int givenNum = 0;
    int valid = 0;
    valid = scanf("%d", &givenNum);

    // check if the number is valid, if the number entered is not
    // valid then print an error statement
    if (valid == 0)
    {
        printf("The value you have given is not an integer, please input an "
               "integer! \n");

        return -1;
    }

    // check if the number is > or equal to 0, if its not, it is not a valid input

    if (givenNum < 0)
    {
        printf("Please input a positive integer! \n");
        return -1;
    }

    // check for the edge cases when input is zero or one

    if (givenNum == 0)
    {
        printf("The number %d is Even but is Neither composite nor Prime  \n",
               givenNum);

        return 0;
    }

    if (givenNum == 1)
    {
        printf("The number %d is Odd but is Neither composite nor Prime  \n",
               givenNum);

        return 0;
    }

    // check if the number is either composite or prime
    int divider = 2;

    char identity1[15] = "prime";

    while (divider <= givenNum / 2)
    {
        int temp = givenNum % divider;
        if (temp == 0)
        {
            strcpy(identity1, "composite");
            break;
        }
        divider++;
    }

    // check if the number is either odd or even

    char identity2[10] = "odd";

    if (givenNum % 2 == 0)
    {
        strcpy(identity2, "even");
    }

    printf("The number %d is %s and is %s !  \n", givenNum, identity1, identity2);

    return 0;
}