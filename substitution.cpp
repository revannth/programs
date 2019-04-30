#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n=13,i,k;
char c[100];
printf("Enter a plain text ");
for(i=0;i<100;i++)
{
scanf("%c",&c[i]);
if(c[i]=='\n') break;
}
for(i=0;i<100;i++)
{
if(c[i]=='\0')
break;
else if(c[i]>=97 && c[i]<=122)
{
k=c[i];
k=k+n;
if(k>122) k=k-26;
c[i]=(char)k;
}
else if(c[i]>=64 && c[i]<=90)
{
k=c[i];
                        k=k+n;
                        if(k>90) k=k-26;
                        c[i]=(char)k;
}
}
printf("Cipher Text is %s",c);
}


DECRYPTION:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n=13,i,k;
char c[100];
printf("Enter a cipher text ");
for(i=0;i<100;i++)
{
scanf("%c",&c[i]);
if(c[i]=='\n') break;
}
for(i=0;i<100;i++)
{
if(c[i]=='\0')
break;
else if(c[i]>=97 && c[i]<=122)
{
k=c[i];
k=k-n;
if(k<97) k=k+26;
c[i]=(char)k;
}
else if(c[i]>=64 && c[i]<=90)
{
k=c[i];
                        k=k-n;
                        if(k<64) k=k+26;
                        c[i]=(char)k;
}
}
printf("Plain Text is %s",c);
}


