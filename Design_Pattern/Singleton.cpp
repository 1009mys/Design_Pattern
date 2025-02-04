#include "Singleton.h"

#include <iostream>

using namespace std;

Singleton* Singleton::instance = NULL;

namespace Singleton_pattern
{
	void test()
	{
		cout << "Test Start" << endl;
		// ��ü 2�� ����
		Singleton_Setting& s1 = Singleton_Setting::get_instance();
		cout << s1 << endl;
		Singleton_Setting& s2 = Singleton_Setting::get_instance();
		cout << s2 << endl;
		Singleton_Setting& s3 = Singleton_Setting::get_instance();
		cout << s3 << endl;

		// s1�� ������� volume ����
		cout << "Volume changed" << endl;
		s1.setVolume(15);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;

		// s2�� ������� diff ����
		cout << "Difficulty changed" << endl;
		s1.setDifficulty(Singleton_Setting::Hard);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;

		// s3�� ������� keepInventory ����
		cout << "KeepInventory changed" << endl;
		s1.setKeepInventory(true);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;
	}
}

