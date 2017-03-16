#include "MacDonald.h"


MacDonald::MacDonald()
{
	ResuorceManager *p = &rm;
	am.setResourceListener(p);
}

void MacDonald::MacDonaldActivities()
{
	int num = SelectAction();
	switch (num)
	{
		//report all
	case 1:
	{
		cout<< rm;
	}
		break;
		//report resource
	case 2:
		break;
		//report animals
	case 3:
		break;
		//feed animals
	case 4:
		break;
		//feed chickens(/cats/dogs/pigs)
	case 5:
		break;
		//feed <animal name>
	case 6:
		break;
		//let animals out/back
	case 7:
		break;
		//let chickens(/cats/dogs/pigs) out/back	Let an animal type out/back.
	case 8:
		break;
		//let <animal name> out/back
	case 9:
		break;
		//buy <animal type> <animal name>
	case 10:
	{
		cout << "input type";
		string type;
		string name;
		cin >> type;
		if (type == "Chicken")
		{
			cout << "input Name";
			cin >> name;

		}
		else if (type == "Cat")
		{
			cout << "input Name";
			cin >> name;
		}
		else if (type == "Dog")
		{
			cout << "input Name";
			cin >> name;
		}
		else if (type == "Pig")
		{
			cout << "input Name";
			cin >> name;
		}
		else
			cout << "select again";
	}
	break;

		//sell <animal type> <animal name>
	case 11:
	{
		cout << "input type";
		string type;
		string name;
		cin >> type;
		if (type == "Chicken")
		{
			cout << "input Name";
			cin >> name;

		}
		else if (type == "Cat")
		{
			cout << "input Name";
			cin >> name;
		}
		else if (type == "Dog")
		{
			cout << "input Name";
			cin >> name;
		}
		else if (type == "Pig")
		{
			cout << "input Name";
			cin >> name;
		}
		else
			cout << "select again";
	}
		break;
		//sell <animal type>
	case 12:
	{
		cout << "input type";
		string type;
		cin >> type;
		if (type == "Chicken")
		{
		}
		else if (type == "Cat")
		{
		}
		else if (type == "Dog")
		{
		}
		else if (type == "Pig")
		{
		}
		else
			cout << "select again";

	}
	default:
		break;
	}

}


void MacDonald::Menu()
{
	cout << "=======Menu======" << endl;
	cout << "1.report all" << endl;
	cout << "2.report resource" << endl;
	cout << "3.report animals" << endl;
	cout << "4.feed animals" << endl;
	cout << "5.feed chickens(/ cats / dogs / pigs)" << endl;
	cout << "6.feed <animal name>" << endl;
	cout << "7.let animals out / back" << endl;
	cout << "8.let chickens(/ cats / dogs / pigs) out / back" << endl;
	cout << "9.let <animal name> out / back" << endl;
	cout << "10.buy <animal type> <animal name>" << endl;
	cout << "11.sell <animal type> <animal name>" << endl;
	cout << "12.sell <animal type>" << endl;
}

int MacDonald::SelectAction()
{
	int n = 0;
	cout << "Select number :";
	cin >> n;
	if (n > 0 || n < 13)
		return n;
	else
		cout << "select again";
	return 0;
}




MacDonald::~MacDonald()
{
}
