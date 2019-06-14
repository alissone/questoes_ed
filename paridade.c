#include <stdio.h>

unsigned int int_bin(unsigned int k) { return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_bin(k / 2))); }
unsigned int bin_cont(unsigned int u){ return (((u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111)) + ((u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111)) >> 3)) & 030707070707) % 63; }

int main() {
	unsigned n, c, k, paridade = 1;
	for(;scanf("%d", &n) > 0 && n >= 1 && n <= 2147483647;n ? printf("The parity of %d is %d (mod 2).\n",int_bin(n),bin_cont(n)) : 0);
	return 0;
}