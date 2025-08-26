#include <stdio.h> // for input/output
#include <stdbool.h> // for boolean
#include <string.h> // for string method
#include <math.h> // for math library
#include <stdlib.h> // for standard library

int main() {

    int jamH = 0;
    int jamM = 0;
    int durasiMakan = 0;

    scanf("%d", &jamH);
    scanf("%d", &jamM);
    scanf("%d", &durasiMakan);

    if(12 <= jamH <= 13 && 0 <= jamM <= 60) {
        int jamTotal = (jamH * 60) + jamM + durasiMakan;
        if(jamTotal < 720 || jamTotal > 780) {
            printf("LEWAT WAKTU");
        } else if(720 <= jamTotal <= 780) {
            printf("MASIH WAKTU");
        }
    }

    return 0;
}