#include <stdio.h>

int main(){
    
    int n, m, i, j, k;

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
 	
 	int arr3[99];
 	while (i < n && j < m) {
	if (arr1[i] <= arr2[j]) {
 	arr3[k] = arr1[i];
 	i++;
 	k++;
 	} 
 	
	else {
 	arr3[k] = arr2[j];
 	k++;
	j++;
	}
	}
	
	while (i < n) {
	arr3[k] = arr1[i];
	i++;
	k++;
	}
	
	while (j < m) {
	arr3[k] = arr2[j];
	k++;
	j++;
	}
		
	printf("\niiluulesen husnegt :");
	for (i = 0; i < n + m; i++)
	printf("%d ", arr3[i]);
	return (0);
 
}
