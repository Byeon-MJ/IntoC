// /* 파일입출력, 콘솔입출력, 문자입출력 등등
// * 다양한 입력 및 출력에 관한 기능이 정의된
//  * stdio.h 헤더 파일을 현재 작성하는 소스 파일에
//  * 추가하는 선행처리 부분
//  */
// #include <stdio.h>
//
// /* main() 함수
//  * C 프로그램의 시작 위치를 나타내는 main 함수 정의
//  * void는 함수의 실행 결과 반환되는 결과가 없다는 의미
//  */
// void main() {
//     //    /* 콘솔에 문자열을 출력하기 위해 stdio.h에 포함된 printf 함수를 사용
//     //     * 문자의 내용은 Double Quotation으로 감싸서 입력한다.
//     //     * \n은 개행문자로 줄바꿈을 의미 */
//     printf("char 자료형 크기 : %d byte\n", sizeof(char));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, char 자료형 크기를 출력
//     printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed char 자료형 크기를 출력
//     printf("unsigned char 자료형 크기 : %d byte\n", sizeof(unsigned char));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned char 자료형 크기를 출력
//     printf("short 자료형 크기 : %d byte\n", sizeof(short));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, short 자료형 크기를 출력
//     printf("short int 자료형 크기 : %d byte\n", sizeof(short int));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, short int 자료형 크기를 출력
//     printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed short 자료형 크기를 출력
//     printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed short int 자료형 크기를 출력
//     printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned short 자료형 크기를 출력
//     printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned short int 자료형 크기를 출력
//     printf("int 자료형 크기 : %d byte\n", sizeof(int));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, int 자료형 크기를 출력
//     printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed int 자료형 크기를 출력
//     printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned 자료형 크기를 출력
//     printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, nsigned int 자료형 크기를 출력
//     printf("long 자료형 크기 : %d byte\n", sizeof(long));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, long 자료형 크기를 출력
//     printf("long int 자료형 크기 : %d byte\n", sizeof(long int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, long int 자료형 크기를 출력
//     printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed long 자료형 크기를 출력
//     printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed long int 자료형 크기를 출력
//     printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned long 자료형 크기를 출력
//     printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned long int 자료형 크기를 출력
//     printf("long long 자료형 크기 : %d byte\n", sizeof(long long));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, long long 자료형 크기를 출력
//     printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, long long int 자료형 크기를 출력
//     printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed long long 자료형 크기를 출력
//     printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, signed long long int 자료형 크기를 출력
//     printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned long long 자료형 크기를 출력
//     printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, unsigned long long int 자료형 크기를 출력
//     printf("float 자료형 크기 : %d byte\n", sizeof(float));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, float 자료형 크기를 출력
//     printf("double 자료형 크기 : %d byte\n", sizeof(double));    // byte 단위의 자료형 크기를 구하는 sizeof 함수, double 자료형 크기를 출력
//     printf("long double 자료형 크기 : %d byte\n", sizeof(long double));  // byte 단위의 자료형 크기를 구하는 sizeof 함수, long double 자료형 크기를 출력
//                                                                              //long double 자료형은 Compiler에 따라 크기가 다르다.
// }   // main 함수의 끝