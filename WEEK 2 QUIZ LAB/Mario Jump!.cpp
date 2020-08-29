#include<stdio.h>

int main()
{
	int counter,naik = 0,turun = 0,banyak,simpan[1005];
	
	scanf("%d",&counter);
	for(int i=0 ; i < counter ; i++)
	{
		scanf("%d",&banyak);
		for(int j= 0 ; j < banyak; j++)
		{
			scanf("%d",&simpan[j]);
		}
		for(int k = 0 ; k < banyak-1; k++)
		{
			if(simpan[k] < simpan[k+1])
			{
				naik++;
			}
			else if(simpan[k] > simpan[k+1])
			{
				turun++;
			}
			else
			{
				naik = naik;
				turun = turun;
			}
		}
		printf("Case #%d : %d %d\n",i+1,naik,turun);
		naik = 0; turun = 0;
	}
}
