#include <stdio.h>

float average(int l, int *arr);

int main(){
  const int N = 4;
  int arr[N];
  printf("Enter the scores of the student:\n");
  for(int i = 0;i<N;i++){
    scanf("%i", &arr[i]);
  }
  printf("The average score is: %0.2f", average(N, arr));
  return 0;
}

float average(int l, int *arr){
  int sum  = 0;
  for(int i = 0;i<l;i++){
    sum += arr[i];
  }
  return (float)sum/l;
}

