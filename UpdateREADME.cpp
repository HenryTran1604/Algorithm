#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fo;
	fo.open("README.md", ios::app);
	string nameProblem = "TowerOfHanoi";
	string idProblem = "2165";
	string linkProblem = "https://cses.fi/problemset/task/" + idProblem;
	string type = "Introductory Problems";
	string solutionCPP = "https://github.com/HenryTran1604/CSES/blob/main/CPP/" + nameProblem + ".cpp";
	string solutionJava = "";
	string solutionPython = "";
	string out = "| [" + nameProblem + "]("+linkProblem + ")   | "+type + " |[CPP]("+ solutionCPP +")|[JAVA]("+solutionJava + ")|[PYTHON]("+ solutionPython + ")|";
	fo << "\n" +  out;
//	fi.close();
	fo.close();
	return 0;

}

