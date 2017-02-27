//6978972->286
#include<stdio.h>
main(){
printf(" ‰»Î“ª¥Æ ˝◊÷");
int x,i=0,n,b[100]={0}; 
scanf("%d",&x);
while(x)
{n=x%10;
if(n%2==0)
{b[i++]=n;} 
x=x/10;
}
for(i=0;b[i]!='\0';i++)
{printf("%d",b[i]);}

}
