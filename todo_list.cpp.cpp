#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct todo
{
	char time[250], task[250];
};
void addTask()
{
	ofstream fileWrite("tasks.txt", ios::app | ios::binary);
	struct todo myTask;
	cout << "Insert task: ";
	cin >> myTask.task;
	cout << "Insert time: ";
	cin >> myTask.time;

	fileWrite.write((char *) &myTask, sizeof(myTask));
	cout << "Added!\n";
	fileWrite.close();
}






int main()
{


	while(true)
	{
		cout << "a) Add Tasks\n";
		cout << "b) Delete Tasks\n";
		cout << "c) View Tasks\n";
		cout << "d) Exit\n";

		char option;
		cin >> option;
        switch(option)
		{
		    case('a'):
				addTask();
				break;
			default:
				cout << "Invalid option!\n";
        }

	}
	return 0;
}
