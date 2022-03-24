#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8(zavd_1_iter)/lab.8(zavd_1_iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char A[] = "QSJHJKHKHSQGHJSQ";
			int a = Include(A, "QS");
			
			Assert::IsTrue;
		}
		TEST_METHOD(TestMethod2)
		{
			char A[] = "JHJKHKHGHJ";
			int a = Include(A, "QS");

			Assert::IsFalse;
		}
	};
}
