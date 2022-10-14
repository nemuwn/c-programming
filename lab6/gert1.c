#include<stdio.h>
int main()
{   
    int n,k,i,j,d,c=0;
    printf("ehnii husnegtiin hemjeeg oruulna uu :");
    scanf("%d",&n);
    int a[n];
    printf("husnegtiin elementuudig oruulna uu: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

     printf("daraagin husnegtiin hemjeeg oruulna uu: ");
    scanf("%d",&k);
    int b[k];
    printf("husnegtiin elementuudig oruulna uu: ");
    for(i=0;i<k;i++){
        scanf("%d",&b[i]);
    }
     printf("Shine husnegt\n");
     for(i=n,j=0;i<(n+k);i++){
         a[i]=b[j++];
     }

     for(i=0;i<(n+k);i++){
         printf("%d ",a[i]);
     }
    for(i=0,d=0;i<(n+k);i++){
        if(a[i]!=NULL){

            for(j=i+1;j<(n+k);j++){
                if(a[i]==a[j]){
                    a[j]=NULL;
                }
            }
            a[d++]=a[i];
            c++;
        }


    }
	printf("\nElement davhardaagui shine husnegt : \n");
	for(i=0;i<c;i++){
	printf("%d ",a[i]);
	}

}
