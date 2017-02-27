/*蓝桥杯(A类大学)基础试题1 
给定两个仅由大写字母或小写字母组成的字符串(长度介于1到10之间)，它们之间的关系是以下4中情况之一：
　　1：两个字符串长度不等。比如 Beijing 和 Hebei
　　2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
　　3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
　　4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如 Beijing 和 Nanjing
　　编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。
输入格式
　　包括两行，每行都是一个字符串
输出格式
　　仅有一个数字，表明这两个字符串的关系编号
样例输入
BEIjing
beiJing 
样例输出
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
printf("1长度不一样");
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
{printf("2完全一样");}
else if(b>=index)
{printf("3大小写不一定 其他完全一样");} 
else
{printf("4长度一样 其他不一样");} 

}
}
