#include<stdio.h>
leepyear(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	{
		printf("%d\n", x);
		
	}
 }
int main()
{
	
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		leepyear(i);
	}
	return 0;
}
����ʵ���ж�����
prime(int x)
{
	int flag = 0;
	int j ;
	for (j = 2; j <= x - 1; j++)
	{
		if (x % j == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("%d\n", x);
	}
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		prime(i);
	}
	
}
ö�ٺ���ʵ�����1��200��������
fib(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else {
		return   fib(x - 1) + fib(x - 2);
	}

}
int main()
{
	int a = 0;
	int t = 0;
	printf("������һ����>:");
		scanf_s("%d", &a);
		t = fib(a);
		printf("%d", t);
}
�ݹ���쳲�������
int main()
{
	int x = 1;
	int y = 1;
	int z = 1;
	int n = 0;
		printf("������һ����>:");
		scanf_s("%d", &n);
	while (n > 2)
	{
		n = n - 1;
		x = y;
		y = z;
		z = x + y;

	}
	printf("%d", z);

	return 0;
}
��ʹ�õݹ���쳲�����
float f(float x)
{
	if (x == 0)
	{
		return 1.0;
    }

	else if (x == 1)
	{
	return 3;
	}
	else if(x>0)
	{
	return 3 * f(x - 1);
	}
	else if(x<0)
	{
	
	
	return (1.0/3.0)*f(x+1);
	}
}
int main()
{
	
	float n = 3.0;
	
	float k =-2.0;
	float t = 0.0;
	t  =  f(k);
	printf("%f", t);
	return 0;
}
Dightsum(int n)
{
	if (n < 9)
	{
		return n;
	}
	else {
		return(n % 10) + Dightsum(n / 10);
	}
}
	
int main()
{
	int a=0;
	int t=0;
	printf(" ������һ������\n");
 scanf_s("%d",&a);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	
	t=Dightsum(a);
	printf("%d", t);

	return 0;
}
һ���������


#include <string.h>

int main()
{
	char a[] = "abc";
	int  t;
	t = strlen(a);
	printf(" %d ", t);
}

int strens( char*a) 
{
	if (*a == '\0')
	{
		return 0;
	}
	return 1 + strens(a+1);


}
int main()
{
	char a[] = "abc";
	int t = 0;
	t = strens(a);
	printf("%d", t);
	return 0;
}

int Jiecheng(int *x)
{
	
	int i = *x;
	for (i = *x-1; i >0;i--)
	{
		*x = *x * i;
	}

	return *x;
}
int main()
{
	int t = 0;
	int n = 0;
	printf("������N\n");
	scanf_s("%d", &n);
	t= Jiecheng(&n);
	printf("%d\n", t);
	return 0;
}//  �׳�

	int Jiecheng(int x)
	{

		int i = x;
		if (i == 0)
		{
			return 1;

		
		}
		else
		{
			
			return x * Jiecheng(i- 1);
		}
	}
	int main()
	{
		int t = 0;
		int n = 0;
		printf("������N\n");
		scanf_s("%d", &n);
		t = Jiecheng(n);
		printf("%d\n", t);
		return 0;
	}
	�ݹ���׳ˣ�
	int DY(int n)
	{
		if (n > 10)
		{
			DY(n / 10);
		}
		printf("%d ", n % 10);
	}
	int main()
	{
		int n = 12345;
		DY(n);

		return 0;
	}

#include <stdio.h>
#include <assert.h>
	void reverse_string(char const * string)
	{    assert( string != NULL );
	if( *string != '\0' )   
	{        string++;        reverse_string( string );     
	printf("%c",*(string-1));   
	}
	}
	int main()
	{    char *string="abcdef"; 
	printf("ԭ�ַ���Ϊ��  %s\n�������к�Ϊ��",string); 
	reverse_string( string );   
	printf("\n");   
	return 0;
	}
	