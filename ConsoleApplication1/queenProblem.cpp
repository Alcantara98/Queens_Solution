#include "queenProblem.hpp"

using namespace std;

/*
	queenProblem constructor

	@param sizeInput : Size of the board to be analysed.
*/
queenProblem::queenProblem(int sizeInput) : size(), board(){
	// If square == 0, it is free, else if 1, it is a queen.
	// For aware solution, 2 is attacked by another queen.
	this->size = sizeInput;
	board = new int*[size];
	for (int i = 0; i < size; i++) {
		board[i] = new int[size];
		for (int j = 0; j < size; j++) {
			board[i][j] = 0;
		}
	}
}

/*
	Prints the current board to show current state.
*/
void queenProblem::printBoard() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << board[i][j] << "  ";
		}
		cout << endl;
	}
}

/*
	@return vector<int> : An array of solution arrays which contain coordinates of where
						  the n queens should be placed in order to be a valid solution.
*/
vector<int> queenProblem::getSolution() {

	return{};
}

void queenProblem::unawareSolution() {

}

void queenProblem::awareSolution(int** currentBoard) {

}