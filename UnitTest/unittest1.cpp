#include "stdafx.h"
#include "CppUnitTest.h"
#include "../lib/mylib.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodCreate)
		{
			class mylib::Character *p = new mylib::Dog();

			Assert::AreNotEqual((int)p, (int)nullptr, L"�C���X�^���X���m�ۂł��܂���ł���");

			delete p;
		}

		TEST_METHOD(TestMethodInitialize)
		{
			class mylib::Character *p = new mylib::Dog();

			Assert::AreEqual(p->getName()[0], '\0', L"���O�����������Ă�������.");

			delete p;
		}

		TEST_METHOD(TestMethodPolymorphism)
		{
			class mylib::Character *p = new mylib::Dog();
			Assert::AreEqual(strcmp(p->Shout(), ""), 0, L"���̖������������ė��Ă���͂�");
			delete p;
		}

		TEST_METHOD(TestReinterpretCast)
		{
			float f = 1.0f;
			unsigned int *p = reinterpret_cast<unsigned int*>(&f);
			Assert::AreEqual(*p, (unsigned int)0x0000000, L"1.0�𐮐��ɂ����ۂ̒l������Ă��܂�");
		}

	};
}