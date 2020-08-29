#include <stdio.h>
#include <string.h>

int main(){
	char map[100][100];
	FILE *fp = NULL;
	int i = 0,j, col_ind,row_ind;
	int M = 0,p;
	/* read input of several lines of symbols from file testdata.in */
	fp = fopen("testdata.txt", "r");
	while(fgets(map[i],100, fp)){
		map[i][strlen(map[i])-1]='\0';
		i++;
	}
	M = i;
	/* check whether M is within 5 to 100 or not, if yse then execute if statement */
	if(M>=5 && M<=100){
	for(i = 0; i <M; i++){
		p=strlen(map[i]);
	}
	/* check the map is square or not, if yes then find bomb location */
	if(M==p){
	   for(i = 0; i < M; i++){
	    for(j=0;j<strlen(map[i]);j++){
		   /* if bomb found, then break the loop */
		           if(map[i][j]=='@'){
			       /* bomb y and x axis respectively */
			               col_ind=j;
			       row_ind=i;
			        break;
           		}
       		}
		}
	}
}
	/* print x and y axis of bomb */
	printf("%d %d\n",row_ind,col_ind);
	return 0;
}
