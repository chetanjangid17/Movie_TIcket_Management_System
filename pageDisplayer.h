#include <iostream>
#include <fstream>
using namespace std;

//This header file contains functions to display the interface pages
//rdbuf() is for outputting the file inputted through ifstream

void startPage()
{
	cout<<endl<<ifstream("startPage.txt").rdbuf();
}

void registerPage()
{
	cout<<endl<<ifstream("registerPage.txt").rdbuf();
}


void errorPage()
{
	cout<<endl<<ifstream("errorPage.txt").rdbuf();
}

void loginPage()
{
	cout<<endl<<ifstream("loginPage.txt").rdbuf();
}

void loginAdmPage()
{
	cout<<endl<<ifstream("loginAdmPage.txt").rdbuf();
}

void exitPage()
{
	cout<<endl<<ifstream("exitPage.txt").rdbuf();
}

void aboutPage()
{
	cout<<endl<<ifstream("aboutPage.txt").rdbuf();
}

void seatmatrix()
{
	cout<<endl<<ifstream("seatmatrix.txt").rdbuf();
}

void dashboardPage()
{
	cout<<endl<<ifstream("dashboardPage.txt").rdbuf();
}
