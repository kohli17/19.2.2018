

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,n,t=0;
    char a[100];
    printf("Enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1'))
        {
            t+=1;
        }
    }
    if(t==n)
    {
        printf("The given string is in binary representation");
    }
    else
    {
        printf("The given string is not in binary representation");
    }return 0;
}
