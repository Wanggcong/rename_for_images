#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	ofstream out(argv[1]);
	if(!out.is_open())
	{
		cout<<"error,can not open the file !\n";
	}
	out<<"hello,my litte Qing\n";
	out<<"i love u , my sweety!\n";
	out.close();
	return 0;
}
