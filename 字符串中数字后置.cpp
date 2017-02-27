#include<stdio.h>
int main()
{char a[80]="ba3a5fsa6";
 char t = '0',i=0,n=0;
	while(a[n]!='\0')
	{   n++;
		if(a[n]>='0' && a[n]<='9')
		{   t=a[n]; i=n;
			for(i;a[i]!='\0';i++)
			  	
			   {a[i]=a[i+1];}
			   a[i-1]=t;
			   a[i]='\0';
		}

	}
	printf("%s",a);
}
