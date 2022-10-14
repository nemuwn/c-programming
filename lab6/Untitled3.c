#include <stdio.h>

int main(){
    
    int n, m, i, j;

    printf("too oruulna uu: ");
    scanf("%d", &n);
    int arr1[n];
    printf("husnegtiin toonuudaa oruulna uu: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }   
    
    printf("too oruulna uu: ");
    scanf("%d", &m);
    int arr2[m];
    printf("husnegtiin toonuudaa oruulna uu: ");
    for(j=0; j<m; j++){
        scanf("%d", &arr2[j]);
    }   
    
    i = 0;
 	j = 0;
 	k = 0;
 	
 	while (i < n1 && j < n2) {
	if (arr1[i] <= arr2[j]) {
 	res[k] = arr1[i];
 	i++;
 	k++;
 	} else {
 	res[k] = arr2[j];
 	k++;
	 j++;
 }
 }
 printf("\nMerged array is :");
 for (i = 0; i < n1 + n2; i++)
 printf("%d ", res[i]);
 
 return (0);
 
}
