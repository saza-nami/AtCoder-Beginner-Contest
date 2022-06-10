#include <stdio.h>
#include <string.h>

int main(){
  int N, K, X, Y = 0;
  int yen = 0;
  scanf("%d%d%d%d", &N, &K, &X, &Y);
  for(int i = 0; i < N && i < K; i++){
  	yen += X;
  }
  for(int i = K; i < N; i++){
  	yen += Y;
  }
  printf("%d", yen);
  return 0;
}