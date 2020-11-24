#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

string getDigraphName();
int getHostAmount();
int getRouterAmount();

int main()
{
	int routerCount = 0;
	string routerString = "";

	int firewallCount = 0;
	string firewallString = "";

	int switchCount = 0;
	string switchString = "";

	int hostCount = 0;
	string hostString = "";

	string path = "";

	cout << "Please provide a filepath alongside new file name:" << endl;
	cout << "For example: C:\\Folder1\\NameOfGraph.txt: " << endl;
	getline(cin, path);
	cout << path << endl;
	ofstream Diagram(path);
	Diagram << getDigraphName();

	hostCount = getHostAmount();
	routerCount = getRouterAmount();

	switchCount = hostCount / 25;
	firewallCount = routerCount;
	if (switchCount < 1)
	{
		switchCount = 1;
	}

	for (int i = 0; i <= routerCount; i++)
	{
		Diagram << "R" + i + " " + "[shape=cylinder]" + "\n\t";
	}

	for (int i = 0; i <= firewallCount; i++)
	{
		Diagram << "F" + i + " " + "[shape=box]" + "\n\t";
	}

	for (int i = 0; i <= switchCount; i++)
	{
		Diagram << "S" + i + " " + "[shape=ellipse]" + "\n\t";
	}

	for (int i = 0; i <= hostCount; i++)
	{
		Diagram << "H" + i + " " + "[shape=circle]" + "\n\t";
	}
	
	Diagram << "\n}";
	Diagram.close();
}

string getDigraphName()
{
	string digraphName = "digraph ";
	string graphName = "";
	string curlyStart = "\n{\n\t";
	cout << "Give the diagram a name: " << endl;
	getline(cin, graphName);
	digraphName = digraphName + graphName + curlyStart;
	return digraphName;
}

int getHostAmount()
{
	int hostCount
	cout << "How many hosts are in the network?: " << endl;
	getline(cin, hostCount);
	return hostCount;
}

int getRouterAmount()
{
	int routerCount;
	cout << "How many gateways/routers would you like?: " << endl;
	getline(cin, routerCount);
	return routerCount;
}

