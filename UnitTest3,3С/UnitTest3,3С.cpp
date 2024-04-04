#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3C/Rational.h"
#include "../lab3.3C/Rational.cpp"
#include "../lab3.3C/Object.h"
#include "../lab3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33С
{
	TEST_CLASS(UnitTest33С)
	{
	public:

		TEST_METHOD(TestAddition)
		{
			// Arrange
			Rational r1(1, 2);
			Rational r2(1, 3);

			// Act
			Rational result = r1 + r2;

			// Assert
			Assert::AreEqual(result.GetA(), 5.0); 
			Assert::AreEqual(result.GetB(), 6.0);
		}
	};
}
