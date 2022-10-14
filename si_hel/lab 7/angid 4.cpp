#include <stdio.h>
int main()
{
    int i,j,a[5][5],m,n,s,col;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=0;
    for(j=0; j<m; j++){
        s=0;
        for(i=0; i<n; i++){
            if(a[i][j]%2==0){
                s++;
            }
        }
        if(max< s){
            max = s;
            col = j;
        }
    }
    printf("%d", col);
}


