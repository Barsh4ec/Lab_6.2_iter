#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 3;
			int a[] = { 3, 5 };
			int min = a[0];
			int size = 2;
			for (int i = 1; i < size; i++)
				if (a[i] < min && a[i] % 2 != 0)
					min = a[i];
			actual = min;
			Assert::AreEqual(actual, expected);
		}
	};
}
