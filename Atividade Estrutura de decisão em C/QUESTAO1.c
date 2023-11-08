#include <stdio.h>

int main(){
	
	int N;
	
	printf("DIGITE UM VALOR: ");
	scanf("%d%",&N);
	
	if (N%2==0){
		N = N/2;
		printf("%d",N);
	}else {
		N = 3 * N +1;
		printf("%d",N);
	}
	
	
	return 0;
}