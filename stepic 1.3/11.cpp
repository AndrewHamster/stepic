#include <stdio.h>

long tIS(int h, int m, int s){
	return(h*3600+m*60+s);
}

int main(void){
	int h1, m1, s1, h2, m2, s2;
	long dtime;
	scanf("%d %d %d\n%d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
	dtime=tIS(h2, m2, s2)-tIS(h1, m1, s1);
	printf("%ld", dtime);
}