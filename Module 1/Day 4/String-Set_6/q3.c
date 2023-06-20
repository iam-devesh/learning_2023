#include <stdio.h>

int main()
{
    char time_str[10];
    int hours, minutes, seconds;
    int total_seconds;

    printf("Enter time in hh:mm:ss format: ");
    scanf("%s", time_str);

    hours = (time_str[0] - '0') * 10 + (time_str[1] - '0');
    minutes = time_str[3] - '0';
    minutes = minutes * 10 + time_str[4] - '0';

    seconds = time_str[6] - '0';
    seconds = seconds * 10 + time_str[7] - '0';

    total_seconds = (hours * 3600 )+ (minutes * 60) + seconds;

    printf("Total seconds: %d\n", total_seconds);

    return 0;
}
