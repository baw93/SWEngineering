#ifndef CARD_H
#define CARD_H

using namespace std;

class Card
{
private:
	int rank;		//1-13 (Ace - King)
	char suit;		//d = diamond,h = heart,s = spade,c = club
public:
	/*
	Function Purpose: Create an Ace of Spades
	Precondition: None
	Post Condition: An Ace of Spades is created
	*/
	Card();
	/*
	Function Purpose: Create a card with the passed in rank and suit
	Precondition: None
	Post Condition: A card is created.
	*/
	Card(int rank, char suit);

	int getRank();
	char getSuit();
	int setRank();
	char setSuit();
}

#endif
