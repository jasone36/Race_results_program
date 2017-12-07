//Jason Elliott COP2000 HW4
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void welcome();
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
double raceAverage(double, double, double);


int main()
{
	string racer1, racer2, racer3;
	double time1, time2, time3;

	welcome();
	getRaceTimes(racer1, time1);
	cout << "\n";
	getRaceTimes(racer2, time2);
	cout << "\n";
	getRaceTimes(racer3, time3);
	cout << "\n";

	findWinner(racer1, racer2, racer3, time1, time2, time3);
	cout << "\n";

	raceAverage(time1, time2, time3);


	return 0;

}

void getRaceTimes(string &racerName, double &raceTime)
{
	cout << "Please enter racer's name : ";
	cin >> racerName;
	cout << "Please enter racer's time : ";
	cin >> raceTime;
	if (raceTime > 0)
		{
		cout << racerName << " had a time of " << raceTime << " seconds." << endl;
		}
	else
		{
		cout << "Invalid. Please enter a time > 0." << endl;
		exit(0);
		}
}

void findWinner(string racer1, string racer2, string racer3, double time1, double time2, double time3)
{

	if (time1 < time2 && time1 < time3)
	{
		cout << "Winner is : " << racer1 << " with a time of " << time1 << " seconds!" << endl;
	}
	else if (time2 < time1 && time2 < time3)
	{
		cout << "Winner is : " << racer2 << " with a time of " << time2 << " seconds!" << endl;
	}
	else if (time3 < time1 && time3 < time2)
	{
		cout << "Winner is : " << racer3 << " with a time of " << time3 << " seconds!" << endl;
	}
	else if (time1 == time2 && time1 < time3)
	{
		cout << "We have a tie! " << racer1 << " and " << racer2 << " win with a time of " << time1 << " seconds!" << endl;
	}
	else if (time1 == time3 && time1 < time2)
	{
		cout << "We have a tie! " << racer1 << " and " << racer2 << " win with a time of " << time1 << " seconds!" << endl;
	}
	else if (time2 == time3 && time2 < time1)
	{
		cout << "We have a tie! " << racer2 << " and " << racer3 << " win with a time of " << time2 << " seconds!" << endl;
	}
	else if (time1 == time2 && time2 == time3)
	{
		cout << "We have a tie! " << racer1 << ", " << racer2 << " and " << racer3 << " will have to race again!" << endl;
	}

}

void welcome()
{
	
	cout << "*******************************************************"   << endl;
	cout << "Welcome to the Race Results Program"                       << endl;
	cout << "You are asked to enter the Three Racer's name\n";
	cout << "and their associated race time"							<< endl;
	cout << "Please enter a real number for race time. (Must be > 0)"   << endl;
	cout << "*******************************************************\n";

}


double raceAverage(double time1, double time2, double time3)
{
	double average = (time1 + time2 +time3) / 2;

	cout << "Average Race Time : " << average << " seconds." << endl;

	return average;
}