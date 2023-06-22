#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry
{
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

int readLogFile(struct LogEntry entries[])
{
    FILE *csvFile = fopen("data.csv", "r");
    if (csvFile == NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }

    char line[100];
    int count = 0;

    // Read and discard the header row
    fgets(line, sizeof(line), csvFile);

    // Read data rows
    while (fgets(line, sizeof(line), csvFile))
    {
        char *token;
        token = strtok(line, ",");

        entries[count].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[count].sensorNo, token);

        token = strtok(NULL, ",");
        entries[count].temperature = atof(token);

        token = strtok(NULL, ",");
        entries[count].humidity = atoi(token);

        token = strtok(NULL, ",");
        entries[count].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[count].time, token);

        count++;
    }

    fclose(csvFile);

    return count;
}

void displayLogEntries(struct LogEntry entries[], int count)
{
    printf("%-8s %-10s %-12s %-8s %-8s\n", "EntryNo", "SensorNo", "Temperature", "Humidity", "Light");
    for (int i = 0; i < count; i++)
    {
        printf("%-8d %-10s %-12.2f %-8d %-8d\n",
               entries[i].entryNo, entries[i].sensorNo, entries[i].temperature,
               entries[i].humidity, entries[i].light);
    }
}

int main()
{
    struct LogEntry entries[MAX_ENTRIES];
    int count = readLogFile(entries);

    if (count > 0)
    {
        displayLogEntries(entries, count);
    }
    else
    {
        printf("No log entries found.\n");
    }

    return 0;
}
