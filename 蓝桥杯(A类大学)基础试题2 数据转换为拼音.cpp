/*Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�
һ��Ⱦɫ�����г�ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
��������˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ��
�⿴�������Ǻ���׼ȷ��������ġ�
�������ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
����ʮ������ǧ�İ���ʮ������ǧ���
�����ú���ƴ����ʾΪ
����shi er yi san qian si bai wu shi liu wan qi qian ling jiu
����������ֻ��Ҫ������Ϳ����ˡ�
������������ǰ����������һ��ϵͳ������һ�����������ִ���������������Ķ�д�Ĺ�
��תΪ����ƴ���ִ������ڵ�����������һ���ո���񿪡�
����ע������ϸ��չ淶������˵"10010"����"yi wan ling yi shi"������
"yi wan ling shi"��"100000"����"shi wan"������"yi shi wan"��"2000"����"er qian"
������"liang qian"��
�����ʽ
������һ�����ִ�����ֵ��С������2,000,000,000��
�����ʽ
������һ����СдӢ����ĸ�����źͿո���ɵ��ַ�������ʾ������Ӣ�Ķ�����
��������
1234567009
�������
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

if(h/1000>0)//��λ 
{m1 = h%10;//��λ 
m4 = h/1000;
m3 = (h -m4*1000)/100;
m2 =  (h -m4*1000-m3*100)/10;

printf("%s,qian,",Change(m4));
printf("%s,bai,",Change(m3));
printf("%s,shi,",Change(m2));
printf("%s",Change(m1));
}//4λ 
else if(h/100>0)
{m1 = h%10;//��λ 
m3 = h/100;
m2 = (h -m3*100)/10;
printf("%s,bai,",Change(m3));
printf("%s,shi,",Change(m2));
printf("%s",Change(m1));
}//3λ 
else if(h/10>0)
{m1 = h%10;//��λ 
m2 = h/10;
printf("%s,shi,",Change(m2));
printf("%s",Change(m1));
}//2λ	
else
{
printf("%s",Change(h));
}
}


main()
{char s[11];
printf("����10λ����������");
scanf("%s",s);
int num,sum=0,index,x;
for(index=0;s[index]!='\0';index++)//indexԪ�ظ��� 
{}
for(x=0;x<index;x++) {
num = int(s[x]-'0');
sum = sum*10+num;//���� 	
}

double time =0.0;
while(index-4>0)//λ��=time*4+index 
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
//ʮλ����д��������POW����ת��Ϊintʱ��ʮλ�������ݶ�ʧ���࣬���ݲ�д�� 
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
  
