#include "Singleton.h"

#include <iostream>

using namespace std;

Singleton* Singleton::instance = NULL;

namespace Singleton_pattern
{
	void test()
	{
		cout << "Test Start" << endl;
		// 객체 2개 생성
		Singleton_Setting& s1 = Singleton_Setting::get_instance();
		cout << s1 << endl;
		Singleton_Setting& s2 = Singleton_Setting::get_instance();
		cout << s2 << endl;
		Singleton_Setting& s3 = Singleton_Setting::get_instance();
		cout << s3 << endl;

		// s1의 멤버변수 volume 변경
		cout << "Volume changed" << endl;
		s1.setVolume(15);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;

		// s2의 멤버변수 diff 변경
		cout << "Difficulty changed" << endl;
		s1.setDifficulty(Singleton_Setting::Hard);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;

		// s3의 멤버변수 keepInventory 변경
		cout << "KeepInventory changed" << endl;
		s1.setKeepInventory(true);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;
	}
}

