#include <string>
#include <iomanip>
#include <iostream>

using namespace std;
class letterTile{
	private:
		char letter;
		int scoreValue;
	public:
	letterTile (char letter, int scoreValue) { // define this constructor in-line
        this->letter=letter;
        this->scoreValue=scoreValue;
        
};

void initializeBoard(letterTile);
static inline unsigned myrandomlt26();

int main(){

letterTile Board[5][5];



return 0;
}

void initializeBoard(letterTile& Board){
	int column = 0;
	int row = 0;
	char randomLetter;
	for (i=0; i<5; i++)
	{
		Board[column][row].letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[myrandomlt26()];
		column+1;
	}
	
}

static inline unsigned myrandomlt26() {
   long l;
   do { l = random(); } while (l>=(RAND_MAX/26)*26);
   return (unsigned)(l % 26);
}
