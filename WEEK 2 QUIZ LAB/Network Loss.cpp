#include<stdio.h>

int main()
{
	int counter,panjang = 0,treshold,jumlahS = 0;
	char panjangNetwork[1005];
	scanf("%d",&counter);
	
	for(int i=0 ; i < counter; i++)
	{
		scanf("%s %d",&panjangNetwork,&treshold);
		while(panjangNetwork[panjang] !='\0')
		{
			panjang++;
		}
		for(int j=0 ; j < panjang ; j++)
		{
			if(panjangNetwork[j]=='s' && panjangNetwork[j+1]=='s')
			{
				jumlahS++;
			}
		}
		if(jumlahS > treshold)
		{
			printf("Case #%d : DON'T PLAY\n",i+1);
		}
		else
		{
			printf("Case #%d : PLAY\n",i+1);
		}
		panjang = 0; jumlahS = 0;
	}
}
