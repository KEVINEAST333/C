#include<stdio.h>
#include<time.h>
void menu()
{
	printf("*****   play    *****\n");
	printf("*****   1.yes   *****\n");
	printf("*****   0.no    *****\n");

}
void game()
{
	int b = 0;
	int i = 0;
	i = rand() % 100 + 1;
	
	while(1){
	printf("���һ����:>");
	scanf_s("%d", &b);
	
		if (b > i)
		{
			printf("�´���\n");
		}
		else if (b < i)
		{
			printf("��С��\n");
		}
		else
		{
			printf("congratulations�������¶���\n");
			break;
		}
	}
}


int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	
	

	do {
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &a);
		switch (a)
		{

		case 1:
		game();
			break;
		case 0:printf("�˳���Ϸ\n");

			break;
		default:
			printf("�����������������\n");

		}
	} while (a);



	return 0;
}
������Ϸ
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int left = 0;
	int mid = 0;
	int find = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	printf("��������Ҫ�ҵ���:>");
		scanf_s("%d", &find);
	while (left <= right){
		 mid = (left + right) / 2;

		if (find > arr[mid])
		{

			left = mid + 1;
		}
		else if (find < arr[mid])
		{

			right = mid - 1;
		}
		else {
			
		
		
			break;
			}
	} if (left <= right)

		printf("�±�Ϊ%d", mid);
	else
		printf("�Ҳ���");

	return 0;
}