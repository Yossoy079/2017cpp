#include "stdafx.h"
#include "CppUnitTest.h"
#include "../lib/mylib.h"

//ソースを全部非表示にすれば当然エラーも全部消える
/*
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodCreate)
		{
			class mylib::Character *p = new mylib::Dog();

			Assert::AreNotEqual((int)p, (int)nullptr, L"インスタンスを確保できませんでした");

			delete p;
		}

		TEST_METHOD(TestMethodInitialize)
		{
			class mylib::Character *p = new mylib::Dog();

			Assert::AreEqual(p->getName()[0], '\0', L"名前を初期化してください.");

			delete p;
		}

		TEST_METHOD(TestMethodPolymorphism)
		{
			class mylib::Character *p = new mylib::Dog();
			Assert::AreEqual(strcmp(p->Shout(), ""), 0, L"犬の鳴き声がかえって来ているはず");
			delete p;
		}

		TEST_METHOD(TestReinterpretCast)
		{
			float f = 1.0f;
			unsigned int *p = reinterpret_cast<unsigned int*>(&f);
			Assert::AreEqual(*p, (unsigned int)0x0000000, L"1.0を整数にした際の値が違っています");
		}

	};
}
*/
