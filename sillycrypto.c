#include <stdio.h>
#include <stdlib.h>

#define N 3072

struct st {
	int num;
};

__attribute__((noreturn))
int main(void)
{
	int i, j, k, n;
	struct st *buf;
	buf = (struct st *) malloc(sizeof(struct st) * N);
	for(i = 0; i < N; i++) {
		buf[i].num = i;
	}

	while(1) {
		for(i = 0; i < N; i++) {
			for(j = 0; j < 25000 * 10; j++) {
				n = buf[0].num;
			}
			if(i % 2 == 0) {
				for(j = 0; j < N; j++) {
					for(k = 1; k < 20 * 25000 / N; k++) {
						n = buf[j].num;
					}
				}
			} else {
				for(j = 0; j < N; j++) {
					for(k = 1; k < 2 * 20 * 25000 / N; k++) {
						n = buf[j].num;
					}
				}
			}
		}
		printf("%d\n", n);
	}
}
