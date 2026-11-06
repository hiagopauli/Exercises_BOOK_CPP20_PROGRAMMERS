#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int total{0};
	int gradeCounter{0};
	
	cout << "Enter grade or -1 to quit: \n";
	int grade;
	cin >> grade;
	
	//loop until sentinel value is read from user
	while (grade != -1)
	{
		total = total + grade;
		gradeCounter = gradeCounter + 1;
		
		cout << "Enter grade or -1 to quit: \n";
		cin >> grade;
	}

	if (gradeCounter != 0)
	{
		double average{static_cast<double>(total) / gradeCounter};
		
		cout << "\nTotal of the " << gradeCounter
				 << " grades entered is " << total;
		cout << setprecision(2) << fixed;
		cout << "\nClass average is " << average << "\n";
	}
	
	else 	
	{
		cout << "No grades were entered.\n";
	}

	return EXIT_SUCCESS;
}

