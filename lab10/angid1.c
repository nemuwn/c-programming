#include <stdio.h>
#include <string.h>
void count(char *s)
{
	static  int i,egshig=0;
	if(!s[i])
    {
    	printf("egshig = %d\n",egshig);
        return;
    }
    else
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
    	{
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      egshig++;
        }
        i++;
         count(s);
    }  
}
int main()
{
    char s[100];  
    printf("string ee oruulna uu: ");
    gets(s);
    count(s);
 }

