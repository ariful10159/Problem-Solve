#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time in seconds since the epoch
    time_t currentTime;
    time(&currentTime);

    // Convert the time to a struct tm (local time)
    struct tm *localTime = localtime(&currentTime);

    // Extract date components from the struct tm
    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1; // Months are 0-indexed, so add 1
    int year = localTime->tm_year + 1900; // Years are measured from 1900

    // Print the current system date
    printf("Current system date: %02d/%02d/%d\n", day, month, year);

    return 0;
}
