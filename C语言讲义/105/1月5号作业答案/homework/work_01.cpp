#include"head.h"

void little_to_upper()
{
	char temp;
	while(fflush(stdin),scanf("%c",&temp)==1)
	{
		if(temp>='a'&&temp<='z')
			temp+='A'-'a';
		printf("%c\n",temp);
	}
}