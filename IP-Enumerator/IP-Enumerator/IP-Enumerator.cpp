// IP-Enumerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <boost/asio/ip/address_v4.hpp>
#include <boost/asio/ip/network_v4.hpp>

using namespace boost;
using namespace asio;
using namespace ip;
using namespace std;

string getClass();
string getIPAdd();
string getMask();

int main()
{
	string ip1 = getIPAdd();
	string mask1 = getMask();
	string clss = getClass();
	address_v4 IP2 = make_address_v4(ip1);
	address_v4 mask2 = make_address_v4(mask1);
	cout << IP2 << endl;
	cout << (make_network_v4(IP2, mask2)) << endl;
}

string getIPAdd()
{
	string ip = "";
	cout << "Enter an IP address:\n" << endl;
	cin >> ip;
	return ip;
}

string getMask()
{
	string mask = "";
	cout << "Enter a subnet mask:\n" << endl;
	cin >> mask;
	return mask;
}

string getClass()
{
	string clss = "";
	cout << "What class is the IP:\n" << endl;
	cin >> clss;
	return clss;
}