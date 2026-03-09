
#include <iostream>
#include <cmath>
using namespace std;

// 1. Приветствие
void printHello() {
    cout << "Hello, World!" << endl;
}

// 2. Сумма двух чисел
int sum(int a, int b) {
    return a + b;
}

// 3. Максимум из двух
int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

// 4. Проверка на четность
bool isEven(int number) {
    return number % 2 == 0;
}

// 5. Квадрат числа
double square(double x) {
    return x * x;
}

// 6. Сумма элементов массива
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// 7. Максимум в массиве
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// 8. Подсчет символов в строке
int charCount(const char* str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    return count;
}

// 9. Факториал (итеративно)
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// 10. Проверка простого числа
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// 11. Перегрузка abs
int abs(int x) {
    return (x < 0) ? -x : x;
}

double abs(double x) {
    return (x < 0) ? -x : x;
}

// 12. Перегрузка print
void print(int x) {
    cout << x << endl;
}

void print(double x) {
    cout << x << endl;
}

void print(const char* str) {
    cout << str << endl;
}

// 13. Среднее арифметическое
double avg(int a, int b) {
    return (a + b) / 2.0;
}

double avg(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

double avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (double)sum / size;
}

// 14. Swap
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 15. Минимум и максимум массива
void findMinMax(int arr[], int size, int& min, int& max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }
}

// 16. Решение квадратного уравнения
bool solveQuadratic(double a, double b, double c, double& x1, double& x2) {
    double D = b * b - 4 * a * c;

    if (D < 0)
        return false;

    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);

    return true;
}

// 17. Факториал (рекурсивно)
long long factorialRec(int n) {
    if (n <= 1)
        return 1;

    return n * factorialRec(n - 1);
}

// 18. Фибоначчи
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 19. Быстрое возведение в степень
double power(double base, int exp) {

    if (exp == 0)
        return 1;

    if (exp % 2 == 0)
        return power(base * base, exp / 2);
    else
        return base * power(base, exp - 1);
}

// 20. Сумма цифр числа
int sumOfDigits(int n) {

    if (n == 0)
        return 0;

    return n % 10 + sumOfDigits(n / 10);
}

// 21. Шифр Цезаря
void caesarCipher(char str[], int shift) {

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 'a' + shift) % 26 + 'a';

        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (str[i] - 'A' + shift) % 26 + 'A';
    }
}

// 22. Транспонирование матрицы
void transpose(int matrix[][3], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

// 23. Слияние отсортированных массивов
void mergeSortedArrays(int arr1[], int size1,
    int arr2[], int size2,
    int result[]) {

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {

        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    while (i < size1)
        result[k++] = arr1[i++];

    while (j < size2)
        result[k++] = arr2[j++];
}

// 24. Функции для указателя
int increment(int x) {
    return x + 1;
}

int squareFunc(int x) {
    return x * x;
}

int negate(int x) {
    return -x;
}

void processArray(int arr[], int size, int (*func)(int)) {

    for (int i = 0; i < size; i++)
        cout << func(arr[i]) << " ";

    cout << endl;
}

// 25. Реализация стека
const int MAX = 100;
int stackArr[MAX];
int top = -1;

void push(int value) {
    stackArr[++top] = value;
}

int pop() {
    return stackArr[top--];
}

bool isEmpty() {
    return top == -1;
}

int main() {
    printHello();
    return 0;

}
