#pragma once
class MyClass
{
public:
	MyClass() : a{ 10 } {}
	MyClass(int v) : a{ v } {}

	int getA() const { return a; };

private:
	int a;
};

