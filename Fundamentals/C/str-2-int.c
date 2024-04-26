#include <stdio.h>
#include <stdlib.h>

int string_to_number(char user_string[]);

int main()
{
    char user_string[100];

    printf("Enter number: ");
    scanf_s("%s", user_string, sizeof(user_string));

    int result = string_to_number(user_string);
    printf("Number: %d", result);

    return 0;
}

int string_to_number(char user_string[]) {
    int parse = 0;
    int number = 0;
    int sign = 1;

    if (user_string[0] == '-') {
        sign = -1;
        parse = 1;
    }

    for (; user_string[parse] != '\0'; parse++) {
        if (user_string[parse] >= '0' && user_string[parse] <= '9') {
            number = number * 10 + user_string[parse] - '0';
        }
    }

    return number * sign;
}