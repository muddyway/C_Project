/*���ű�(A���ѧ)��������1 
�����������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
����1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
����2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
����3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2�������� beijing �� BEIjing
����4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
��������ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�
�����ʽ
�����������У�ÿ�ж���һ���ַ���
�����ʽ
��������һ�����֣������������ַ����Ĺ�ϵ���
��������
BEIjing
beiJing 
�������
3
*/
#include<math.h> 
#include<stdio.h>


main()
{
char s1[10];char s2[10];
scanf("%s",s1); 
scanf("%s",s2); 
int s1_index,s2_index;
for(s1_index=0;s1[s1_index]!='\0';s1_index++)
{}
for(s2_index=0;s2[s2_index]!='\0';s2_index++)
{}
int n=0,index,b=0; 



printf("%d%d",s1_index,s2_index);
if(s1_index!=s2_index) 
printf("1���Ȳ�һ��");
else
{
for(index=0;s1[index]!='\0';index++)
{

if(s1[index]==s2[index])
n++;
if(fabs(s1[index]-s2[index])==('a'-'A')||(s1[index]==s2[index]))
b++;
}
if(n>=index)
{printf("2��ȫһ��");}
else if(b>=index)
{printf("3��Сд��һ�� ������ȫһ��");} 
else
{printf("4����һ�� ������һ��");} 

}
}
