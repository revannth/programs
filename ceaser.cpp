#include <stdio.h>
#include <string.h>
int main(){
	char text[50];
	char enctext[50];
	char dectext[50];
	int key,temp,i,l;
	printf("\nenter the text:");
	scanf("%s",text);
	printf("\nenter the key:");
	scanf("%d",&key);
	l=strlen(text);
	for(i=0;i<l;i++){
		enctext[i]=((text[i]-97+key)%26)+97;
	}
	enctext[l]='\0';
	printf("\nencrypted text is: %s",enctext);
	for (i=0;i<l;i++){
		temp=(enctext[i]-97-key)%26;
		if(temp>=0)
			dectext[i]=temp+97;
		else
			dectext[i]=123+temp;
	}
	dectext[l]='\0';
	printf("\nthey decrypted text is:%s",dectext);
}
