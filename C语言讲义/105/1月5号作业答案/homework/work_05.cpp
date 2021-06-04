#include"head.h"

int find_Once(int a[],int start,int end)//加上快速跳出****************************************
{
	//快排0（n*logn）时间解决
	int temp=a[start];
	int left=start,middle=start,right=end;//大的放左边，小的放右边
	while(middle<=right)
	{
		if(a[middle]>temp)
		{
			swap(a[left],a[middle]);
			left++;
			middle++;
		}
		else if(a[middle]==temp)
		{
			middle++;
		}
		else 
		{
			swap(a[right],a[middle]);
			right--;
		}
	}
	//找出个数为奇数的那部分
	if(left%2==1)//说明左半部分个数为奇数
		find_Once(a,start,left-1);
	else if((end-right)%2==1)
		find_Once(a,right+1,end);
	else if(right==left)
		return a[right];
	else
		exit(-1);
}


int find_Once_quick(int a[],int n)
{
	//位运算0（n）解决
	int XOR_result=0;
	int index;
	for(index=0;index<n;index++)
		XOR_result=XOR_result^a[index];
	printf("%d\n",XOR_result);

	return XOR_result;
}

void find_doubleOnce(int a[],int start,int end)
{
	//分治
	int temp=a[start];
	int left=start,middle=start,right=end;//大的放左边，小的放右边
	if(start<end)
	{
		while(middle<=right)
		{
			if(a[middle]>temp)
			{
				swap(a[left],a[middle]);
				left++;
				middle++;
			}
			else if(a[middle]==temp)
			{
				middle++;
			}
			else 
			{
				swap(a[right],a[middle]);
				right--;
			}
		}//排序同上

		//
		if(left==right)
		{
			printf("%d\t",a[left]);
			if(left%2==1)
				find_doubleOnce(a,start,left-1);
			else
				find_doubleOnce(a,right+1,end);
		}
		else
		{
			find_doubleOnce(a,start,left-1);//并没有甩掉某边 T^T
			find_doubleOnce(a,right+1,end);
		}
	}
}

void find_doubleOnce(int a[],int n,int &res1,int &res2)
{
	//位运算实现，划分成两部分，每部分一个只出现一次的数
	int XORresult=0;
	int index=0;
	int i,j;
	int bitOne_flag;
	for(index=0;index<n;index++)
	{
		XORresult=XORresult^a[index];
	}

	//找到异或结果中出现1的位
	for(index=0;index<32;index++)
	{
		//最多移动32次找到值为1的bit位
		if(XORresult&1==1)
		{
			bitOne_flag=index;
			break;
		}
		XORresult=XORresult>>1;
	}
	//按照该位是否为1，将数组划分成两部分,前面该位不为1，后面该位为1
	i=0,j=n-1;
	while(i<=j)
	{
		while((((a[i]>>bitOne_flag)&1)==0)&&i<=j)//优先级又出错，注意加括号
			i++;
		if(i>j)
			break;
		while((((a[j]>>bitOne_flag)&1)==1)&&i<=j)
			j--;
		if(i>j)
			break;
		swap(a[i],a[j]);
		i++;
		j--;
	}

	//分别对两部分进行查找唯一一个只出现一次的数
	XORresult=0;
	for(index=0;index<i;index++)
		XORresult=XORresult^a[index];
	res1=XORresult;

	XORresult=0;
	for(index=j+1;index<n;index++)
		XORresult=XORresult^a[index];
	res2=XORresult;
}

void find_threeOnce(int a[],int start,int end)
{
	int temp=a[start];
	int left=start,middle=start,right=end;//大的放左边，小的放右边
	if(start<end)
	{
		while(middle<=right)
		{
			if(a[middle]>temp)
			{
				swap(a[left],a[middle]);
				left++;
				middle++;
			}
			else if(a[middle]==temp)
			{
				middle++;
			}
			else 
			{
				swap(a[right],a[middle]);
				right--;
			}
		}//排序同上
		if(left==right)
		{
			printf("%d\t",a[left]);
		}
		find_threeOnce(a,start,left-1);//并没有甩掉某边 T^T
		find_threeOnce(a,right+1,end);
	}
}