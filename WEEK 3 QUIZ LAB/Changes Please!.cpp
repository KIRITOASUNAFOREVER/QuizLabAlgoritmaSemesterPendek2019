#include<stdio.h>
#include<stdlib.h>

int min(int a,int b){
	if(a<b){
		return a;
	}
	else return b;
}

int min_coins(int N,int T,int coins[]){
	int dp[100]={0};
	int n,i;
	//Iterate over all states 1 to N

	for(n=1;n<=N;n++){
		dp[n]=INT_MAX;
		for( i=0;i<T;i++){
			if(n-coins[i]>=0){
				int subprob=dp[n-coins[i]];
				dp[n]=min(dp[n],subprob+1);
			}
		}
	}
	return dp[N];
}

int main(){
	int t,k,n,s=1;
	scanf("%d",&t);

	while(t--){
		int k,n,sum=0,p;
		scanf("%d",&k);
		int arr[k],i;
		for( i=0;i<k;i++){
			scanf("%d",&arr[i]);
			sum+=arr[i];
		}  
	scanf("%d",&p);
	int rs=p-sum;

	if(rs>=0){
		int dp[100]={0};
		int coins[]={50,20,10,5,2,1};
		int T=6;
		int ans=min_coins(rs,T,coins);
		printf("Case #%d",s);
		printf(": %d",ans);
		printf("\n");
		s=s+1;
	}
	else{
		printf("Case #%d",s);
		printf(": REPAY\n");
		s=s+1;
	}
}
	return 0;
}
