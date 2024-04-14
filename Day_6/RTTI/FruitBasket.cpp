#include <iostream>
#include<typeinfo>
using namespace std;
namespace FruitBasket
{
	class Fruit
	{
	private:
		string name, color;
		double weight;

	public:
		Fruit()
		{
			name = "No Name";
			color = "No Color";
			weight = 0.0;
		}
		Fruit(string name, string color, double weight)
		{
			this->name = name;
			this->color = color;
			this->weight = weight;
		}
		virtual void taste() = 0;

		void show()
		{
			cout << "Name : " << name << endl;
			cout << "Color : " << color << endl;
			cout << "Weight : " << weight << endl;
		}
	};

	class Orange : public Fruit
	{
	public:
		Orange() {}
		Orange(string name, string color, double weight) : Fruit(name, color, weight)
		{
		}
		void taste()
		{
			cout << "Apple taste :   sour " << endl;
		}
		void juice()
		{
			cout << "Orange Juice Created" << endl;
		}
	};

	class Mango : public Fruit
	{
	public:
		Mango() {}
		Mango(string name, string color, double weight) : Fruit(name, color, weight)
		{
		}
		void taste()
		{
			cout << "Apple taste : sweet and sour " << endl;
		}
		void pulp()
		{
			cout << "Pulp extact of Mango" << endl;
		}
	};

	class Apple : public Fruit
	{
	public:
		Apple()
		{
		}
		Apple(string name, string color, double weight) : Fruit(name, color, weight) {}

		void taste()
		{
			cout << "Apple taste : sweet " << endl;
		}
		void appleJam()
		{
			cout << "AppleJam Created " << endl;
		}
	};
}
int main()
{
	cout << "1. Add Mango \n 2. Add Apple \n 3. Add Orange\n 4.Show All \n 5.Exit" << endl;
	int ch,index=0;
	string name, color;
	double weight;

	// store all fruits in array
	FruitBasket::Fruit *shop[5];
	typedef FruitBasket::Mango Mango;
	Mango *m;
	typedef FruitBasket::Orange Orange;
	Orange *o;
	typedef FruitBasket::Apple Apple;
	Apple *ap;

	do
	{
		cout << "\n Enter Choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
			if (index < 5)
			{

				cout << "for Mango Enter Name color weight ";
				cin >> name >> color >> weight;

				m = new Mango(name, color, weight);
				shop[index] = m; // upcasting
				index++;		 // 1


// Adding Fruits:

// If the user chooses to add a fruit (options 1, 2, or 3),
//  it prompts the user to enter the name, color, and weight of the fruit.
// If the basket is not full (less than 5 fruits), 
// it dynamically allocates memory for a new fruit object 
// of the chosen type (mango, apple, or orange) and adds it to the shop array.
//  It increments the index variable to keep track of the number of fruits in the basket.

				cout << " MAngo Is Added " << endl;
			}
			else
			{
				cout << "Basket Is Full " << endl;
			}
			break;

		case 2:
			if (index < 5)
			{

				cout << "for Apple Enter Name color weight ";
				cin >> name >> color >> weight;

				ap = new Apple(name, color, weight);
				shop[index] = ap; // upcasting
				index++;		  // 1
			}
			else
			{
				cout << "Basket Is Full " << endl;
			}

			break;
		case 3:
			if (index < 5)
			{

				cout << "for Orange Enter Name color weight ";
				cin >> name >> color >> weight;

				o = new Orange(name, color, weight);
				shop[index] = o; // upcasting
				index++;		 // 1
			}
			else
			{
				cout << "Basket Is Full " << endl;
			}
			break;
		case 4:
			cout << "\n-------------------\n"
				 << endl;
			for (int i = 0; i < index; i++)
			{
				shop[i]->show();
				shop[i]->taste();
				cout << "\n";
				// can Base class access behaviour of Derived:NO

				// to avoid run time error related to type casting
				// use RTTI
				if (typeid(*shop[i]) == typeid(Mango))
				{
					Mango *mangoObj = dynamic_cast<Mango *>(shop[i]);
					mangoObj->pulp();
					// DownCasting
				}
				if (typeid(*shop[i]) == typeid(Orange))
				{
					Orange *orangeObj = dynamic_cast<Orange *>(shop[i]);
					orangeObj->juice();
				}
				if (typeid(*shop[i]) == typeid(Apple))
				{
					Apple *appleObj = dynamic_cast<Apple *>(shop[i]);
					appleObj->appleJam();
				}
			}
			break;
		default:
			cout << "invalid choice" << endl;
			break;
		}

	} while (ch != 5);

	return 0;
}