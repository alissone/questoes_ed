#include <stdio.h>

int arredondar(int n){ return ((n + 2) / 5 * 5); }

int main() {
	int n,c,i,scm=0,ssm=0;
	char tipo;
	scanf("%d",&c);
	for (i=0;i<c && (scanf("%d %c", &n,&tipo) > 0 && n >= 1 && n <= 1000 );i++,ssm+=n,(tipo=='D')?scm+=(arredondar(n)):(scm+=n));
	printf("%d %d",ssm,scm-ssm);
	return 0;
}