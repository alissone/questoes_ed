#include <stdio.h>

int main() {
	int n=0,i=0,x=0,soma=0,resp=0;
	scanf("%d",&n);
	for(;i<n;i++) if(scanf("%d",&x)) soma+=x;
	scanf("%d",&resp);
	(soma==resp)?printf("Acertou\n"):printf("Errou\n");
	return 0;
}
