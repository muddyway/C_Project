//�β�s��ָ�ַ���Ϊ"abcdefghx"��ִ�н��Ϊ"ahcbedgfx"��
//ż ���� �� ��(index+2) 
//if ż  /0-1->2 indexż (index+2)
//if ��  /0-2->2 indexż(index+2)
#include<stdio.h>
main()
{ char  s[80]="abcdefghx";
int i;char t = '\0';
for(i=0;s[i]!='\0';i++)
{}
if(i%2==0) //ż�� 
{
t=s[i-1];
for(i;i>=4;i=i-2)//i=8
s[i-1]=s[i-3];//a3=a1 a5=a3 a7=a5...a[i-1]=a[i-3]
s[1]=t; 
}

if(i%2==1) //���� 
{
t=s[i-2]; 
for(i;i>=5;i-=2)
{s[i-2]=s[i-4];} //a3=a1 a5=a3 a7=a5...a[i-1]=a[i-3]
s[1]=t; 
}
printf("%s",s);
} 

