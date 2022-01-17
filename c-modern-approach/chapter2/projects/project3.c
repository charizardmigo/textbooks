//PRIESTLEY FOMECHE
//COMPUTES VOLUME OF A SPHERE
//5TH JANUARY 2022

#include <stdio.h>
#include <stdlib.h>
#define RATIO 4.0f / 3.0f
#define PI 22.0f / 7.0f

int main(void)
{
    int radius;
    float volume;

    printf("Enter the radius of a sphere: ");
    scanf("%d", &radius);

    volume = RATIO * PI * radius * radius * radius; //Formula to calculate volume

    printf("\nThe volume of the sphere is %.2f m^3\n", volume);

    return 0;
}
