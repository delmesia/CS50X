#include <stdio.h>
int main (void){
  int people = 0, team = 0, n,k;
  scanf("%d %d", &n,&k);
  int pool[n];
  fread(pool,1,n,stdin);
  for(int i = 0; i < n; i++){
    printf("%d", pool[i]);
  }
  //for(size_t i = 0; i <= n; i++){
    //if(pool[i] + k <= 5) {
      //people++;
      //printf("%d\n", people);
    //}
    //if(people % 3 == 0){
      //team++;
    //}
  //}
}
