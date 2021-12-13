// DogClassAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Doge
{
public:
	string breed;
	string color;
	int height;
	int weight;
	Doge(string w, string x, int y, int z);

	void Sit()
	{
		cout << "*The "<< breed << " sits*\n Woof!\n";
	}
	void layDown()
	{
		cout << "*The " << breed << " lies down*\n Woof!\n";
	}
	void Shake()
	{
		cout << "*The " << breed << " shakes your hand like a good boy*\n Woof!\n";
	}
};

Doge::Doge(string w, string x, int y, int z)
{
	breed = w;
	color = x;
	height = y;
	weight = z;
}

int main()
{
	Doge myDog("Hound", "brown", 2, 60);
	cout << "This " << myDog.height << " ft. tall " << myDog.color << " " << myDog.breed << " weighs " << myDog.weight << " lbs." << "\n";
	myDog.Sit();
	myDog.Shake();
	myDog.layDown();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
