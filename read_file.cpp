#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char temp[256];
	ifstream in(argv[1]);
	if(!in.is_open())
	{
		cout<<"error! can not open the file!\n";
	}
	while(!in.eof())
	{
		in.getline(temp,100);
		cout<<temp<<endl;
	}
	in.close();
	return 0;
}
