#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Gender { male, fermale} ;

class People
{
private:
	//имя, фамилия, год рождения, пол, номер паспорта.
	string name;
	int year;
	Gender gender;
	int passport;

public:
	People(const string& name, int year, Gender gender, int passport)
		: name(name), year(year), gender(gender), passport(passport)
	{
	}
	~People() {};
	void print() const;
	bool operator == (People& other);

};

bool People::operator == (People& other) {
	if (passport == other.passport) return true;
	return false;
}
void People::print() const {
	cout << "Имя: " << name << endl;
	cout << "Год рождения: " << year << endl;
	cout << "Пол: " << (gender == male ? "Мужской" : "Женский") << endl;
	cout << "Номер паспорта: " << passport << endl;
}
 
class BD
{
private:
	vector<People*> bd;
public:
	BD() {};
	~BD() {};

	//load(const std::string& filename)
	//save(const std::string& filename)
	//operator<< для вывода на экран
	//add(const Person& p)
	//erase(const Person& p)

};

 

int main()
{
	setlocale(LC_ALL, "Russian");
	string name = "Ivan";
	People p1(name, 1980, male, 1234567890);

	
  
	// Вызов метода display для отображения данных
	p1.print();
}

//Во всех лабораторных работах требуется использовать контейнеры STL.
//Реализовать базу данных о людях.
// Человек(вспомогательный класс Person) 
//описывается следующими полями : 
//имя, фамилия, год рождения, пол, номер паспорта.
//Рекомендуется перегрузить для класса Person оператор сравнения.
//load(const std::string& filename)
//save(const std::string& filename)
//operator<< для вывода на экран
//add(const Person& p)
//erase(const Person& p)
//
//https://drive.google.com/drive/folders/1exwHPuFS-1uNlCeMGiu1L7vrfWaN1F-c 
//lect03 и lect04.