#include <stdio.h>

int main() {

    printf("Calculates the total average speed of two trips given speed and duration of each \n");

    int s1,t1;

    printf("- First Trip - \n");
    printf("Given speed in km/h: ");
        scanf("%d", &s1);

    printf("Given time in hours: ");
        scanf("%d", &t1);

    int s2,t2;

    printf("- Second Trip - \n");
    printf("Given speed in km/h: ");
        scanf("%d", &s2);
    printf("Given time in hours: ");
        scanf("%d", &t2);

    //Calculation

    int totalTime;
    int totalDistance;
    int averageSpeed;

    totalDistance = t1*s1 + t2*s2;

    totalTime =  t1 + t2;

    averageSpeed = totalDistance / totalTime;

    printf("The average speed of both trips is: %d", averageSpeed);
    printf("km/h");

    return 0;
}