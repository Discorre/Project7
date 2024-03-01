//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//
//// ������� ��� ����������� ����� ������������� ���������
//int findPalindromeLength(char* str, int start, int end) {
//    while (start >= 0 && end < strlen(str) && str[start] == str[end]) {
//        start--;
//        end++;
//    }
//    return end - start - 1;
//}
//
//// ������� ��� ������ � ����������� ������������ ����������
//void processString(char* input, char* output) {
//    int inputLength = strlen(input);
//    int outputIndex = 0;
//
//    while (inputLength > 0) {
//        int maxPalindromeLength = 0;
//        int palindromeCenter = 0;
//
//        // ������� ������������ �������� � ������� ������
//        for (int i = 0; i < inputLength; i++) {
//            int currentPalindromeLength = findPalindromeLength(input, i, i);
//            if (currentPalindromeLength > maxPalindromeLength) {
//                maxPalindromeLength = currentPalindromeLength;
//                palindromeCenter = i;
//            }
//
//            currentPalindromeLength = findPalindromeLength(input, i, i + 1);
//            if (currentPalindromeLength > maxPalindromeLength) {
//                maxPalindromeLength = currentPalindromeLength;
//                palindromeCenter = i;
//            }
//        }
//
//        // ��������� ��������� ������������ �������� � �������� ������ � �����������
//        for (int i = palindromeCenter - maxPalindromeLength / 2; i <= palindromeCenter + maxPalindromeLength / 2; i++) {
//            output[outputIndex++] = input[i];
//        }
//        if (maxPalindromeLength > 1) {
//            // ��������� ����������� ����� ������������� ����������� � �������� ������
//            output[outputIndex++] = ' ';
//        }
//
//        // ������� ��������� ������������ �������� �� ������� ������
//        memmove(input + palindromeCenter - maxPalindromeLength / 2, input + palindromeCenter + maxPalindromeLength / 2 + 1, inputLength - palindromeCenter - maxPalindromeLength / 2);
//
//        // ��������� ����� ������� ������
//        inputLength -= maxPalindromeLength;
//    }
//
//    // �������� ���������� ������� ������� ������ ��� ����������� � ����� �������� ������
//    strcpy(output + outputIndex, input);
//}
//
//int main() {
//    setlocale(LC_ALL, "RU-ru");
//    char input[] = "I123b321Labao567890g098765vradarekill2llikYou"; // �������� ������ ������ ���������
//    char output[200]; // ��������� ����� ��� ��������� �������� ����� �����������
//
//    printf("������� ������: %s\n", input);
//
//    processString(input, output);
//
//    printf("�������� ������: %s\n", output);
//
//    return 0;
//}
