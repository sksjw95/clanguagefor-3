#include<stdio.h>
void main() {
	for (int n = 5; n < 17; n++) {
		if (n == 6 || n ==10)continue;
		printf("m(%d)\n", n);
	}
}