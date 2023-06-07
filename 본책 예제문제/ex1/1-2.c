/*곱셈 문제!*/

#include <stdio.h> //헤더파일 시작
#pragma warning(disable:4996) // 경고 메세지 무시

int a, b, c; // 변수 선언 Int a*b=c

/*product 함수 만들기 - 곱하기*/
int product(int x, int y){ // product 함수에 필요한 int 2개 x,y
        return (x * y); // 두개 곱한 값을 출력
}

/*main*/

void main(){ // 함수 시작
    /*a 숫자*/
    printf("Enter a number between 1 and 100 : ");  // 1부터 100 사이 수 입력
    scanf("%d", &a); // 입력 받기 정수(%d),a에 넣기
    /*b 숫자*/
    printf("Enter another number between 1 and 100 : "); // 다른 수 입력
    scanf("%d", &b); // 입력 받기 정수(%d),b에 넣기
    /*a*b하고 결과 나오기*/
    c = product(a, b); // c에 product함수 넣기 product함수는 곱해주는 함수가 될 예정
    printf("%d * %d = %d \n", a, b, c); // 정수 세개에 순서대로 a,b,c, 숫자 넣기
}

