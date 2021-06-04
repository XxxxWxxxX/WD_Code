#include"head.h"

int find_Once(int a[],int start,int end)//���Ͽ�������****************************************
{
	//����0��n*logn��ʱ����
	int temp=a[start];
	int left=start,middle=start,right=end;//��ķ���ߣ�С�ķ��ұ�
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
	//�ҳ�����Ϊ�������ǲ���
	if(left%2==1)//˵����벿�ָ���Ϊ����
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
	//λ����0��n�����
	int XOR_result=0;
	int index;
	for(index=0;index<n;index++)
		XOR_result=XOR_result^a[index];
	printf("%d\n",XOR_result);

	return XOR_result;
}

void find_doubleOnce(int a[],int start,int end)
{
	//����
	int temp=a[start];
	int left=start,middle=start,right=end;//��ķ���ߣ�С�ķ��ұ�
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
		}//����ͬ��

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
			find_doubleOnce(a,start,left-1);//��û��˦��ĳ�� T^T
			find_doubleOnce(a,right+1,end);
		}
	}
}

void find_doubleOnce(int a[],int n,int &res1,int &res2)
{
	//λ����ʵ�֣����ֳ������֣�ÿ����һ��ֻ����һ�ε���
	int XORresult=0;
	int index=0;
	int i,j;
	int bitOne_flag;
	for(index=0;index<n;index++)
	{
		XORresult=XORresult^a[index];
	}

	//�ҵ�������г���1��λ
	for(index=0;index<32;index++)
	{
		//����ƶ�32���ҵ�ֵΪ1��bitλ
		if(XORresult&1==1)
		{
			bitOne_flag=index;
			break;
		}
		XORresult=XORresult>>1;
	}
	//���ո�λ�Ƿ�Ϊ1�������黮�ֳ�������,ǰ���λ��Ϊ1�������λΪ1
	i=0,j=n-1;
	while(i<=j)
	{
		while((((a[i]>>bitOne_flag)&1)==0)&&i<=j)//���ȼ��ֳ���ע�������
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

	//�ֱ�������ֽ��в���Ψһһ��ֻ����һ�ε���
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
	int left=start,middle=start,right=end;//��ķ���ߣ�С�ķ��ұ�
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
		}//����ͬ��
		if(left==right)
		{
			printf("%d\t",a[left]);
		}
		find_threeOnce(a,start,left-1);//��û��˦��ĳ�� T^T
		find_threeOnce(a,right+1,end);
	}
}