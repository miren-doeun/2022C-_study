#include <stdio.h>
	
void func1(){
	printf("1�� �Լ��Դϴ�.\n");
	int i=0, sum=0;
	
	while(1){
			i++;
			if(i>10) 
				break;
			if(i%5==0)
				continue;
			sum= sum+i;
	}
	printf("SUM=%d\n",sum);
}
void func2(){
	printf("2�� �Լ��Դϴ�.\n");
	int n, count=0, sum=0;
	do{
		printf("���ڸ� �Է��ϼ���\n");
		scanf("%d",&n);
		if(n<=0)
			continue;
		sum+=n;
		count++;
	}while(count<5);
	printf("�հ�:%d",sum);
}

	
int main(){
		/*printf("���� 14=============================\n");
		
		int sum=0, n;
		do{
			printf("���� �Է�:");
			scanf("%d",&n);
			sum=sum+n;
		}while(n!=0);
		printf("��:%d",sum);
		
		printf("���� 2=============================\n");
		int i,num;
		
		i=1;
		printf("����� ���� �� �Է�:");
		scanf("%d",&num);
		
		while(i<=8){
			if(num%i==0)
				printf("%d ",i);
			i++;
		}
		printf("���� 3=============================\n");
		int i,su,cnt=0;
		printf("���� �Է�:");
		scanf("%d",&su);
		i=1;
		while(i<=su){
			if(su%i==0)
				cnt++;
			i++;
		}
		if(cnt==2)
		printf("%d�� �Ҽ�",su);
		else
			printf("%d�� �Ҽ��ƴϴ�. ",su) ;*/
		int no;
		while(1){
			
			printf("�Լ���ȣ:");
			scanf("%d",&no);
			switch(no){
				case 0:
					return 0;
				case 1:
					func1(); break;
				case 2:
					func2(); break;
				default:
					printf("�߸��� �Լ� ��ȣ �Դϴ�.");
			}
		}





















}
