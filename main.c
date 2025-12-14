#include <stdio.h>

int main()
{
    int firtNum, secondNum, result;
    printf("Hi welcome to my C calculator!\n");
    printf("Please enter the first number: ");
    scanf("%d", &firtNum);
    printf("Please enter the second number: ");
    scanf("%d", &secondNum);
    result = firtNum + secondNum;
    printf("The result is: %d\n", result);
    return 0;
}
