#include <iostream>
#include <string>
using namespace std;

void task_7();
void task_8();
void convert_to_int();
void convert_to_char();
bool chek();
int ten();
void task_9();
void task_6();
int digit();
string convert();


bool chek(string s)
{

	string rim[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
	int k= 0, i = 0;

	for (k, i; k < s.length() && i < 13; i++)
	{
		int rl = rim[i].length();
		if (s.substr(k, rl) == rim[i])
		{
			if (rl == 1 && i != 0)
			{
				int cnt = 1;
				while (k++ < s.length() && s.substr(k, rl) == rim[i]) cnt++;
				if (cnt > 3)
				{
					k--;
					break;
				}
			}
			else k += rl;
		}
	}
	if (k < s.length()) {
		return false;
	}
	else {
		return true;
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
	int len = 0, summ = 0;
	string s;

	cout << "Введите римское число: ";
	cin >> s;
	len = size(s);

	if (chek(s)) {
		for (int k = 0; k < len; k++) {
			if (digit(s[k]) >= digit(s[k + 1])) {
				summ += digit(s[k]);
			}
			else if (digit(s[k]) < digit(s[k + 1])) {
				summ -= digit(s[k]);

			}
		}
		cout << summ;
	}
	else cout << "Такого римского числа не существует";
}

void task_7() {
	int m1 = 37, b1 = 3, c1 = 64, m2 = 25173, b2 = 13849, c2 = 65537, i = 0, i1 = 0, i2 = 0; 
	cout << "Введите i = ";
	cin >> i;
	int s = 0;
	cout << "Вариант 1: " << endl;
	for (int k = 1; k <= i; k++) {
		s = (m1 * s + b1) % c1;
		cout << s << endl;
	}
	cout << "Вариант 2: " << endl;
	for (int k = 1; k <= i; k++) {
		s = (m1 * s + b1) % c1;
		cout << s << endl;
	}
}

void task_8() {
	double A[3][4] = { 
	   {5, 2, 0, 10},
	   {3, 5, 2, 5},
	   {20, 0, 0, 0} };

	double B[4][2] = { 
		{1.20, 0.50},
		{2.80, 0.40},
		{5.00, 1.00},
		{2.00, 1.50} };

	double C[3][2];
	
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j] + A[i][3] * B[3][j];
		}
	}
	cout << "Матрица С (A*B): " << endl;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	double maxpr = max(C[0][0], max(C[1][0], C[2][0]));
	double minpr = min(C[0][0], min( C[1][0], C[2][0]));
	for (int i = 0; i < 3; i++) {
		if (maxpr == C[i][0]) {
			cout << "Максимаьная выручка с продажи у продавца " << i+1 << endl;
		}
		if (minpr == C[i][0]) {
			cout << "Минимальная выручка с продажи у продавца " << i+1 << endl;
		}
	}
	double maxcom = max(C[0][1], max(C[1][1], C[2][1]));
	double mincom = min(C[0][1], min(C[1][1], C[2][1]));
	for (int i = 0; i < 3; i++) {
		if (maxcom == C[i][1]) {
			cout << "Максимальные комиссионные у продавца " << i+1 << endl;
		}
		if (mincom == C[i][1]) {
			cout << "Минимальные комиссионные у продавца " << i+1 << endl;
		}
	}
	cout << "Вcего выручки " << C[0][0] + C[1][0] + C[1][0] << endl;
	cout << "Всего комиссионных получили " << C[0][1] + C[1][1] + C[2][1] << endl;
	cout << "Всего денег прошло " << C[0][0] + C[0][1] + C[0][2] - C[0][1] - C[1][1] - C[2][1] << endl;

}

int convert_to_int(char x) {
	switch (x) {
		case '1': 
			return 1;
			break;
		case '2': 
			return 2;
			break;

		case '3': 
			return 3;
			break;

		case '4': 
			return 4;
			break;

		case '5': 
			return 5;
			break;

		case '6':
			return 6;
			break;

		case '7': 
			return 7;
			break;

		case '8': 
			return 8;
			break;

		case '9': 
			return 9;
			break;

		case 'A': 
			return 10;
			break;

		case 'B': 
			return 11;
			break;

		case 'C': 
			return 12;
			break;

		case 'D': 
			return 13;
			break;

		case 'E': 
			return 14;
			break;

		case 'F': 
			return 15;
			break;

	}
	return -1;
}

//int convert_to_char(int x) {
//	switch (x) {
//	case 1:
//		return '1';
//		break;
//	case 2:
//		return '2';
//		break;
//
//	case 3:
//		return '3';
//		break;
//
//	case 4:
//		return '4';
//		break;
//
//	case 5:
//		return '5';
//		break;
//
//	case 6:
//		return '6';
//		break;
//
//	case 7:
//		return '7';
//		break;
//
//	case 8:
//		return '8';
//		break;
//
//	case 9:
//		return '9';
//		break;
//
//	case 10:
//		return 'A';
//		break;
//
//	case 11:
//		return 'B';
//		break;
//
//	case 12:
//		return 'C';
//		break;
//
//	case 13:
//		return 'D';
//		break;
//
//	case 14:
//		return 'E';
//		break;
//
//	case 15:
//		return 'F';
//		break;
//
//		return -1;
//	}
//}

//double ten(string x, int num) {
//	double new_x = 0;
//	for (int i = 0; i < x.size(); i++) {
//		int s = convert_to_int(x[i]);
//		new_x += s * pow(num, x.size() - i - 1);
//	}
//	return new_x;
//
//}

//string new_num(int x, int num) {
//	int a = x % num;
//	string new_x = convert_to_char(a);
//	return new_num(x / num) + new_x;
//
//	new_x = "";
//	return new_x;
//}

void task_9() {
	string x;
	int star = 0, nov = 0;
	cout << "Введите число: " << endl;
	cin >> x;
	cout << "Введите старое и новое основание: " << endl;
	cin >> star >> nov;
	if (star < 2 || nov < 2) {
		cout << "Ошибка" << endl;
	}
	else {
		int new_x = 0;
		for (int i = 0; i < x.size(); i++) {
			int s = convert_to_int(x[i]);
			new_x += s * pow(star, x.size() - i - 1);
		}
		string digits = "0123456789ABCDEF";
		if (new_x == 0) {
			cout << "0";
		}
		string res = "";
		while (new_x > 0) {
			res = digits[new_x % nov] + res;
			new_x /= nov;
		}
		cout << res;
	}
}


int main()
{
	setlocale(0, "");
	task_6();
}