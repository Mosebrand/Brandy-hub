#include <stdio.h>

int main(void) {
    int days;

    printf("Enter number of days (1-7)\n");
    scanf("%d", &days);

    switch (days) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("invalid number of days\n");
            break;
    }

    return 0;
}