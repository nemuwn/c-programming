#include<stdio.h>
#include<string.h>
main(){
    char o[100];
    char n[100];
    char t[100];
    char ongo[100];
    char h[100];
    char ch[100];
    char m[100];
    int k,i,z;
    puts("Tanii ovog");
    gets(o);
    puts("Tanii ner");
    gets(n);
    puts("Tanii torson on");
    gets(t);
    puts("Tanii durtai ongo?");
    gets(ongo);
    puts("Tanii hobby");
    gets(h);
    puts("Choloot tsagaaraa yu hiideg we");
    gets(ch);
    for(i=0;i<4;i++){
        m[i]=t[i];
    }
    sscanf(m, "%d", &k);
    z = 2021-k;
    sprintf(m, "%d", z);
    strcat(o," ovogtoi ");
    strcat(o,n);
    strcat(o," ni ");
    strcat(o,t);
    strcat(o," odor torson. Odoo ");
    strcat(o,m);
    strcat(o," nastai.Tuunii durtai ongo bol ");
    strcat(o,ongo);
    strcat(o,". Ter choloot tsagaaraa ");
    strcat(o,ch);
    strcat(o," hiideg. Tuunii hobby bol ");
    strcat(o,h);
    puts(o);
    }
