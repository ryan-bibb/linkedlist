#include<iostream>
using namespace std;
#include "LList.h"

//*****************************************************************************************************

int main()
{
	LList<double> list;

	double removed,
		retrieved,
		front,
		rear;

	if (list.isEmpty())
	{
		cout << "List is empty" << endl;
	}
	else
	{
		cout << "List is not empty" << endl;
	}

	if (list.isFull())
	{
		cout << "List is full" << endl;
	}
	else
	{
		cout << "List is not full" << endl;
	}

	if (list.remove(removed))
	{
		cout << removed
			<< " removed" << endl;
	}
	else
	{
		cout << "Removed unsuccessful" << endl;
	}

	if (list.viewFront(front))
	{
		cout << front
			<< " is in the front of the list" << endl;
	}
	else
	{
		cout << "Uanble to view front of list" << endl;
	}

	if (list.viewFront(rear))
	{
		cout << rear
			<< " is in the back of the list" << endl;
	}
	else
	{
		cout << "Uanble to view back of list" << endl;
	}

	cout << "Number of values in list: "
		<< list.getNumValues() << endl;

	if (list.insert(4.5))
	{
		cout << "4.5 inserted successfully" << endl;

		list.display();
	}
	else
	{
		cout << "4.5 not inserted" << endl;
	}

	if (list.insert(9.8))
	{
		cout << "9.8 inserted successfully" << endl;

		list.display();
	}
	else
	{
		cout << "9.8 not inserted" << endl;
	}

	removed = 10.6;

	if (list.remove(removed))
	{
		cout << "Removed succesfully" << endl;
	}
	else
	{
		cout << removed
			<< " unable to be remove" << endl;
	}

	if (list.insert(removed))
	{
		cout << removed
			<< " inserted successfuly" << endl;

		list.display();

		if (list.remove(removed))
		{
			cout << removed
				<< " was removed from the list" << endl;

			list.display();
		}
		else
		{
			cout << removed
				<< " unable to be removed from list" << endl;
		}
	}
	else
	{
		cout << "Unable to insert" << endl;
	}

	retrieved = 5.6;

	if (list.retrieve(retrieved))
	{
		cout << retrieved
			<< " was retrieved successfully" << endl;
	}
	else
	{
		cout << retrieved
			<< " was unable to be retrieved" << endl;
	}

	retrieved = 9.8;

	if (list.retrieve(retrieved))
	{
		cout << retrieved
			<< " was retrieved successfully" << endl;
	}
	else
	{
		cout << retrieved
			<< " was unable to be retrieved" << endl;
	}

	if (list.insert(6.7))
	{
		cout << "6.7 was inserted in list" << endl;

		list.display();
	}
	else
	{
		cout << "6.7 was unable to be inserted" << endl;
	}

	if (list.viewFront(front))
	{
		cout << front
			<< " is in the front of the list" << endl;
	}
	else
	{
		cout << "Unable to view front" << endl;
	}

	if (list.viewRear(rear))
	{
		cout << rear
			<< " is the rear of the list" << endl;
	}
	else
	{
		cout << "Unable to view rear of list" << endl;
	}

	if (list.isEmpty())
	{
		cout << "List is empty" << endl;
	}
	else
	{
		cout << "List is not empty" << endl;
	}

	if (list.isFull())
	{
		cout << "List is full" << endl;
	}
	else
	{
		cout << "List is not full" << endl;
	}

	if (list.insert(15.6))
	{
		cout << "15.6 inserted" << endl;
	}
	else
	{
		cout << "Unable to insert 15.6" << endl;
	}

	if (list.insert(1.1))
	{
		cout << "1.1 inserted" << endl;

		list.display();
	}
	else
	{
		cout << "Unable to insert 1.1" << endl;
	}

	removed = 1.1;

	if (list.remove(removed))
	{
		cout << removed
			<< " removed" << endl;

		list.display();
	}
	else
	{
		cout << "Removed unsuccessful" << endl;
	}

	removed = 15.6;

	if (list.remove(removed))
	{
		cout << removed
			<< " removed" << endl;

		list.display();
	}
	else
	{
		cout << "Removed unsuccessful" << endl;
	}

	cout << "Number of values in the list: "
		<< list.getNumValues() << endl;

	retrieved = 4.5;

	if (list.retrieve(retrieved))
	{
		cout << retrieved
			<< " was retrieved" << endl;
	}

	retrieved = 6.7;

	if (list.retrieve(retrieved))
	{
		cout << retrieved
			<< " was retrieved" << endl;
	}

	retrieved = 0.5;

	if (list.retrieve(retrieved))
	{
		cout << retrieved
			<< " was retrieved" << endl;
	}
	else
	{
		cout << retrieved
			<< " was unable to be retreived" << endl;
	}

	retrieved = 100.6;

	if (list.retrieve(retrieved))
	{
		cout << retrieved
			<< " was retrieved" << endl;
	}
	else
	{
		cout << retrieved
			<< " was unable to be retreived" << endl;
	}

	cout << "Number of values in the list: "
		<< list.getNumValues() << endl;

	removed = 4.5;

	if (list.remove(removed))
	{
		cout << removed
			<< " was removed from the list" << endl;

		list.display();
	}
	else
	{
		cout << removed
			<< " was unable to be removed from the list" << endl;
	}

	cout << "Number of values in the list: "
		<< list.getNumValues() << endl;

	removed = 6.7;

	if (list.remove(removed))
	{
		cout << removed
			<< " was removed from the list" << endl;

		list.display();
	}
	else
	{
		cout << removed
			<< " was unable to be removed from the list" << endl;
	}

	cout << "Number of values in the list: "
		<< list.getNumValues() << endl;

	removed = 9.8;

	if (list.remove(removed))
	{
		cout << removed
			<< " was removed from the list" << endl;
	}
	else
	{
		cout << removed
			<< " was unable to be removed from the list" << endl;
	}

	cout << "Number of values in the list: "
		<< list.getNumValues() << endl;

	return 0;
}

//*****************************************************************************************************

/*
Output: 
List is empty
List is not full
Removed unsuccessful
Uanble to view front of list
Uanble to view back of list
Number of values in list: 0
4.5 inserted successfully
4.5
9.8 inserted successfully
4.5     9.8
10.6 unable to be remove
10.6 inserted successfuly
4.5     9.8     10.6
10.6 was removed from the list
4.5     9.8
5.6 was unable to be retrieved
9.8 was retrieved successfully
6.7 was inserted in list
4.5     6.7     9.8
4.5 is in the front of the list
9.8 is the rear of the list
List is not empty
List is not full
15.6 inserted
1.1 inserted
1.1     4.5     6.7     9.8     15.6
1.1 removed
4.5     6.7     9.8     15.6
15.6 removed
4.5     6.7     9.8
Number of values in the list: 3
4.5 was retrieved
6.7 was retrieved
0.5 was unable to be retreived
100.6 was unable to be retreived
Number of values in the list: 3
4.5 was removed from the list
6.7     9.8
Number of values in the list: 2
6.7 was removed from the list
9.8
Number of values in the list: 1
9.8 was removed from the list
Number of values in the list: 0
*/
