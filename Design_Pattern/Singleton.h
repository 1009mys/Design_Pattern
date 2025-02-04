#pragma once

#include <iostream>

// Singleton class
class Singleton
{
private:
	// 객체를 담을 단 하나의 포인터
	static Singleton* instance;
	// 싱글톤 패턴에서 생성자는 반드시 private으로 생성한다. 
	// private으로 하지 않으면 코드의 다른 부분에서 생성자를 불러와 여러 객체가 생성됨.
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

// Heap에 메모리가 상주하지 않는 Singleton class
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


// 싱글톤 패턴으로 만드는 프로그램 설정 class
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




