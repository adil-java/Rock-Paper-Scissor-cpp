#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

void winnerCheck(string a,string c) {
	if ((a == "rock" && c =="scissor")||(a=="paper" && c=="rock")||(a=="scissor" && c=="paper")) {
		cout << "The Winner is Player and he choose:"<<a << endl;
	}
	else if((a=="paper" && c=="scissor")||(a=="scissor" && c=="rock")||(a=="rock" && c=="paper")) {
		cout << "Winner is Computer and it choose:"<<c<<endl;
	}
	else if (a == c) {
		cout << "Its a draw choice again"<<endl;
	}
	else {
		cout << "Enter the Valid choice..." << endl;
	}
}

int main() {
	string comp, player;
	string arry[3] = { "rock","paper","scissor" };
	bool play = true;
	while (play) {
		srand(time(NULL)); //initialize the random seed
		int RandIndex = rand() % 3;
		comp= arry[RandIndex];
		cout << "Choose between 'rock','paper','scissor' OR Press 'e' to exit the game:";
		cin >> player;
		if (player == "e") {
			play = false;
		}
		else {

			winnerCheck(player, comp);
		}

	}



}
