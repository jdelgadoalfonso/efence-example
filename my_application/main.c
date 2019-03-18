#include <stdlib.h>

int main(void) {
	char *buf = malloc(20);
	int i = 0;
	buf[-1] = '0';
	for (i = 0; i <=20; i++) {
		buf[i] = '0';
	}
}
