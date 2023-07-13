#include<stdio.h>
void main() {
	for (int m = 5; m < 7; m++) {
		for (int n = 0; n < 3; n++) {
			if (m == 5 && n == 1)break;
			if (n == 2)continue;
			printf("m(%d) - n(%d) \n", m, n);
		}
	}
}