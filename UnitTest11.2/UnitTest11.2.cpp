#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest112
{
	TEST_CLASS(UnitTest112)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool m;
			char fname[] = "1.dat";
				m = Number(fname);
			Assert::AreEqual(m, false);
		}
	};
}
