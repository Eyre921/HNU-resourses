#include <stdio.h>
void PrintN(int N){
	if(N){
		PrintN(N-1);
		printf("%d\n",N);
	}
	return;
}
int main(){
	int N;
	scanf("%d",&N);
	PrintN(N);
	return 0;
}

