#include <stdio.h>
#include <string.h>
void  fun(int pp[],char *tt)
{ int i;
for(i=0;i<=25;i++)
pp[i]=0;
for(;*tt!='\0';tt++)
{if(*tt>='a'&&*tt<='z') 
 pp[*tt-'a']++;}

}


 main()
{char t[1000];
scanf("%s",t);
int p[26];
int i;
for(i=0;i<=25;i++)
p[i]=0;
fun(p,t);
for(i=0;i<=25;i++)
printf("%2d",p[i]);
}
