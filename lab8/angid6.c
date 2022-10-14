#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char a[10][10]; 
    int i,j,ctr;
        
 
    printf(" stringee oruulna uu : ");
    fgets(str1, sizeof str1, stdin);    
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
    
        if(str1[i]==' '||str1[i]=='\0')
        {
            a[ctr][j]='\0';
            ctr++;  
            j=0;   
        }
        else
        {
            a[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n ug ugeer taslan hevleh:\n");
    for(i=0; i < ctr;i++)
        printf(" %s\n",a[i]);
    return 0;
}
