// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _UNICODE

#include <Windows.h>
#include <iostream>
#include <cstdarg>
#include <fstream>
#include <tchar.h>

using namespace std;

int main()
{
	LPCTSTR str = _T("C:\\Boo\\ПапкаÂ\\док.txt");
	auto filename = _T("C:\\Boo\\ПапкаÂ\\док.txt");
	fstream file{ str, std::fstream::in | std::fstream::out | std::fstream::app };
	if (!file) {
		cout << "Couldn't open file" << endl;
		return -1;
	}
	wchar_t message[] = _T("Hello, world!");
	cout << message << endl;
	file << message << endl;

}