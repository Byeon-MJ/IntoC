// /* ���������, �ܼ������, ��������� ���
// * �پ��� �Է� �� ��¿� ���� ����� ���ǵ�
//  * stdio.h ��� ������ ���� �ۼ��ϴ� �ҽ� ���Ͽ�
//  * �߰��ϴ� ����ó�� �κ�
//  */
// #include <stdio.h>
//
// /* main() �Լ�
//  * C ���α׷��� ���� ��ġ�� ��Ÿ���� main �Լ� ����
//  * void�� �Լ��� ���� ��� ��ȯ�Ǵ� ����� ���ٴ� �ǹ�
//  */
// void main() {
//     //    /* �ֿܼ� ���ڿ��� ����ϱ� ���� stdio.h�� ���Ե� printf �Լ��� ���
//     //     * ������ ������ Double Quotation���� ���μ� �Է��Ѵ�.
//     //     * \n�� ���๮�ڷ� �ٹٲ��� �ǹ� */
//     printf("char �ڷ��� ũ�� : %d byte\n", sizeof(char));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, char �ڷ��� ũ�⸦ ���
//     printf("signed char �ڷ��� ũ�� : %d byte\n", sizeof(signed char));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed char �ڷ��� ũ�⸦ ���
//     printf("unsigned char �ڷ��� ũ�� : %d byte\n", sizeof(unsigned char));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned char �ڷ��� ũ�⸦ ���
//     printf("short �ڷ��� ũ�� : %d byte\n", sizeof(short));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, short �ڷ��� ũ�⸦ ���
//     printf("short int �ڷ��� ũ�� : %d byte\n", sizeof(short int));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, short int �ڷ��� ũ�⸦ ���
//     printf("signed short �ڷ��� ũ�� : %d byte\n", sizeof(signed short));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed short �ڷ��� ũ�⸦ ���
//     printf("signed short int �ڷ��� ũ�� : %d byte\n", sizeof(signed short int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed short int �ڷ��� ũ�⸦ ���
//     printf("unsigned short �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned short �ڷ��� ũ�⸦ ���
//     printf("unsigned short int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned short int �ڷ��� ũ�⸦ ���
//     printf("int �ڷ��� ũ�� : %d byte\n", sizeof(int));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, int �ڷ��� ũ�⸦ ���
//     printf("signed int �ڷ��� ũ�� : %d byte\n", sizeof(signed int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed int �ڷ��� ũ�⸦ ���
//     printf("unsigned �ڷ��� ũ�� : %d byte\n", sizeof(unsigned));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned �ڷ��� ũ�⸦ ���
//     printf("unsigned int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, nsigned int �ڷ��� ũ�⸦ ���
//     printf("long �ڷ��� ũ�� : %d byte\n", sizeof(long));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, long �ڷ��� ũ�⸦ ���
//     printf("long int �ڷ��� ũ�� : %d byte\n", sizeof(long int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, long int �ڷ��� ũ�⸦ ���
//     printf("signed long �ڷ��� ũ�� : %d byte\n", sizeof(signed long));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed long �ڷ��� ũ�⸦ ���
//     printf("signed long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long int));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed long int �ڷ��� ũ�⸦ ���
//     printf("unsigned long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned long �ڷ��� ũ�⸦ ���
//     printf("unsigned long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long int));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned long int �ڷ��� ũ�⸦ ���
//     printf("long long �ڷ��� ũ�� : %d byte\n", sizeof(long long));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, long long �ڷ��� ũ�⸦ ���
//     printf("long long int �ڷ��� ũ�� : %d byte\n", sizeof(long long int));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, long long int �ڷ��� ũ�⸦ ���
//     printf("signed long long �ڷ��� ũ�� : %d byte\n", sizeof(signed long long));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed long long �ڷ��� ũ�⸦ ���
//     printf("signed long long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long long int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, signed long long int �ڷ��� ũ�⸦ ���
//     printf("unsigned long long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned long long �ڷ��� ũ�⸦ ���
//     printf("unsigned long long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long int));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, unsigned long long int �ڷ��� ũ�⸦ ���
//     printf("float �ڷ��� ũ�� : %d byte\n", sizeof(float));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, float �ڷ��� ũ�⸦ ���
//     printf("double �ڷ��� ũ�� : %d byte\n", sizeof(double));    // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, double �ڷ��� ũ�⸦ ���
//     printf("long double �ڷ��� ũ�� : %d byte\n", sizeof(long double));  // byte ������ �ڷ��� ũ�⸦ ���ϴ� sizeof �Լ�, long double �ڷ��� ũ�⸦ ���
//                                                                              //long double �ڷ����� Compiler�� ���� ũ�Ⱑ �ٸ���.
// }   // main �Լ��� ��