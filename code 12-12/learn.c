#include<stdio.h>
int main()
{
	int i = 1000;
	while (i <= 2000)
	{
		if (i%100 == 0)
		{
			if (i%400 == 0)
			{
				printf("%d\n", i);
			}
			
		}

		else
		{
			if (i % 4 == 0)
			{
				printf("%d\n", i);
			}
		}

		i++;
	}


	return 0;
}





#include<stdio.h>
int main()
{
	int i, a, b, t;
	scanf_s("%d%d", &a, &b);//������a,b
	if (a > b)//�Ƚ�a,b��С�����a>b�򽻻������Ϊa<b
	{ 
		t = a;
		a = b;
		b = t;
	}
	 i = a;
	while ( i >= 2)//�Խ�С��aΪ������ÿ��i��С1ѭ�������Լ��
	{
		if (a % i == 0 && b % i == 0)//���������������ĳ�������Ϊ���Լ��
		{
			printf("���Լ���ǣ�%d\n", i);
			break;//�ѵõ����Լ��������ѭ��
		}
		i--;
	}

	if (i == 1)//��ѭ��������������Լ����i=1
		printf("����ֻ��ͬʱ��1������\n");
	return 0;

}
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
			b = b - 5;
		}
		b= b - 5;
	}
	printf("%d\n", a);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	return 0;
}
#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i<10; i++)
	{
		for (j = i ; j < 10; j++)
		{
			int a = i * j;
			printf("%d*%d=%d\n", i, j, a);
		}

	}

	return 0;
}
//CHENG FA KOU JIAO
#include<stdio.h>
int main()
{
	int i=0 ;
	int j = 0;
	float a = 0;
	float b = 0;
	float c = 0 ;
	for(i=1;i<=100;i+=2)
	{
		a = 1.0 / i + a;
		
	}
	for (j = 2; j <= 100;j+= 2)
	{
		b = b - 1.0 / j;	
	}
	c = a + b;
	printf("%f", c);
	return 0;
}
//1/1-1/2+1/3........1/100
#include <stdio.h>
int main()
{
	float c = -8%10;
	printf("%f", c);
}
#include<stdio.h>
int main()
{
	int i = 0;
	int flog = 0;
	int a = 0;
	int b = 0;


	for (i = 1; i <= 100; i++)
	{
		a = i - 9;
		if (a % 10 == 0)
		{
		b = b+1;
			
		}
		
	}
	printf("%d\n", b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int max = 0;
	int i = 0;
	printf("������ʮ������\n");
		for (i = 0; i < 10; i++)
		{
			scanf_s("%d", &a[i]);

		}
	for (i = 0; i < 10;i++)
	{
		if (a[i] > max)

		{
			max = a[i];
		}

	}
	printf("�����Ϊ%d\n", max);

	return 0;
}
// SHU CHU SHI GE SHU ZHONG ZUI DA DE YI  GE

