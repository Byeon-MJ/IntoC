/* example_2_3.h 헤더 파일을 현재 파일에 추가하는 선행처리 부분,
 * 헤더 파일에 stdio.h 파일을 포함시켰으므로 이 파일에서는 추가로 포함하지 않아도
 * stdio.h의 함수인 printf를 사용할 수있음
 */
#include "example_2_3.h"

/* main() 함수
 * C 프로그램의 시작 위치를 나타내는 main 함수 정의
 * void는 함수의 실행 결과 반환되는 결과가 없다는 의미
 */
void main()
{   // main 함수의 시작
   int add_result, sub_result;  // 정수형 변수 add_result, sub_result 선언
   printf("10과 5를 더하면 %d이다. \n", ADD(10, 5));   // ADD 매크로 함수 호출, printf 함수로 결과를 출력
   printf("10과 5를 뺴면 %d이다. \n", SUB(10, 5));    // SUB 매크로 함수 호출, printf 함수로 결과를 출력
}    // main 함수의 끝