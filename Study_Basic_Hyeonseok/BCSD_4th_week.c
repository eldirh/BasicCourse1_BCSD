//#include <stdio.h>
//
//void kkk(int bak, int num);
//
//int main(void)
//{
//	int num;
//	printf("1~100������ ���ڸ� �Է��Ͻÿ�. : ");
//	scanf("%d",&num);
//	kkk(100,num);
//
//	return 0;
//}
//
//void kkk(int bak, int num)
//{
//	if(num >= bak)
//	{
//		printf("%d~%d���̳�\n",bak,bak+10);
//	}
//	else
//	{
//		return (kkk(bak-10, num));
//	}
//}

//#include <stdio.h>			// 1�� ����
//int main(void)
//{
//	int a=0, b=0;
//
//	scanf("%d %d",&a,&b);
//	if (a == b)
//	{
//		printf("=");
//	}
//	else if (a > b)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//
//	return 0;
//}

//#include <stdio.h>			// 2�� ����
//
//int main(void)
//{
//	int input = 0;
//
//	puts("�Ͽ��� >> 1");
//	puts("������ >> 2");
//	puts("ȭ���� >> 3");
//	puts("������ >> 4");
//	puts("����� >> 5");
//	puts("�ݿ��� >> 6");
//	puts("����� >> 7");
//	
//	scanf_s("%d",&input);
//
//	switch (input) 
//	{
//	case 2 : case 4 : case 6 :
//		printf("enjoy\n"); break;
//	default :
//		printf("Oops\n"); break;
//	}
//
//	return 0;
//}

//#include <stdio.h>				// 3�� ����
//
//int main(void)
//{
//	int input=0;
//
//	puts("���� �Է�");
//	scanf("%d",&input);
//
//	((input%4 == 0 && input%100 != 0) || (input%400 == 0)) ? 
//		puts("YES") : puts("NO") ;
//
//	return 0;
//}
//
//#include <stdio.h>			// 4�� ����
//
//int main(void)
//{
//	int input1=0, input2=0;
//
//	scanf_s("%d %d",&input1,&input2);
//
//	if(input2%input1 == 0)
//	{
//		printf("%d | %d",input1,input2);
//	}
//	else
//	{
//		printf("%d !| %d",input1,input2);
//	}
//
//	return 0;
//}



