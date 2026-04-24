/*
Define a structure data type TRAIN_INFO. The type contain Train No.: integer type Train name: string Departure Time: aggregate 
type TIME Arrival Time: aggregate type TIME Start station: string End station: string The structure type Time contains two integer members: hour and minute. Maintain a train timetable and implement the following operations:
(i)List all the trains (sorted according to train number) that depart from a particular section.
(ii) List all the trains that depart from a particular station at a particular time.
(iii) List all he trains that depart from a particular station within the next one hour of a given time.
(iv)List all the trains between a pair of start station and end station.
*/
#include <stdio.h>
#include <string.h>

typedef struct {
    int hour;
    int minute;
} TIME;

typedef struct {
    int train_no;
    char train_name[50];
    TIME departure_time;
    TIME arrival_time;
    char start_station[50];
    char end_station[50];
} TRAIN_INFO;

void listTrainsByStation(TRAIN_INFO trains[], int n, char *station) {
    printf("Trains departing from %s:\n", station);
    for(int i=0; i<n; i++) {
        if(strcmp(trains[i].start_station, station) == 0) {
            printf("Train No: %d, Name: %s\n", trains[i].train_no, trains[i].train_name);
        }
    }
}

// Simplified Implementation for demonstration
int main() {
    TRAIN_INFO trains[5];
    int n, i;
    
    printf("Enter number of trains: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        printf("Enter info for train %d \n", i+1);
        printf("Train No: "); scanf("%d", &trains[i].train_no);
        printf("Train Name: "); scanf("%s", trains[i].train_name);
        printf("Start Station: "); scanf("%s", trains[i].start_station);
        printf("End Station: "); scanf("%s", trains[i].end_station);
        printf("Departure Time (hh mm): "); scanf("%d %d", &trains[i].departure_time.hour, &trains[i].departure_time.minute);
        printf("Arrival Time (hh mm): "); scanf("%d %d", &trains[i].arrival_time.hour, &trains[i].arrival_time.minute);
    }

    char station[50];
    printf("\nEnter station to list trains departing from: ");
    scanf("%s", station);
    listTrainsByStation(trains, n, station);

    return 0;
}
