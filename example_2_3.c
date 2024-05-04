/* example_2_3.h 헤더 파일을 현재 파일에 추가하는 선행처리 부분,
 * 헤더 파일에 stdio.h 파일을 포함시켰으므로 이 파일에서는 추가로 포함해 줄 필요 없음 */
#include "example_2_3.h"

/* main() 함수
 * C 프로그램의 시작 위치를 나타내는 main 함수 정의
 * void는 함수의 실행 결과 반환되는 결과가 없다는 의미
 */
void main()
{
   int add_result, sub_result;
   printf("10과 5를 더하면 %d이다. \n", ADD(10, 5));
   printf("10과 5를 뺴면 %d이다. \n", SUB(10, 5));
}    // main 함수의 끝