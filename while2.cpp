#include <stdio.h>
	
void func1(){
	printf("1번 함수입니다.\n");
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
	printf("2번 함수입니다.\n");
	int n, count=0, sum=0;
	do{
		printf("숫자를 입력하세요\n");
		scanf("%d",&n);
		if(n<=0)
			continue;
		sum+=n;
		count++;
	}while(count<5);
	printf("합계:%d",sum);
}

	
int main(){
		/*printf("예제 14=============================\n");
		
		int sum=0, n;
		do{
			printf("정수 입력:");
			scanf("%d",&n);
			sum=sum+n;
		}while(n!=0);
		printf("합:%d",sum);
		
		printf("문제 2=============================\n");
		int i,num;
		
		i=1;
		printf("약수를 구할 수 입력:");
		scanf("%d",&num);
		
		while(i<=8){
			if(num%i==0)
				printf("%d ",i);
			i++;
		}
		printf("문제 3=============================\n");
		int i,su,cnt=0;
		printf("숫자 입력:");
		scanf("%d",&su);
		i=1;
		while(i<=su){
			if(su%i==0)
				cnt++;
			i++;
		}
		if(cnt==2)
		printf("%d는 소수",su);
		else
			printf("%d는 소수아니다. ",su) ;*/
		int no;
		while(1){
			
			printf("함수번호:");
			scanf("%d",&no);
			switch(no){
				case 0:
					return 0;
				case 1:
					func1(); break;
				case 2:
					func2(); break;
				default:
					printf("잘못된 함수 번호 입니다.");
			}
		}





















}
