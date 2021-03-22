#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab1.5\Lab1.5\Car.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab1.5\Lab1.5\Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			c.Init("BMW", 4, 230);
			int power = c.getPower();
			Assert::AreEqual(power, 230);
		}
	};
}
