#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto tmp = h(0,1);
			Assert::AreEqual(0., tmp);  //  expected = 1
		}
	};
}
