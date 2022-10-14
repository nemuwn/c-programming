#include<stdio.h>
#include<string.h>
main(){
    char s[100];
    puts("Enter your string");
    gets(s);
    int max=0,mi=0,ti=0;
    int i,e=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='u' || s[i]=='U' || s[i]=='o' || s[i]=='O' || s[i]=='i' || s[i]=='I'){
            e=e+1;
        }
        if(i==(strlen(s)-1)){
            if(e>=max){
                max=e;
                ti=mi;
                mi=i;
            }
            else{
                break;
            }
        }
        if(s[i]==' '){
            if(e>=max){
                max=e;
                ti=mi;
                mi=i;
            }
            e=0;
        }
    }
 
    if(ti==0){
        ti=-1;
    }
    for(i=ti+1;i<=mi;i++){
        printf("%c",s[i]);
    }
}
