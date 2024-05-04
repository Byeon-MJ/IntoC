// /* 파일입출력, 콘솔입출력, 문자입출력 등등
// * 다양한 입력 및 출력에 관한 기능이 정의된
//  * stdio.h 헤더 파일을 현재 작성하는 소스 파일에
//  * 추가하는 선행처리 부분
//  */
// #include <stdio.h>
//
// /* 일부 함수의 경우 안전하지 않거나 더이상 사용되지 않는 경우
//  * 경고 메시지를 발생시킨다. 특히, scanf 함수
//  * 런타임 에러를 발생시키기도 한다.
//  * 해당 경고를 무시할 수 있도록 하는 선행처리
//  */
// #pragma warning(disable:4996)
//
// /* main() 함수
//  * C 프로그램의 시작 위치를 나타내는 main 함수 정의
//  * void는 함수의 실행 결과 반환되는 결과가 없다는 의미
//  */
// void main()
// {
//     int in_money, coin_500, coin_100, coin_50, coin_10;
//     printf(" 동전으로 교환할 금액은? ");
//     scanf("%d", &in_money);
//     coin_500 = in_money / 500;
//     in_money = in_money % 500;
//     coin_100 = in_money / 100;
//     in_money = in_money % 100;
//     coin_50 = in_money / 50;
//     in_money = in_money % 50;
//     coin_10 = in_money / 10;
//     in_money = in_money % 10;
//     printf("\n 오백 원짜리 ==> %d 개 \n", coin_500);
//     printf("\n 백 원짜리 ==> %d 개 \n", coin_100);
//     printf("\n 오십 원짜리 ==> %d 개 \n", coin_50);
//     printf("\n 십 원짜리 ==> %d 개 \n", coin_10);
//     printf("\n 바꾸지 못한 잔돈 ==> %d 원 \n", in_money);
// }    // main 함수의 끝