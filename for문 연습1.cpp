#include <stdio.h>
exam1(){
	int i;
	for(i=1; i<=6; i++)
		printf("i=%d\n",i);
}
exam2(){
	int i,sum=0;
	for(i=1; i<=10; i++){
	sum=i+sum;
	}
	printf("1~10���� ��:%d\n",sum);
}
exam3(){
	int i, even, odd;
	even=odd=0;
	for(i=1; i<=100; i++){
		if(i%2==0)
			even=i+even;
		else
			odd=i+even;
	}
	printf("¦���� ��:%d Ȧ���� ��:%d\n", even, odd);
}
exam4(){
	int i;
	for(i=1; i<10; i++)
		printf("2*%d=%2d\n",i,2*i);
}
exam5(){
	 int i, count=0,sum=0; 
}
exam6(){
	
}
main(){
	int no;
	while(1){
		printf("�Լ� ��ȣ:");
		scanf("%d",&no);
		printf("\n===========%d �� ����=============\n",no);
		switch(no){
			case 0: return 0;
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			default: printf("�������� �ʴ� �Լ� �Դϴ�.\n");
		}
	}
}
