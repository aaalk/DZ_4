
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>


using namespace std;
double pi = 3.14159265358979323846;

void task_1() {
    ofstream fout;
    fout.open("chisla.txt");
    double l;
    double summ = 0;
    cout << "Введите 10 чисел" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> l;
        fout << l << endl;
    }
    fout.close();
    double str;
    ifstream fin;
    fin.open("chisla.txt");
    while (fin >> str)
    {
        summ += str;
    }
    fin.close();
    cout << "Сумма = " << summ << endl;
}


int task_2(double x) {
    int a = 0;
    if (x < 0) {
        a = -1;
    }
    else if (x == 0) {
        a = 0;
    }
    else {
        a = 1;
    }
    return a;
}



double pr(double a, double b) { 
    return a * b;
}

double tr(double a, double h) { 
    return 0.5 * a * h;
}


double kr(double r) { 
    return pi * pow(r, 2);
}


void task_3() {
    double a = 0, b = 0, h = 0, r = 0, c = 0;
    cout << "Введите стороны прямоугольника: " << endl;
    cin >> a >> b;
    cout << "Введите высоту и сторону треугольника: " << endl;
    cin >> h >> c;
    cout << "Введите радиус круга: " << endl;
    cin >> r;
    if (a > 0 && b > 0 && h > 0 && c > 0 && r > 0) {
        cout << "Площадь прямоугольника = " << pr(a, b) << endl;
        cout << "Площадь треугольника = " << tr(h, c) << endl;
        cout << "Площадь круга = " << kr(r) << endl;
    }
    else {
        cout << "Ошибка";
    }
}


void task_4() {
    for (int c = 1; c <= 4; c++) {
        for (int a = 1; a <= 12; a++) {
            cout << "*";
        }
        for (int b = 1; b <= 30; b++) {
            cout << "_";
        }
        cout << endl;
    }
    for (int d = 1; d <= 9; d++) {
        for (int e = 1; e <= 42; e++) {
            cout << "_";
        }
        cout << endl;
    }
}



int digit(char x) {
    switch (x) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    }
    return -1;
}
void task_6() {
    string num = "";
    int len = 0, summ = 0;
    cout << "Введите римское число: " << endl;
    cin >> num;
    len = size(num);
    for (int i = 0; i < len; i++) {
        if (digit(num[i]) >= digit(num[i + 1])) {
            summ += digit(num[i]);
            }
        else if (digit(num[i]) < digit(num[i + 1])) {
            summ -= digit(num[i]);

        }
    }
    cout << summ;
}
void task_5() {
    int  V = 25;
    int  S = 80;
    char arr[25][80];
    for (int y = 0; y < V; ++y) {
        for (int x = 0; x < S; ++x) {
            int y = (sin((x * 2 * pi) / S) + 1) / 2 * V;
            if ((y >= 0) && (y < V)) {
                arr[y][x] = '*';
            }
        }
        for (y = 0; y < V; ++y) {
            for (int x = 0; x < S; ++x)
                cout << arr[y][x];
            cout << endl;
        }
    }
}

int main()
{
    setlocale(0, "");
    /*cout << "Введите число: " << endl;
    double x = 0;
    cin >> x;
    cout << task_2(x);*/
    task_6();

}
