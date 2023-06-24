#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    // Convert both time periods to seconds
    int startTimeSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endTimeSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    // Calculate the difference in seconds
    int diffSeconds = endTimeSeconds - startTimeSeconds;

    // Convert the difference back to hours, minutes, and seconds
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);

    printf("\n");

    printf("Enter end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hours);
    printf("Minutes: ");
    scanf("%d", &endTime.minutes);
    printf("Seconds: ");
    scanf("%d", &endTime.seconds);

    printf("\n");

    difference = calculateTimeDifference(startTime, endTime);

    printf("Time Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
