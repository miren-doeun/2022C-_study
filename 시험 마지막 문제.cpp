#include <stdio.h>
main(){
	int money, danwi=1, won, count;
	printf("*입금한 용돈의 화폐숫자 구하기*\n");
	printf("금액을 입력하세요:");
	scanf("%d",&money);
	
	while(1){
		if(money<=0)
			break;
		won=money%10;
		if(won!=0){
		printf("%d원 %d개\n",danwi,won);
		count++;
		}
		money=money/10;
		danwi*=10;
	}
	printf("총 %d 종류의 화폐가 필요하다", count);
}
