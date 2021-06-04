#include"head.h"

#define IF_LEAP(a) (a%4==0&&a%100!=0||a%400==0)


int dathOfYear(int year,int month,int day)
{
	int dath;
	int leap;
	int p_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(day>p_month[month])
		printf("illegal date\n");

	dath=0;
	leap=(year%4==0&&year%100!=0||year%400==0);
	switch(month)
	{
	case 12:dath+=p_month[11];
	case 11:dath+=p_month[10];
	case 10:dath+=p_month[9];
	case  9:dath+=p_month[8];
	case  8:dath+=p_month[7];
	case  7:dath+=p_month[6];
	case  6:dath+=p_month[5];
	case  5:dath+=p_month[4];
	case  4:dath+=p_month[3];
	case  3:dath+=p_month[2]+leap;
	case  2:dath+=p_month[1];
	case  1:dath+=day;break;
	default:dath=0;
	}
	//printf("this is the %dth day of the year\n",dath);
	return dath;
}


int between_days(Date Day1,Date Day2)
{
	int index;
	int sum_days;
	if(Day1.year>Day2.year||Day1.month>Day2.month||Day1.day>Day2.day)
		swap(Day1,Day2);
	//年份相隔天数,闰年个数能被4整除中删除被100整除的数
	sum_days=0;
	for(index=Day1.year;index<Day2.year;index++)
		//sum_days+=365+IF_LEAP(Day1.year);
		if(IF_LEAP(index))
			sum_days+=366;
		else
			sum_days+=365;
	//
	sum_days=sum_days-dathOfYear(Day1.year,Day1.month,Day1.day)+dathOfYear(Day2.year,Day2.month,Day2.day);
	return sum_days;
}

int workday(Date d)
{
	//2015.5.31周日
	Date base={2015,5,31};
	int flag=0;
	int res_weekday;
	int days_between=between_days(d,base);
	if(d.year>base.year||d.month>base.month||d.day>base.day)
		res_weekday=days_between%7;
	else
		res_weekday=(7-(days_between%7))%7;//再取余一次！

//	printf("%d\n",res_weekday);

	return res_weekday;
}

Date day_afterN(Date D,int N)
{
	Date res_day=D;
	int p_month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	if(N>0)
	{
		//对D求tomorrow
		if(D.day<p_month[IF_LEAP(D.year)][D.month])
			D.day++;//对二月份要特殊处理
		else
		{//进一个月份
			if(D.month!=12)
			{
				D.month++;
				D.day=1;
			}
			else
			{//进入下一年
				D.year++;
				D.month=1;
				D.day=1;
			}
		}
		res_day=day_afterN(D,N-1);
	}
	return res_day;
}


void print_calender(int year,int month)
{
	int p_month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int week[7];
	int firstDay;
	int p_day=1;
	int i;
	Date d={year,month,1};
	for(firstDay=0;firstDay<7;firstDay++)
		printf("%d\t",firstDay);
	printf("\n");

	firstDay=workday(d);
	i=0;
	while(i<firstDay)
	{
		printf(" \t");
		i++;
	}
	while(p_day<=p_month[IF_LEAP(year)][month])
	{
		printf("%d\t",p_day);
		p_day++;
		firstDay=(firstDay+1)%7;
		if(firstDay==0)
			printf("\n");
	}//打印一个月的日历
	printf("\n");
}


//void power_canleder(int year)
//{
//	int p_month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
//	int w_index1,w_index2;
//	int firstDay1,firstDay2;
//	int month;
//	int p_day1,p_day2;
//	Date temp_day={year,1,1};
//	for(month=1;month<12;month+=2)
//	{
//		temp_day.month=month;
//		firstDay1=workday(temp_day);
//		temp_day.month=month+1;
//		firstDay2=workday(temp_day);
//		//打印空格
//		
//		p_day1=1,p_day2=1;
//		while(p_day1<=p_month[IF_LEAP(year)][month])//还要判断2月份！
//		{
//			//打印空格
//			w_index1=0;
//			while(w_index1<firstDay1)
//			{
//				printf("\t");
//				w_index1++;
//			}
//			while(firstDay1<7)
//			{
//				printf("%d\t",p_day1);
//				p_day1++;
//				firstDay1++;
//			}
//			firstDay1=0;
//			printf("\t");
//			w_index2=0;
//			while(w_index2<firstDay2)
//			{
//				printf("\t");
//				w_index2++;
//			}
//			while(firstDay2<7)
//			{
//				printf("%d\t",p_day2);
//				p_day2++;
//				firstDay2++;
//			}
//			firstDay2=0;
//			printf("\t");
//		}
//	}
//}