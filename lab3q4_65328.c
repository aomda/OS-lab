#include <stdio.h>
int main(){
	int n;
	int i = 0;
	int sum = 0;
	int avg = 0;
	do{
		printf("enter number : ");
		scanf("%d",&n);
		i++;
		sum += n;
	} while(n > 0);
	sum -= n;
	avg = sum/(i-1);
	printf("sum = %d\naverage = %d\n", sum, avg);
	return 0;
}

