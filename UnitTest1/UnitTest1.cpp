#include "pch.h"
#include "CppUnitTest.h"
#include "../3.1/Time.h"
#include "../3.1/Time.cpp"
#include "../3.1/Triad.h"
#include "../3.1/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Time a(1, 2, 3);
			a++;
			int b = a.getF();
			Assert::AreEqual(b, 2);
		}
	};
}