/* 예제 : Hello 출력하기
   파일 이름 : Hello.c
   수정 일자 : 20  년  월  일
   작성자 :
*/
/* 파일입출력, 콘솔입출력, 문자입출력 등등
 * 다양한 입력 및 출력에 관한 기능이 정의된
 * stdio.h 헤더 파일을 현재 작성하는 소스 파일에
 * 추가하는 선행처리 부분
 */
#include <stdio.h>
/* C 프로그램의 시작 위치를 나타내는 main 함수 정의
 * void는 함수의 실행 결과 반환되는 결과가 없다는 의미
 */
void main()
{   // main 함수의 시작, Braces를 사용
   /* 콘솔에 문자열을 출력하기 위해 stdio.h에 포함된 printf 함수를 사용
    * 문자의 내용은 Double Quotation으로 감싸서 입력한다.
    * \n은 개행문자로 줄바꿈을 의미 */
   printf("Hello~ \n");
}   // main 함수의 끝