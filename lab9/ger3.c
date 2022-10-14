#include<stdio.h>

void read(int a[], int n){
  int i;
  printf("%d-n too oruulna uu: \n", n);
  for (i = 0; i < n; i++)
    scanf("%d", & a[i]);
}
void print(int a[], int n){
  int i;
  for (i = 0; i < n; i++)
    printf("a[%d] = %d\t", i, a[i]);
}
int join(int a[], int b[], int n, int m){
  int i;
	

  for (i = 0; i < m; i++){

    a[n] = b[i];
    n = n + 1;
  }
  int k = n + m - 3;
  return k;
}
main(){
  int n = 4;
  int a[100];
  int m = 3;
  int b[100];
  read(a, n);
  print(a, n);
  puts("\n");
  read(b, m);
  print(b, m);
  int k = join(a, b, n, m);
  puts("\n");
  print(a, k);

}
