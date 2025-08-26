// Tebak Pola Pak Fufu

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // input banyak suku yg akan diassign
    int n;
    scanf("%d", &n);
    
    // assign array barisan
    long long arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    // assign n suku ke-n
    int k;
    scanf("%d", &k);
    
    // cek barisan apakah aritmatika
    // asign tipe barisan  & beda
    int isAritmatika = 1;
    long long diff = arr[1] - arr[0];
    
    // cek apakah beda tetap
    for(int i = 2; i < n; i++) {
        if(arr[i] - arr[i-1] != diff) {
            isAritmatika = 0;
            break;
        }
    }
    
    // output aritmatika
    if(isAritmatika == 1) {
        printf("Aritmetika\n");
        long long uKeK = arr[0] + (k - 1) * diff;
        printf("%lld\n", uKeK);
        return 0;
    }
    
    // cek apakah geometri
    // assign tipe barisan
    int isGeometri = 1;

    // cek apakah ada elemen 0
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            isGeometri = 0;
            break;
        }
    }
    
    // cek apakah rasio tetap
    if(isGeometri == 1) {
        // assign rasio
        double rtio = (double)arr[1] / arr[0];
        
        for(int i = 2; i < n; i++) {
            // assign rasio sementara
            double currentRtio = (double)arr[i] / arr[i-1];
            if(fabs(currentRtio - rtio) > 1e-9) {
                // fabs untuk hitung nilai float simpangan rasio kecil
                isGeometri = 0;
                break;
            }
        }
        
        // output untuk barisan geometri
        if(isGeometri == 1) {
            printf("Geometri\n");
            long long uKeK = arr[0];

            for(int i = 1; i < k; i++) {
                uKeK = (long long)(uKeK * rtio);
            }
            printf("%lld\n", uKeK);
            return 0;
        }
    }
    
    // output pola aneh
    printf("Pola aneh! Pak Fufu ga jelas!\n");
    
    return 0;
}