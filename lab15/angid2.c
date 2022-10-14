#include <stdio.h>
#include <stdlib.h>
int *get_array(int n, int value) {
int *p;
p = (int*) malloc(sizeof(int) * n);
if (p == NULL) {
printf("Sanah oi hursenguu\n");
exit(1);
}
int i;
for (i = 0; i < n; i++) {
p[i] = value;
}
return p;
}
int main() {
int *a, i, n;
printf("n = ");
scanf("%d", &n);
a = get_array(n, 69);
for (i = 0; i < n; ++i) {
printf("%d\n", a[i]);
}
free(a);
return 0;
}

