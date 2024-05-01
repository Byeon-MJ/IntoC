// /* 이 프로그램은 두 수를 키보드로 입력받아 곱의 결과를 출력하는 프로그램
//    이다.
// */
//
// /* 도입부 */
// # include <stdio.h>
// # pragma warning(disable:4996)
//
// int a, b, c;
// int product(int x, int y);
//
// /* main() 함수 */
// void main() {
//    /* 첫 번째 수를 입력 */
//    printf("Enter a number between 1 and 100 : ");
//    scanf("%d", &a);
//    /* 두 번째 수를 입력 */
//    printf("Enter another number between 1 and 100 : ");
//    scanf("%d", &b);
//    /* 함수 호출에 의해 두 수를 곱하고 결과를 출력 */
//    c = product(a, b);
//    printf("%d * %d = %d \n", a, b, c);
// }
//
// /* 두 수의 곱을 계산하여 돌려주는 사용자 함수 */
// int product(int x, int y) {
//    return (x * y);
// }