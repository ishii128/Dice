#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,r;
  int h = 0,t = 0;
  
  printf("Tossing a coin...\n");
  srand(time(NULL));
 

  
  for(i = 0; i < 3; i++){
    r = rand() % 2 + 1;
    if(r == 1){
      printf("Round %d: Heads\n",i+1);
      h++;
    }
    if(r == 2){
      printf("Round %d: Tails\n",i+1);
      t++;
    }
  }
  
  printf("Heads: %d, Tails: %d\n",h,t);

  return 0;
}
