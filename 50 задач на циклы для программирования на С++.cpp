#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// 1. Вывести числа от 1 до 10 
void task1() {
    for (int i = 1;i <= 10;i++) cout << i << " ";
}

// 2. Вывести числа от 10 до 1
void task2() {
    for (int i = 10;i >= 1;i--) cout << i << " ";
}

// 3. Четные числа 2..20
void task3() {
    for (int i = 2;i <= 20;i += 2) cout << i << " ";
}

// 4. Сумма 1..N
void task4() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) sum += i;
    cout << sum;
}

// 5. Факториал 
void task5() {
    int n;
    long long f = 1;
    cin >> n;
    for (int i = 1;i <= n;i++) f *= i;
    cout << f;
}

// 6. Таблица умножения
void task6() {
    int n;
    cin >> n;
    for (int i = 1;i <= 10;i++)
        cout << n << " * " << i << " = " << n * i << endl;
}

// 7. Среднее N чисел 
void task7() {
    int n, x, sum = 0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> x;
        sum += x;
    }
    cout << (double)sum / n;
}

// 8. Количество цифр 
void task8() {
    int n, c = 0;
    cin >> n;
    while (n) {
        c++;
        n /= 10;
    }
    cout << c;
}

// 9. Сумма цифр 
void task9() {
    int n, sum = 0;
    cin >> n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
}

// 10. Обратное число 
void task10() {
    int n;
    cin >> n;
    while (n) {
        cout << n % 10;
        n /= 10;
    }
}

// 11. Делители числа 
void task11() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
        if (n % i == 0) cout << i << " ";
}

// 12. Проверка простого 
void task12() {
    int n;
    bool p = true;
    cin >> n;
    for (int i = 2;i <= sqrt(n);i++)
        if (n % i == 0) p = false;

    cout << (p ? "Prime" : "Not prime");
}

// 13. Все простые до N 
void task13() {
    int n;
    cin >> n;

    for (int i = 2;i <= n;i++) {
        bool p = true;
        for (int j = 2;j <= sqrt(i);j++)
            if (i % j == 0) p = false;

        if (p) cout << i << " ";
    }
}

// 14. Совершенные числа
void task14() {
    int n;
    cin >> n;

    for (int i = 1;i <= n;i++) {
        int sum = 0;

        for (int j = 1;j < i;j++)
            if (i % j == 0) sum += j;

        if (sum == i) cout << i << " ";
    }
}

// 15. Фибоначчи 
void task15() {
    int n, a = 0, b = 1, c;
    cin >> n;

    for (int i = 0;i < n;i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

// 16. НОД 
void task16() {
    int a, b;
    cin >> a >> b;

    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    cout << a;
}

// 17. НОК 
void task17() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    while (y) {
        int t = y;
        y = x % y;
        x = t;
    }

    cout << a * b / x;
}

// 18. A^B 
void task18() {
    int a, b, res = 1;
    cin >> a >> b;

    for (int i = 0;i < b;i++)
        res *= a;

    cout << res;
}

// 19. Факториал с проверкой 
void task19() {
    int n;
    long long f = 1;
    cin >> n;

    for (int i = 1;i <= n;i++) {
        if (f > 1e18) break;
        f *= i;
    }

    cout << f;
}

// 20. Число Армстронга 
void task20() {
    int n, temp, count = 0, sum = 0;
    cin >> n;

    temp = n;

    while (temp) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp) {
        sum += pow(temp % 10, count);
        temp /= 10;
    }

    cout << (sum == n);
}

// 21. Прямоугольник 
void task21() {
    int m, n;
    cin >> m >> n;

    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++)
            cout << "*";
        cout << endl;
    }
}

