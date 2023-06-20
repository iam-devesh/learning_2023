#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};
void diff_between_time(struct time t1, struct time t2, struct time *diff)
{
    diff->hours = t2.hours - t1.hours;
    diff->minutes = t2.minutes - t1.minutes;
    diff->seconds = t2.seconds - t1.seconds;

    if (diff->seconds < 0)
    {
        diff->seconds += 60;
        diff->minutes -= 1;
    }

    if (diff->minutes < 0)
    {
        diff->minutes += 60;
        diff->hours -= 1;
    }
}

int main()
{
    struct time t1, t2, diff;
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter the stop time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);
    diff_between_time(t1, t2, &diff);
    printf("The difference between the two times is %d hours, %d minutes, and %d seconds.\n",
           diff.hours, diff.minutes, diff.seconds);
    return 0;
}
