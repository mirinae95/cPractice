/*반지름 입력받아 원의 면적 구하기*/
#include <stdio.h>
#define IN "원의 반지름은 100입니다. \n" // IN = 원의 반지름은 100입니다.
#define PI 3.1415926535  // PI = 3.1415926535
#define AREA(X) (PI*(X)*(X)) // AREA(X) = (PI*(X)*(X)) 
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다. \n") //OUT = 원의 면적을 구하고 프로그램을 종료합니다. 출력하기
void main(){
    printf("%s \n", IN);  // IN에 들어갈 문자열 출력
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(100)); // AREA계산 실수 10자리 소숫점 이하 5자리로 출력(%10.5f)
    OUT;
}