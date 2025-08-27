#include <stdio.h> // for input/output
#include <stdbool.h> // for boolean
#include <string.h> // for string method
#include <math.h> // for math library
#include <stdlib.h> // for standard library

#define UPPER_CASE 65   
#define LOWER_CASE 97
#define BANYAK_CHAR 26

char allKecil(char x) {
    if(x >= LOWER_CASE) {
        return x; 
    } else {
        return x + (LOWER_CASE - UPPER_CASE);
    }
}

int urutChar(char x) {
    if(x >= LOWER_CASE) {
        return x - LOWER_CASE;
    } else {
        return x - UPPER_CASE; 
    }
}

char decodeChar(char x, int k) {

    if(x > LOWER_CASE + BANYAK_CHAR || x < UPPER_CASE) {
        return x;
    }
        
    int urutan = urutChar(x);
    char target = (urutan + k) % BANYAK_CHAR;

    if(target < 0) {
        target += UPPER_CASE + BANYAK_CHAR;
    } else {
        target += UPPER_CASE; 
    }

    if (x >= LOWER_CASE && x <= LOWER_CASE + BANYAK_CHAR) {
        return allKecil(target);
    } else {
        return target;
    }
}

int main() {

    char strg[100001];
    int k;
    scanf("%d", &k);
    k %= BANYAK_CHAR;
    getchar(); 

    fgets(strg, sizeof(strg), stdin);
    strg[strcspn(strg, "\n")] = '\0';

    for(int i = 0; i < strlen(strg); i++) {
        printf("%c", decodeChar(strg[i], k));
    }
    printf("\n"); 

    return 0;
}