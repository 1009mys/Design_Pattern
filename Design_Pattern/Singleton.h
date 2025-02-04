#pragma once

#include <iostream>

// Singleton class
class Singleton
{
private:
	// ��ü�� ���� �� �ϳ��� ������
	static Singleton* instance;
	// �̱��� ���Ͽ��� �����ڴ� �ݵ�� private���� �����Ѵ�. 
	// private���� ���� ������ �ڵ��� �ٸ� �κп��� �����ڸ� �ҷ��� ���� ��ü�� ������.
	Singleton();
	~Singleton();
public:
	static Singleton* getInstance() 
	{
		if (instance == NULL)
			instance = new Singleton();
		return instance;
	}
};

// Heap�� �޸𸮰� �������� �ʴ� Singleton class
class Singleton_data
{
private:
	Singleton_data();
	~Singleton_data();
public:
	static Singleton_data& get_instance()
	{
		static Singleton_data instance;
		return instance;
	}
};


// �̱��� �������� ����� ���α׷� ���� class
class Singleton_Setting
{
public:
	enum Difficulty
	{
		Easy, Medium, Hard
	};
private:
	int volume;
	Difficulty diff;
	bool keepInventory;

	Singleton_Setting()
	{
		this->volume = 5;
		this->diff = Difficulty::Easy;
		this->keepInventory = false;
	}
	~Singleton_Setting() {

	}
public:
	static Singleton_Setting& get_instance()
	{
		static Singleton_Setting instance;
		return instance;
	}
	friend std::ostream& operator<<(std::ostream& os, const Singleton_Setting& c)
	{
		os << "Volume : " << c.volume << " , " << "Difficulty : " << c.diff << " , " << "KeepInventory : " << c.keepInventory;
		return os;
	}
	void setVolume(int volume)
	{
		this->volume = volume;
	}
	void setDifficulty(Difficulty diff)
	{
		this->diff = diff;
	}
	void setKeepInventory(bool keepInventory)
	{
		this->keepInventory = keepInventory;
	}

};

namespace Singleton_pattern
{
	void test();
}




