#pragma once
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class queenProblem {

public:
	queenProblem(int sizeInput);
	vector<int> getSolution();
	void awareSolution(int **currentBoard);
	void unawareSolution();
	void printBoard();

private:
	int size;
	int **board;
};
         