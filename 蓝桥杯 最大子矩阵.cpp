/*问题描述
　　给定一个n*m的矩阵A，求A中的一个非空子矩阵，使这个子矩阵中的元素和最大。

　　其中，A的子矩阵指在A中行和列均连续的一块。
输入格式
　　输入的第一行包含两个整数n, m，分别表示矩阵A的行数和列数。
　　接下来n行，每行m个整数，表示矩阵A。
输出格式
　　输出一行，包含一个整数，表示A中最大的子矩阵中的元素和。
样例输入
3 3
-1 -4 3
3 4 -1
-5 -2 8
样例输出
10
样例说明
　　取最后一列，和为10。
数据规模和约定
　　对于50%的数据，1<=n, m<=50；
　　对于100%的数据，1<=n, m<=500，A中每个元素的绝对值不超过5000。
*/


//n=4(行) m=3(个)
//-1 -4 3
//3 4 -1
//-5 -2 8
//-1 -1 0
//标记max 


//矩形搜索 
//1行搜索(n)

//2行搜索(n-1)

// ...
// n行搜索(1) 

#include<iostream>
using namespace std;
const int n = 2;
const int m = 4;
int HangLieSort(int data2[n][m])
{   int temp = 0;
	int max = data2[0][0]+data2[0][1];
  for(int x= 0;x<n;x++) 
  { 
	for(int i = 0;i<m;i++)//第一行起始数字i定位搜索
	 {
	 for(int j = 2;j<=m-i;j++) //j为元素个数 
	   {
		   for(int k = 0;k<j;k++)//k具体负责实现 data[0]+...+data[k-1]功能 
		    {
		     for(int t=1;t<=n-x;t++)//t参与计算列数	
		     {
		     for(int p=0;p<t;p++)	
			 temp = temp + data2[x+p][i+k];
			 if(temp>max)
			 max = temp;
		     }	
			 temp = 0;//清空缓存 	  
			}
      }
    }
   }
	return max;
}
main()
{
	int data[n][m] = {0};
	for(int i = 0;i<n;i++)
	 {
	 	for(int j = 0;j<m;j++)
	     cin>>data[i][j];
	     cout<<endl;
	 }
	 cout<<HangLieSort(data)<<endl;
}

