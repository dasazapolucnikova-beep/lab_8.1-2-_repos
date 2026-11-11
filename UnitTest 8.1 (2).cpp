#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS

#include "CppUnitTest.h"
#include "../Project 8.1 (2)/Project 8.1 (2).cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// 1. Перевірка підрахунку пар
			char str1[] = "xyaabbccz";
			int count = Count(str1, 0);
			Assert::AreEqual(3, count);

			// 2. Перевірка заміни пар на "***"
			char str2[] = "xyaabbccz";
			char* dest1 = new char[151];
			dest1[0] = '\0';

			char* dest2 = Change(dest1, str2, dest1, 0);

			Assert::AreEqual("xy*********z", dest2);

			delete[] dest1;
		}
	};
}