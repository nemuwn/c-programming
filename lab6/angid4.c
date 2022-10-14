#include <stdio.h>

int main(){
    
    int n, i, m;
    int t=0;

    printf("too oruulna uu: ");
    scanf("%d", &n);
    int arr[n];
    printf("husnegtiin toonuudaa oruulna uu: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }   
    
    printf("haih toogoo oruulna uu \n");
    scanf("%d",&m);

    for(i=0;i<n;i++) {
    
        if (m == arr[i]) {
        	t=1;
        	printf("%d-r bairlald baina \n",i+1);
        }
        
    }
    if(t==0){
    	printf("-1");
	}
}
