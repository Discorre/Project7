//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//
//// Функция для определения длины симметричного фрагмента
//int findPalindromeLength(char* str, int start, int end) {
//    while (start >= 0 && end < strlen(str) && str[start] == str[end]) {
//        start--;
//        end++;
//    }
//    return end - start - 1;
//}
//
//// Функция для поиска и перемещения симметричных фрагментов
//void processString(char* input, char* output) {
//    int inputLength = strlen(input);
//    int outputIndex = 0;
//
//    while (inputLength > 0) {
//        int maxPalindromeLength = 0;
//        int palindromeCenter = 0;
//
//        // Находим симметричный фрагмент в текущей строке
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
//        // Переносим найденный симметричный фрагмент в выходную строку с разделением
//        for (int i = palindromeCenter - maxPalindromeLength / 2; i <= palindromeCenter + maxPalindromeLength / 2; i++) {
//            output[outputIndex++] = input[i];
//        }
//        if (maxPalindromeLength > 1) {
//            // Добавляем разделитель между симметричными фрагментами в выходную строку
//            output[outputIndex++] = ' ';
//        }
//
//        // Удаляем найденный симметричный фрагмент из входной строки
//        memmove(input + palindromeCenter - maxPalindromeLength / 2, input + palindromeCenter + maxPalindromeLength / 2 + 1, inputLength - palindromeCenter - maxPalindromeLength / 2);
//
//        // Обновляем длину входной строки
//        inputLength -= maxPalindromeLength;
//    }
//
//    // Копируем оставшиеся символы входной строки без разделителя в конец выходной строки
//    strcpy(output + outputIndex, input);
//}
//
//int main() {
//    setlocale(LC_ALL, "RU-ru");
//    char input[] = "I123b321Labao567890g098765vradarekill2llikYou"; // Заданная строка внутри программы
//    char output[200]; // Удвоенная длина для возможных пробелов между фрагментами
//
//    printf("Входная строка: %s\n", input);
//
//    processString(input, output);
//
//    printf("Выходная строка: %s\n", output);
//
//    return 0;
//}
