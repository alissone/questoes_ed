#include <stdio.h>
main(){ int n[4]; !(scanf("%d %d %d %d",n,n+1,n+2,n+3) == 4) || printf("%d",*(n) + *(n+1) + *(n+2) + *(n+3) - 3); }