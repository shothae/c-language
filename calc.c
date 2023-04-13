
/*
     프로그램 : 간단한 계산기
	 만 든 이 : 채건
	 만든날짜 : 2023.04.06
*/

#include<stdio.h>
#include<stdbool.h>

	
		int menu() {
			int select = 0;
	    printf("############\n");
	    printf("# 1. 덧셈  #\n");
	    printf("# 2. 뺄셈  #\n");
	    printf("# 3. 곱셈  #\n");
	    printf("# 4. 나눗셈#\n");
	    printf("# 5. 종료  #\n");
	    printf("############\n");
		printf("메뉴를 선택 : ");
		scanf("%d", &select);
		return select;
	}
		
	float add() {
		float sum = 0;
		float num1 = 0, num2 = 0;
		printf("첫번째 숫자를 입력 : ");
		scanf("%f", &num1);
		printf("두번째 숫자를 입력 : ");
		scanf("%f", &num2);
	    sum = num1 + num2;
			return sum;
		
	}

	
	
	int main() {
		
		int select = 0;
		while(true) {
			select = menu();
			if (select == 5) {
				break;
				
			} else if (select == 1){
				printf("덧셈 결과 : %f\n", add());
			} else if (select == 2){
				printf("뺄셈\n", add());
			} else if (select == 3){
				printf("곱셈\n");
			} else if (select == 4){
				printf("나눗셈\n");
			} else if (select == 5){
				printf("종료\n");
			}
			
		}
		
		return 0;
	}
	
	
	
