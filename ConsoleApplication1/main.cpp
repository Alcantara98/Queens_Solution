#include "queenProblem.hpp"
#include <iostream>

using namespace std;
/**
 *
 */
int main(int argc, char* argv[]) {
	queenProblem *myQueen = new queenProblem(atoi(argv[1]));
	myQueen->printBoard();
}