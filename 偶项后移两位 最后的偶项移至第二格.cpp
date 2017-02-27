//形参s所指字符串为"abcdefghx"，执行结果为"ahcbedgfx"。
//偶 不动 奇 动(index+2) 
//if 偶  /0-1->2 index偶 (index+2)
//if 奇  /0-2->2 index偶(index+2)
#include<stdio.h>
main()
{ char  s[80]="abcdefghx";
int i;char t = '\0';
for(i=0;s[i]!='\0';i++)
{}
if(i%2==0) //偶数 
{
t=s[i-1];
for(i;i>=4;i=i-2)//i=8
s[i-1]=s[i-3];//a3=a1 a5=a3 a7=a5...a[i-1]=a[i-3]
s[1]=t; 
}

if(i%2==1) //奇数 
{
t=s[i-2]; 
for(i;i>=5;i-=2)
{s[i-2]=s[i-4];} //a3=a1 a5=a3 a7=a5...a[i-1]=a[i-3]
s[1]=t; 
}
printf("%s",s);
} 

