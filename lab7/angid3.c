#include <stdio.h>

int main()
{
    int a[100],c[100];
    int i,j,f,m,n,t=0;
    
        printf("morniihoo toog oruul:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    f=0;
    
    for(i=n; i>=1; i--){
        c[f]=a[i];
        f++;
    }
    
    for(i=1; i<=n; i++){
    	for(f=1; f<=n; f++){
    		if(a[i]==c[f])
    		t++;
		}
	}
	
	if(t ==2*n-3){
		printf("tesh hemtei");
	}
	else printf("tegsh hemtei bish");
}

