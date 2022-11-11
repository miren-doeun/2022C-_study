#include <stdio.h>
#include <string.h>

void exam8(){
	char str[10];
	printf("당신의 이름은 무엇입니까?:");
	scanf("%s", str);
	printf("안녕하세요 %s님\n",str);
}

void exam9(){
	char str1[6]={'H','e','l','l','o', };
	char str2[]="world!";
	int i;
	
	printf("STR1 : %s\n", str1);
	printf("STR2 : %s\n", str2);
	
	printf("STR1의 길이:%d\n", strlen(str1));
	printf("STR2의 길이:%d\n", strlen(str2));
	
	for(i=0; str2[i] !='\0'; i++)
		printf("%c ", str2[i]);
		
	str2[3]='*';
	printf("\nSTR2 : %s\n",str2);
	
	printf("STRLEN:%d	Sizeof:%d\n", strlen(str1), sizeof(str1));
	int a[10];
	
	printf("Sizeof:%d", sizeof(a));
	
}

void exam10(){
	int i;
	char str[] = "good time hello";
	for(i=0;i< strlen(str); i++)
		printf("str[%d]=%c\n",i, str[i]);
		
}

void exam11(){
	char a[] = "Seoul Robotics";
	printf("%s\n",a);
	a[5]='\0';
	printf("%s\n",a);
	
}

void exam12(){
	char voca[50];
	int len=0;
	printf("영단어 입력:");
	scanf("%s", voca);
	while(voca[len]!='\0')
		len++;
	printf("입력한 영단어의 길이는 %d\n", len);
}

void exam13(){
	char str[100];
	int i;
	
	fflush(stdin);
	printf("문자열 입력:");
	//scanf("%s",str);
	gets(str);
	printf("길이:%d\n",strlen(str));
	printf("%s\n", str);
	
	for(i=strlen(str)-1; i>=0; i--)
		printf("%c", str[i]);
	
}

void exam14(){
	int num1[3][2] = {{1,2}, {3,4}, {5,6}};
	int num2[3][2] = {1,2,3,4,5,6};
	int num3[][2] = {1,2,3,4,5,6};
	printf("%d\n",num1);
	printf("%d\n",num2);
	printf("%d\n",num3);
}

void exam15(){
	int a[2][3]={{100,90,80}, {70,60,50}};
	int i,j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}

void exam16(){

}

void exam17(){

}

void exam18(){

}

void exam19(){

}

void exam20(){

}




main(){
	int num;
	while(1){
    	printf("\n문제번호:");
		scanf("%d", &num);
		printf("%d번 문제입니다========================================================================\n", num);
		switch(num){
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
			case 19: exam19(); break;
			case 20: exam20(); break;
            default: return 0 ;
		}
	}
}
