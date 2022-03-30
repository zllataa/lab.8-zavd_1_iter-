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
			int s1 = Include("VV+SQ+VV");
			Assert::IsTrue;
		}

		TEST_METHOD(TestMethod2)
		{
			int s2 = Include("VV+QS+VV");
			Assert::IsTrue;
		}

		TEST_METHOD(TestMethod3)
		{
			int s3 = Include("-Q+S-");
			Assert::IsFalse;
		}

		TEST_METHOD(TestMethod4)
		{
			int s4 = Include("_S_Q_");
			Assert::IsFalse;
		}
	};
}
