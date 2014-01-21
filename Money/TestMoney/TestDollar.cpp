#include "stdafx.h"
#include "CppUnitTest.h"

#include "Dollar.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestMoney
{		
	TEST_CLASS(TestDollar)
	{
	public:
		
		TEST_METHOD(TestMultiplication)
		{
			Money::Dollar five(5);
			Assert::AreEqual(10, five.times(2).amount());
			Assert::AreEqual(15, five.times(3).amount());
		}

	};
}
