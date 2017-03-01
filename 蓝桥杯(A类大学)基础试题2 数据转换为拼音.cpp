/*Tom教授正在给研究生讲授一门关于基因的课程，有一件事情让他颇为头疼：
一条染色体上有成千上万个碱基对，它们从0开始编号，到几百万，几千万，甚至上亿。
　　比如说，在对学生讲解第1234567009号位置上的碱基时，
光看着数字是很难准确的念出来的。
　　所以，他迫切地需要一个系统，然后当他输入12 3456 7009时，会给出相应的念法：
　　十二亿三千四百五十六万七千零九
　　用汉语拼音表示为
　　shi er yi san qian si bai wu shi liu wan qi qian ling jiu
　　这样他只需要照着念就可以了。
　　你的任务是帮他设计这样一个系统：给定一个阿拉伯数字串，你帮他按照中文读写的规
范转为汉语拼音字串，相邻的两个音节用一个空格符格开。
　　注意必须严格按照规范，比如说"10010"读作"yi wan ling yi shi"而不是
"yi wan ling shi"，"100000"读作"shi wan"而不是"yi shi wan"，"2000"读作"er qian"
而不是"liang qian"。
输入格式
　　有一个数字串，数值大小不超过2,000,000,000。
输出格式
　　是一个由小写英文字母，逗号和空格组成的字符串，表示该数的英文读法。
样例输入
1234567009
样例输出
shi er yi san qian si bai wu shi li wan qi qian ling jiu
*/
#include<stdio.h>
#include<math.h> 
#include<string> 
using namespace std;

char *Change(int i){
static char ss[10] = "";
switch (i){
case 1:
strcpy(ss,"yi"); 
break;
case 2:
strcpy(ss,"er"); 
break;
case 3:
strcpy(ss,"san"); 
break;
case 4:
strcpy(ss,"si"); 
break;
case 5:
strcpy(ss,"wu"); 
break;
case 6:
strcpy(ss,"liu"); 
break;
case 7:
strcpy(ss,"qi"); 
break;
case 8:
strcpy(ss,"ba"); 
break;
case 9:
strcpy(ss,"jiu"); 
break;
default:
strcpy(ss,""); 
break;	
}
return ss;

}
void Fanyi(int h)
{int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0; 

if(h/1000>0)//四位 
{m1 = h%10;//个位 
m4 = h/1000;
m3 = (h -m4*1000)/100;
m2 =  (h -m4*1000-m3*100)/10;

printf("%s,qian,",Change(m4));
printf("%s,bai,",Change(m3));
printf("%s,shi,",Change(m2));
printf("%s",Change(m1));
}//4位 
else if(h/100>0)
{m1 = h%10;//个位 
m3 = h/100;
m2 = (h -m3*100)/10;
printf("%s,bai,",Change(m3));
printf("%s,shi,",Change(m2));
printf("%s",Change(m1));
}//3位 
else if(h/10>0)
{m1 = h%10;//个位 
m2 = h/10;
printf("%s,shi,",Change(m2));
printf("%s",Change(m1));
}//2位	
else
{
printf("%s",Change(h));
}
}


main()
{char s[11];
printf("输入10位及以下数字");
scanf("%s",s);
int num,sum=0,index,x;
for(index=0;s[index]!='\0';index++)//index元素个数 
{}
for(x=0;x<index;x++) {
num = int(s[x]-'0');
sum = sum*10+num;//总数 	
}

double time =0.0;
while(index-4>0)//位数=time*4+index 
{ index =index-4; 
time++;
}
int left;
left =sum/pow(10000.0,time);
printf("%4d\n",left);
int t;
t=time;
int then,o[10],p=0;
while(time>0)
{then = sum %10000;
time--; 
sum=sum/10000;
printf("%4d\n",then);
o[p++]=then;
}
char str[10]= ""; 
/*if(t>=3)
{Fanyi(left);

if(p%2==0)
{
for(p;p>=0;p-=2)
{
strcpy(str,"yi");
printf(",%2s,",str);
Fanyi(o[p+1]);
strcpy(str,"wan");
printf(",%2s,",str);
Fanyi(o[p]);
}
}
else
{
strcpy(str,"wan");
Fanyi(o[p]);
p--;
for(p;p>=0;p-=2)
{
strcpy(str,"yi");
printf(",%2s,",str);
Fanyi(o[p+1]);
strcpy(str,"wan");
printf(",%2s,",str);
Fanyi(o[p]);
}
}
}
*/
//十位以上写法，限于POW函数转换为int时，十位以上数据丢失过多，故暂不写。 
if(t==2)
{ 
strcpy(str,"yi");
Fanyi(left);
printf(",%2s,",str);
Fanyi(o[1]);
strcpy(str,"wan");
printf(",%2s,",str);
Fanyi(o[0]);
}
if(t==1)
{ strcpy(str,"wan");
Fanyi(left);
printf(",%2s,",str);
Fanyi(then);} 
if(t==0)
Fanyi(left);
}
  
