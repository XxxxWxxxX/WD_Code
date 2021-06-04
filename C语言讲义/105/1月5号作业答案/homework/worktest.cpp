#include"head.h"
void little_to_upper();
void count_diff_char();
void change10_2();
void change2_10();
void change10_16();
void change16_10();
void count_bit_one();
int find_Once(int a[],int start,int end);
int find_Once_quick(int a[],int n);
void find_doubleOnce(int a[],int start,int end);
void find_doubleOnce(int a[],int n,int &res1,int &res2);
void find_threeOnce(int a[],int start,int end);
int dathOfYear(int year,int month,int day);
int between_days(Date Day1,Date Day2);
int workday(Date d);
Date day_afterN(Date D,int N);
void print_calender(int year,int month);
void power_canleder(int year);
int main()
{
	//little_to_upper();
	//count_diff_char();
	//change10_2();//没有考虑负数
	//change2_10();
	//change10_16();
	//change16_10();
	//count_bit_one();//考虑到
	//int a[]={1,1,2,2,3};
	//int res=find_Once(a,0,4);
	//printf("%d\n",res);
	//find_Once_quick(a,5);
	//int a[]={1,1,2,2,3,4,5,5};
	//find_doubleOnce(a,0,7);
	//int res1,res2;
	//find_doubleOnce(a,8,res1,res2);
	//printf("%d %d\n",res1,res2);
	//int a[]={1,1,2,2,3,4,5,6,6,7,7};
	//find_threeOnce(a,0,10);
	Date Day1={2009,1,1},Day2={2007,1,1};
	//printf("%d",between_days(Day1,Day2));
	//printf("%d",workday(Day2));
	//Day2=day_afterN(Day1,10);
	//printf("%d %d %d\n",Day2.year,Day2.month,Day2.day);
	//print_calender(2008,5);
	power_canleder(2015);
	system("pause");
	return 0;
}