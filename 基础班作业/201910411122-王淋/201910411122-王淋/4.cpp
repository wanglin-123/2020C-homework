#include <stdio.h>
#include <string.h>

int main()
{
	char a[10000]={'\0'};
	scanf("%s",a);
	int i;
	int len=strlen(a);
 
 
	if(a[0]=='0'){ 
		i=2;
		while(a[i]=='0')
			i++;
		int xiaoshu=i+1-2;
		if(i<len)
			printf("%c",a[i++]);
		if(i<len)
			printf(".");
		for(;i<len;i++)
			printf("%c",a[i]);  
		printf("e-%d\n",xiaoshu);
	}
	else{   
		i=0;
		printf("%c.",a[0]); 
		while(a[i]!='.'&&i<len)
			i++;   
		int ex=i-1; 
		for(i=1;i<len;i++)
			if(a[i]!='.')
				printf("%c",a[i]); 
		printf("e%d\n",ex);
	}
	return 0;
}

