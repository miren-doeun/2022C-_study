#include <stdio.h>
#include <stdlib.h>
#include <time.h>

exam1(){
	int i, j; 
	for(i=1; i<=5; i++){
		for(j=1;j<=3;j++){
			printf("*");
		}
		printf("\n");
	}
}

exam2(){
	int i,j;
	for(i=1; i<=3; i++){
			for(j=1; j<=5; j++){
				printf("%d", i);
			}
			printf("\n");
		}
} 

exam3(){
	int i, j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
} 

exam4(){
	int i, j, n;
	printf("출력할 행 입력:");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++)
			printf("%d",j);
		printf("\n");
	}
} 

exam5(){
	int i, j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	for(i=4; i>=1; --i){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
} 

exam6(){
	int i, j;
	for(i=1; i<=9; i++){
		//printf("*** %d단 ***\n", i);
		for(j=1; j<=9; j++){
			printf("%d * %d = %d	", j, i, i*j);
		}
		printf("\n"); 
	}
} 

exam7(){
	int i=0;
	while(i<20){
		i++;
		if(i%2) continue;
		
		printf("%d\n",i);
		
	}
} 
//09.30@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
exam8(){
	int n, a;
	
	printf("4자리수 입력:");
	scanf("%d",&n);
	
	do{
		a=n%10;
		printf("%d", a);
		n=n/10;
	}while(n>0);
} 


exam9(){
	int n, a1=0, a2=1, a3, i;
	printf("몇 번째 항까지 구할까요?");
	scanf("%d",&n);
	for(i=0; i<10; i++){
		printf("%d ",a1);
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
} 

exam10(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer=rand()%100+1;
	printf("정답:%d\n", answer);
	do{
		printf("1부터 100까지 숫자를 맞춰보세요>> ");
		scanf("%d",&guess);
		cnt++;
		
		if(guess>answer)
		printf("제시한 숫자가 높습니다.\n");
		else if(answer>guess)
		printf("제시한 숫자가 낮습니다.\n");
	}while(guess!=answer);
	printf("축하합니다! 정답은 %d 이고, 시도횟수=%d\n",answer,cnt);
} 

exam11(){
	int a, b, temp,i;
	printf("***두 수 구간의 숫자 출력하기***\n");
	printf("두 수 입력:");
	scanf("%d %d", &a, &b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}for(i=a; i<=b; i++)
	printf("%d",i);
} 

exam12(){
	int i, j;
	for(i=0; i<=5; i++){
		for(j=0; j<i; j++){
			printf("O");
		}
		printf("*\n");
	}
	i++;
} 

exam13(){
	int i, j;
	for(i=1; i<=9; i++){
		for(j=2; j<=5; j++)
			printf("	%2d * %2d= %2d\t", j, i, j*i);
		printf("\n");
	}
	printf("\n");
	for(i=1; i<=9; i++){
		for(j=6; j<=9; j++)
			printf("	%2d* %2d= %2d\t", j, i, j*i);
		printf("\n");
	}
} 
exam14(){
	int i = 30;
	while(i >= 10)
	{
		printf("%d ", i);
		i -= 2;
	}
}
exam15(){
	int i=1, n, sum=0;
	printf("합을 구할 마지막 수 입력:");
	scanf("%d",&n);
	
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("1부터 %d까지 합은 %d입니다\n",n,sum);
}
exam16(	){
	int i=0, sum=0;
	
	while(1){
		i++;
		if(i>10) break;
		if(i%5==0) continue;
		sum +=i;
	}
	printf("sum=%d\n",sum);
}
exam17(){
	int i,su,cnt=0;
	printf("숫자 입력:");
	scanf("%d",& su);
	
	i=1;
	while(i<=su){
		if(su % i==0)
			cnt++;
		i++;
	}
	if(cnt==2)
		printf("%d은(는) 소수\n", su);
	else
		printf("%d은(는) 소수가 아님\n", su);
}
exam18(){
	int i, j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	for(i=4; i>=1;i--){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
}

main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 0: return 0;
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
		}
	}
}

























