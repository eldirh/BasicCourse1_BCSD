//1��
/*#include <stdio.h>
int main()
{

	while(1){
	}
	for(;;){}
}*/
//2��
/*#include<stdio.h>
int main(){
	int i,j;
	printf("����� ���� �����Է�:");
	scanf("%d",&j);
	for(i=0;i<j;i++)
		printf("*");
	return 0;
}*/
//3��
/*#include<stdio.h>
int main(){
	int num,i;
	for(i=0;i<100;i++){
		printf("���� �Է�:");
		scanf("%d",&num);
		if(num%2==0&&num%5==0)
			printf("FizzBuzz\n");
		else if(num%2==0)
			printf("Fizz\n");
		else if(num%5==0)
			printf("Buzz\n");
		else
			continue;
	}
	return 0;
}*/
//4��
/*#include<stdio.h>
int main(){
	int i;
	int max=0;
	int min=0;
	int num[7];
	printf("7���� �� �Է�:");
	for(i=0;i<7;i++)
		scanf("%d",&num[i]);
	for(i=0;i<6;i++){
		if(i==0){
			max=num[i];
			min=num[i];
		}
		else if(num[i]<num[i+1])
			max=num[i+1];
		else if(num[i]>num[i+1])
			min=num[i+1];
	}
	printf("�ִ�:%d, �ּ�:%d",max,min);
	return 0;
}*/
//5��
/*#include<stdio.h>
int main(){
	int i,j;
	int cnt=0;
	int count=0;
	int count2=1;
	printf("���� �Է�:");
	scanf("%d",&j);
	for(i=1;i<=j;i++){
		if(j%i==0){
			printf("%d ",i);
			cnt++;
			count=count+i;
			count2=count2*i;
		}
	}
	printf("\n");
	printf("%d\n",cnt);
	printf("%d\n",count);
	printf("%d\n",count2%10);
	return 0;
}*/
	