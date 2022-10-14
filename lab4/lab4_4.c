#include<stdio.h>
int main(){
    int a;
    printf("Sholtei ustai xool idex uu?\nTiim bol 1\nUgui bol 0\n");
    scanf("%d",&a);
    if(a==1){
        printf("Tsaitai bol 1, Ugui bol sholtei baix ni\n");
        scanf("%d",&a);
        if(a==1){
            printf("Budaatai bol 1, Ugui bol banshtai baix ni\n");
            scanf("%d",&a);
            if(a==1){
                printf("Budaatai tsai");
            }
            else{
                printf("Banshtai tsai");
            }
        }
        else{
            printf("Yutai shol idmeer baina?\nLapsha bol 6\nXuitsai bol 5\nGoimontoi shol bol 4\nBanshtai shol bol 3\nXar shol bol 2\nNogootoi shol bol 1\n");
            scanf("%d",&a);
            if(a==6){
                printf("Lapsha");
            }
            else if(a==5){
                printf("Xuitsai");
            }
            else if(a==4){
                printf("Goimontoi shol");
            }
            else if(a==3){
                printf("Banshtai shol");
            }
            else if(a==2){
                printf("Xar shol");
            }
            else{
                printf("Nogootoi shol");
            }
        }
    }
    else{
        printf("Max ni tatsan uu?\nTiim bol 1\nUgui bol 0\n");
        scanf("%d",&a);
        if(a==1){
            printf("Guriland orooson uu?\nTiim bol 1\nUgui bol 0\n");
            scanf("%d",&a);
            if(a==1){
                printf("Yaj bolgoson?\nSharsan bol 1\nJignesen bol 0\n");
                if(a==1){
                    printf("Yaj sharsan?\nXoolgon sharsan bol 1\nShuud sharsan bol 0\n");
                    scanf("%d",&a);
                    if(a==1){
                        printf("Piroshki");
                    }
                    else{
                        printf("Xuushuur");
                    }
                }
                else{
                    printf("Yaj jignesen?\nXoolgon jignese bol 1\nShuud jignese bol 0\n");
                    scanf("%d",&a);
                    if(a==1){
                        printf("Mantuun buuz");
                    }
                    else{
                        printf("Buuz");
                    }
                }
            }
            else{
                printf("Budaatai yu?\nOndgond orooson bol 1\nMaxaa booronxiilson bol 0");
                scanf("%d",&a);
                if(a==1){
                    printf("Ondogtei bifshteks");
                }
                else{
                    printf("Teftel");
                }
            }
        }
        else{
            printf("Yutai xolisn?\nGuriltai bol 4\nOndogtei bol 3\nBudaatai bol 2\nNogootoi bol 1\n");
            scanf("%d",&a);
            if(a==4){
                printf("Tsuiwan");
            }
            else if(a==3){
                printf("Ondogtei xuurga");
            }
            else if(a==2){
                printf("Xoorond ni xolix uu?\nTiim bol 1\nUgui bol 0\n");
                scanf("%d",&a);
                if(a==1){
                    printf("Guliyash");
                }
                else{
                    printf("Budaatai xuurga");
                }
            }
            else{
                printf("Nogootoi xuurga");
            }
        }
    }
}
