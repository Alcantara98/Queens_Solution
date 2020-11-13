#include "queenProblem.hpp"

using namespace std;

queenProblem::queenProblem(int sizeInput) : size(), board(){
	this->size = sizeInput;
	board = new int*[size];
	for (int i = 0; i < size; i++) {
		board[i] = new int[size];
		for (int j = 0; j < size; j++) {
			board[i][j] = 0;
		}
	}
}

void queenProblem::printBoard() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << board[i][j] << "  ";
		}
		cout << endl;
	}
}

vector<int> queenProblem::getFirstSolution() {
	return{};
}

void queenProblem::unawareSolution() {

}

void queenProblem::awareSolution(int** currentBoard) {

}