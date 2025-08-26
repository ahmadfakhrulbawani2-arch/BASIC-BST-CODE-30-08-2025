#include <stdio.h> // for input/output
#include <stdbool.h> // for boolean
#include <string.h> // for string method
#include <math.h> // for math library
#include <stdlib.h> // for standard library

int main() {

    int banyakBotol = 0;
	int volumeSementara = 0;
	int volumeTotal = 0;

	scanf(" %d", &banyakBotol);
	
	if(banyakBotol == 0) {
		printf("Minimal 1 botol!");
	} else if(banyakBotol > 100) {
		printf("Maksimal 100 botol!");
	} else {
		
		for(int i = 1; i <= banyakBotol; i++) {
			scanf("%d", &volumeSementara);
			volumeTotal += volumeSementara;
		}

		if(volumeTotal > 1000) {
			printf("Yahh tumpah, jadi mubazir deh");
		} else if(volumeTotal == 1000) {
			printf("Nahh pas nihh, tinggal minum deh");
		} else if(1 < volumeTotal < 1000) {
			printf("Masih belum penuh ini mahh, tuang lagi dong");
		} else {
			printf("Volume minimal 1!");
		}
	}	

    return 0;
}