// 22. Пустой прямоугольник
void task22() {
    int m, n;
    cin >> m >> n;

    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

// 23. Треугольник 
void task23() {
    int n;
    cin >> n;

    for (int i = 1;i <= n;i++) {
        for (int j = 0;j < i;j++)
            cout << "*";
        cout << endl;
    }
}

// 24. Равнобедренный треугольник
void task24() {
    int n;
    cin >> n;

    for (int i = 1;i <= n;i++) {

        for (int s = 0;s < n - i;s++)
            cout << " ";

        for (int j = 0;j < 2 * i - 1;j++)
            cout << "*";

        cout << endl;
    }
}

// 25. Ромб 
void task25() {
    int n;
    cin >> n;

    for (int i = 1;i <= n;i++) {

        for (int s = 0;s < n - i;s++)
            cout << " ";

        for (int j = 0;j < 2 * i - 1;j++)
            cout << "*";

        cout << endl;
    }

    for (int i = n - 1;i >= 1;i--) {

        for (int s = 0;s < n - i;s++)
            cout << " ";

        for (int j = 0;j < 2 * i - 1;j++)
            cout << "*";

        cout << endl;
    }
}

// 26. Пирамида чисел 
void task26() {
    for (int i = 1;i <= 9;i++) {
        for (int j = 0;j < i;j++)
            cout << i;
        cout << endl;
    }
}

// 27. Таблица Пифагора 
void task27() {
    for (int i = 1;i <= 10;i++) {
        for (int j = 1;j <= 10;j++)
            cout << i * j << "\t";
        cout << endl;
    }
}

// 28. Змейка
void task28() {
    int n;
    cin >> n;

    int val = 1;

    for (int i = 0;i < n;i++) {

        if (i % 2 == 0) {
            for (int j = 0;j < n;j++)
                cout << val++ << " ";
        }
        else {
            int start = val + n - 1;
            for (int j = 0;j < n;j++)
                cout << start - j << " ";
            val += n;
        }

        cout << endl;
    }
}

// 29. Игра жизнь (один шаг) 
void task29() {

    int n = 5;
    int a[5][5];

    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            cin >> a[i][j];

    int b[5][5] = { 0 };

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {

            int c = 0;

            for (int dx = -1;dx <= 1;dx++)
                for (int dy = -1;dy <= 1;dy++) {

                    if (dx == 0 && dy == 0) continue;

                    int x = i + dx;
                    int y = j + dy;

                    if (x >= 0 && x < n && y >= 0 && y < n)
                        c += a[x][y];
                }

            if (a[i][j] == 1 && (c == 2 || c == 3)) b[i][j] = 1;
            if (a[i][j] == 0 && c == 3) b[i][j] = 1;
        }
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}

// 30. Треугольник Паскаля 
void task30() {

    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0;i < n;i++) {

        a[i][0] = 1;
        a[i][i] = 1;

        for (int j = 1;j < i;j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j <= i;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

/* 31. Гармонический ряд */
void task31() {
    int n;
    double s = 0;
    cin >> n;

    for (int i = 1;i <= n;i++)
        s += 1.0 / i;

    cout << s;
}

// 32. Знакопеременный ряд 
void task32() {
    int n;
    double s = 0;

    cin >> n;

    for (int i = 1;i <= n;i++)
        s += (i % 2 ? 1 : -1) * (1.0 / i);

    cout << s;
}

// 33. sin(x) ряд 
void task33() {
    double x;
    cin >> x;

    double sum = 0;

    for (int i = 0;i < 10;i++)
        sum += pow(-1, i) * pow(x, 2 * i + 1) / tgamma(2 * i + 2);

    cout << sum;
}

// 34. π ряд 
void task34() {

    int n;
    cin >> n;

    double pi = 0;

    for (int i = 0;i < n;i++)
        pi += pow(-1, i) / (2 * i + 1);

    cout << 4 * pi;
}

// 35. e^x 
void task35() {

    double x;
    cin >> x;

    double sum = 1;
    double f = 1;

    for (int i = 1;i < 15;i++) {
        f *= i;
        sum += pow(x, i) / f;
    }

    cout << sum;
}

// 36. Цепная дробь 
void task36() {
    int n;
    cin >> n;

    double res = 0;

    for (int i = n;i >= 1;i--)
        res = 1.0 / (i + res);

    cout << res;
}

// 37. Золотое сечение 
void task37() {

    int n;
    cin >> n;

    long long a = 1, b = 1, c;

    for (int i = 2;i < n;i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << (double)b / a;
}

// 38. Метод половинного деления 
void task38() {

    double l = 0, r = 2;

    for (int i = 0;i < 50;i++) {

        double m = (l + r) / 2;

        if (m * m - 2 > 0)
            r = m;
        else
            l = m;
    }

    cout << (l + r) / 2;
}

// 39. Метод Ньютона 
void task39() {

    double n;
    cin >> n;

    double x = n;

    for (int i = 0;i < 20;i++)
        x = (x + n / x) / 2;

    cout << x;
}

// 40. Интеграл (метод прямоугольников)
void task40() {

    double a = 0, b = 1;
    int n = 1000;

    double h = (b - a) / n;
    double sum = 0;

    for (int i = 0;i < n;i++) {

        double x = a + i * h;

        sum += x * x;
    }

    cout << sum * h;
}

// 41. Пузырьковая сортировка 
void task41() {

    int a[5] = { 5,4,3,2,1 };

    for (int i = 0;i < 5;i++)
        for (int j = 0;j < 4 - i;j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

// 42. Сортировка вставками 
void task42() {

    int a[5] = { 5,3,4,1,2 };

    for (int i = 1;i < 5;i++) {

        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

//43. Бинарный поиск 
void task43() {

    int a[5] = { 1,3,5,7,9 };

    int x = 7;

    int l = 0, r = 4;

    while (l <= r) {

        int m = (l + r) / 2;

        if (a[m] == x) {
            cout << "Found";
            return;
        }

        if (a[m] < x) l = m + 1;
        else r = m - 1;
    }

    cout << "Not found";
}

// 44. Решето Эратосфена 
void task44() {

    int n;
    cin >> n;

    vector<bool> prime(n + 1, true);

    for (int i = 2;i * i <= n;i++)
        if (prime[i])
            for (int j = i * i;j <= n;j += i)
                prime[j] = false;

    for (int i = 2;i <= n;i++)
        if (prime[i]) cout << i << " ";
}

// 45. Разложение на множители 
void task45() {

    int n;
    cin >> n;

    for (int i = 2;i <= n;i++)
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
}

// 46. Палиндромы диапазона 
bool pal(int x) {
    int r = 0, t = x;

    while (t) {
        r = r * 10 + t % 10;
        t /= 10;
    }

    return r == x;
}

void task46() {

    int a, b;
    cin >> a >> b;

    for (int i = a;i <= b;i++)
        if (pal(i)) cout << i << " ";
}

// 47. Римские цифры 
void task47() {

    int n;
    cin >> n;

    string r[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };

    cout << r[n];
}

// 48. Большие числа 
void task48() {

    string a, b;
    cin >> a >> b;

    int i = a.size() - 1;
    int j = b.size() - 1;

    int carry = 0;

    string res = "";

    while (i >= 0 || j >= 0 || carry) {

        int s = carry;

        if (i >= 0) s += a[i--] - '0';
        if (j >= 0) s += b[j--] - '0';

        res = char(s % 10 + '0') + res;

        carry = s / 10;
    }

    cout << res;
}

// 49. Баланс скобок 
void task49() {

    string s;
    cin >> s;

    int c = 0;

    for (char x : s) {

        if (x == '(') c++;
        if (x == ')') c--;

        if (c < 0) {
            cout << "NO";
            return;
        }
    }

    cout << (c == 0 ? "YES" : "NO");
}

// 50. Генерация комбинаций 
void task50() {

    string chars = "abc";
    int n = 3;

    int total = pow(chars.size(), n);

    for (int i = 0;i < total;i++) {

        int x = i;

        for (int j = 0;j < n;j++) {
            cout << chars[x % chars.size()];
            x /= chars.size();
        }

        cout << endl;
    }
}
