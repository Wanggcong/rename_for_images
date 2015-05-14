#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{

	std::vector<std::string> filelist;

	// generate list of chessboard image filename
	for (int i=1; i<=20; i++)
	{

		std::stringstream str;
		str << "../chessboards/chessboard" << std::setw(2) << std::setfill('0') << i << ".jpg";
		std::cout << str.str() << std::endl;
		filelist.push_back(str.str());
	}
	return 0;
}
