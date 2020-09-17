#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, S,P;
    cout << "\t\t\t___________ПЕРВОЕ ЗАДАНИЕ:___________" << endl;
    cout << "Введите первую сторону прямоугольника:" << endl;
    cin >> a;
    cout << "Введите вторую сторону прямоугольника" << endl;
    cin >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "Площадь прямоугольника равна:" <<S<< endl;
    cout << "Периметр прямоугольника равна:" << P << endl;

    cout << "\t\t\t___________ВТОРОЕ ЗАДАНИЕ:___________" << endl;
    int d;
    double L;
    cout << "Введите диаметр:" << endl;
    cin >> d;
    L = 3.14 * d;
    cout << "Длина окружности равна:" << L << endl;
   
    cout << "\t\t\t___________ТРЕТЬЕ ЗАДАНИЕ:___________" << endl;
    double x,y,Middle;
    cin >> x;
    cout << "Введите второе число:" << endl;
    cin >> y;
    Middle = (x+y) / 2;
    cout << "Среднее значение равно:" << Middle << endl;
   
    cout << "\t\t\t___________ЧЕТВЕРТОЕ ЗАДАНИЕ:___________" << endl;
    int summ,minus,res1;
    double res2, first, second;
    cout << "Введите первое число:" << endl;
    cin >> first;
    cout << "Введите второе число:" << endl;
    cin >> second;
    summ = (first * first) + (second * second);
    minus = (first * first) - (second * second);
    res1 = (first * first) * (second * second);
    res2 = (first * first) / (second * second);
    cout << "Сумма квадратов чисел равна:" << summ << endl;
    cout << "Разность квадратов чисел равна:" << minus << endl;
    cout << "Произведение квадратов чисел равно:" << res1 << endl;
    cout << "Частное квадратов чисел равно:" << res2 << endl;

    cout << "\t\t\t___________ПЯТОЕ ЗАДАНИЕ:___________" << endl;
    int summ1, minus1, ress;
    double ress2, first1, second2;
    cout << "Введите первое число:" << endl;
    cin >> first1;
    cout << "Введите второе число:" << endl;
    cin >> second2;
    summ = abs(first1) + abs(second2);
    minus = abs(first1) - abs(second2);
    res1 = abs(first1) * abs(second2);
    res2 = abs(first1) / abs(second2);
    cout << "Сумма модулей чисел равна:" << summ << endl;
    cout << "Разность модулей чисел равна:" << minus << endl;
    cout << "Произведение модулей чисел равно:" << res1 << endl;
    cout << "Частное модулей квадратов равно:" << res2 << endl;
}


