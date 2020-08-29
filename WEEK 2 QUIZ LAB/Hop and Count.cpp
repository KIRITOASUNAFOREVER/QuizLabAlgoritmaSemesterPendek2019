#include<stdio.h>

int countFormedGroups(int P1, int P2, int S, int G){
    int range = P2 - P1 + 1;
    int total_hops_in_range = range/S;
    int formed_groups = total_hops_in_range/G;
    return formed_groups;
}

int main(){
    int test_no=1, N;
    int P1, P2, S, G, formed_groups;
    scanf("%d",&N);

    while (test_no <= N){
        scanf("%d",&P1);
        scanf("%d",&P2);
        scanf("%d",&S);
        scanf("%d",&G);
        formed_groups = countFormedGroups(P1,P2,S,G);
        printf("Case #%d : %d\n",test_no,formed_groups);
        test_no += 1;
    }
    return 0;
}
