#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	for(int j = 1; j <= N; j++){
		int K;
		int A[101] = {0};
		int B[101] = {0}; // arrays for keeping track of random numbers of couples
		scanf("%d",&K);
		for(int i = 0; i < K; i++){ // using counting sort
			int temp;
			scanf("%d",&temp);
			A[temp]++;
		}
		int count = 0;
		for(int i = 0; i < 101; i++){
			if(A[i]%2){
				B[i] = 1;
				if(A[i] > 1){
					count += A[i]/2;
				}
			}else if(A[i] != 0 && A[i]%2 == 0){
				count++;	
			}
		}
		printf("Case #%d : %d | ",j,count);
		int flag = 0;
		for(int i = 0; i < 101; i++){
			if(B[i]){
				printf("%d ",i);
				flag = 1;
			}
		}
		if(flag == 0){
			printf("0");
		}
		printf("\n");
	}
	return 0;
}
