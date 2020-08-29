#include <stdio.h>
void swap(int *,int *);
int main(){
   int N,K,A;
   int a,b,c,d;   //to store the buckets
   scanf("%d",&N);   //inputting the value of N
   for(int i=1;i<=N;i++){   //running all the N test cases
       a=0;b=1;c=0;d=0;   //setting the ball to be initially in B
       scanf("%d",&K);   //inputting the number of swaps
       for(int j=1;j<=K;j++){   //running the loop K number of times
           scanf("%d",&A);   //imputting each swap
           switch(A){
               case 1: swap(&a,&b);   //function to swap the values
                       break;
               case 2: swap(&b,&c);
                       break;
               case 3: swap(&c,&d);
                       break;
               case 4: swap(&d,&a);
                       break;
               case 5: swap(&a,&c);
                       break;
               case 6: swap(&b,&d);
                       break;
           }
       }
       //determining the end position
       char end_position;
       if(a==1){
           end_position='A';
       }
       else if(b==1){
           end_position='B';
       }
       else if(c==1){
           end_position='C';
       }
       else{
           end_position='D';
       }
       printf("Case #%d : %c\n",i,end_position);
   }
   return 0;
}
void swap(int *p,int *q){
   int tmp;   //temperory variable
   tmp=*p;   //storing value of p in tmp
   *p=*q;   //storing value of q in p
   *q=tmp;   //storing value of tmp in q
}
