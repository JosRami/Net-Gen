#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string getDigraphName();
int getHostAmount();
int getSwitchAmount();
int getFirewallAmount();
int getRouterAmount();
string createGV(string path);
void system(string const& s);

int main()
{
	int routerCount = 0;
	int firewallCount = 0;
	int switchCount = 0;
	int hostCount = 0;

	string path = "";
	string space = " ";
	string arrow = "->";
	string line = "[dir=none splines=line penwidth=2]";
	int maxHostPerSwitch = 25;
	int maxSwitchPerFirewall = 10;
	int maxFirewallPerRouter = 5;

	cout << "Please provide a filepath alongside new file name:" << endl;
	cout << "For example: C:\\Folder1\\NameOfGraph.txt: " << endl;
	getline(cin, path);
	cout << path << endl;
	ofstream Diagram(path);
	Diagram << getDigraphName();

	hostCount = getHostAmount();

	if (hostCount >= 2)
	{
		hostCount = hostCount - 1;
	}

	if (switchCount == 0)
	{
		switchCount = 1;
	}
	if (switchCount < 1)
	{
		switchCount = 1;
	}
	if (switchCount < 2)
	{
		switchCount - 1;
	}
	if (hostCount > 25)
	{
		switchCount = ceil(hostCount / 25);
	}

	if (firewallCount == 0)
	{
		firewallCount = 1;
	}
	if (firewallCount < 1)
	{
		firewallCount = 1;
	}
	if (firewallCount < 2)
	{
		firewallCount - 1;
	}
	if (switchCount > 5)
	{
		firewallCount = ceil(switchCount / 5);
	}

	if (routerCount == 0)
	{
		routerCount = 1;
	}
	if (routerCount < 1)
	{
		routerCount = 1;
	}
	if (routerCount < 2)
	{
		routerCount - 1;
	}
	if (firewallCount > 5)
	{
		routerCount = ceil(firewallCount / 5);
	}



	for (int i = 0; i + 1 <= routerCount; i++)
	{
		int rNum1 = i;
		string rNum2 = to_string(rNum1 + 1);
		Diagram << "R" + rNum2 + space + "[image=\"E:\\NetGen\\Icons\\router.png\"]" + "\n\t";
	}
	for (int i = 0; i + 1 <= firewallCount; i++)
	{
		int fNum1 = i;
		string fNum2 = to_string(fNum1 + 1);
		Diagram << "F" + fNum2 + space + "[image=\"E:\\NetGen\\Icons\\firewall.png\"]" + "\n\t";
	}
	for (int i = 0; i + 1 <= switchCount; i++)
	{
		int sNum1 = i;
		string sNum2 = to_string(sNum1 + 1);
		Diagram << "S" + sNum2 + space + "[image=\"E:\\NetGen\\Icons\\switch.png\"]" + "\n\t";
	}
	for (int i = 0; i + 1 <= hostCount; i++)
	{
		int hNum1 = i;
		string hNum2 = to_string(hNum1 + 1);
		Diagram << "H" + hNum2 + space + "[image=\"E:\\NetGen\\Icons\\host.png\"]" + "\n\t";
	}
	Diagram << "\n\t";
	if (switchCount >= 1)
	{
		int hostTrack = 0;
		int switchTrack = 1;
		for (int i = 0; i <= hostCount; i++)
		{
			hostTrack = i;
			if (hostTrack != 0 && hostTrack % maxHostPerSwitch == 0)
			{
				switchTrack++;
			}
			int hNum3 = i;
			string hNum4 = to_string(hNum3+1);
			string hNum45 = to_string(switchTrack);
			Diagram << "H" + hNum4 + space + arrow + space + "S" + hNum45 + space + line + "\n\t";
		}
		if (firewallCount >= 1)
		{
			int switchTrack = 0;
			int firewallTrack = 1;
			for (int i = 0; i <= switchCount; i++)
			{
				switchTrack = i;
				if (switchTrack != 0 && switchTrack % maxSwitchPerFirewall == 0)
				{
					firewallTrack++;
				}
				int hNum3 = i;
				string hNum4 = to_string(hNum3+1);
				string hNum45 = to_string(firewallTrack);
				Diagram << "S" + hNum4 + space + arrow + space + "F" + hNum45 + space + line + "\n\t";
			}
			if (routerCount >= 1)
			{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
				int firewallTrack = 0;
				int routerTrack = 1;
				for (int i = 0; i <= firewallCount; i++)
				{
					firewallTrack = i;
					if (firewallTrack != 0 && firewallTrack % maxFirewallPerRouter == 0)
					{
						routerTrack++;
					}
					int hNum3 = i;
					string hNum4 = to_string(hNum3+1);
					string hNum45 = to_string(routerTrack);
					Diagram << "F" + hNum4 + space + arrow + space + "R" + hNum45 + space + line + "\n\t";
				}
			}
		}
	}
	Diagram << "\n}";
	Diagram.close();
	createGV(path);
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
	int hostCount;
	cout << "How many hosts are in the network?: " << endl;
	cin >> hostCount;
	return hostCount;
}

string createGV(string path)
{
	string graphvizPath = "E:\\NetGen\\GraphViz\\bin\\circo.exe";
	string filepath = path;
	string command = graphvizPath + " -Tpng " + filepath + " -O";
	cout << "Creating a diagram according to your answers." << endl;
	system(command);
	return("The diagram is ready.");
}

void system(string const& s)
{
	system(s.c_str());
}