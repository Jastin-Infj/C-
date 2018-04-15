#pragma once
#include <iostream>
#include "A.h"

class A;

class B
{
	A* pointa_;
public:
	B(A* pointa);
	void foo();
	void bar();
};