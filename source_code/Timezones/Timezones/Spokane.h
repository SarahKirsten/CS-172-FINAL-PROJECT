#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;

struct Base
{
	int a, b, c;
};

struct Derived : Base
{
	int b;
};

struct Derived2 : Derived
{
	int c;
};