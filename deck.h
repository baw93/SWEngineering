#ifndef DECK_H
#define DECK_H

using namespace std;

const int DECKSIZE = 52;

class Deck
{
private:
	Card deck[DECKSIZE];	//Full deck = 52 cards
	int index;				//Iterator that shows position in deck

public:
	/*
	Function Purpose: Create a full deck
	Precondition: None
	Post Condition: An full deck of cards is created
	*/
	Deck();
	
	/*
	Function Purpose: Shuffle a deck of cards
	Precondition: There is at least two cards in the deck
	Post Condition: The deck has been shuffled
	*/
	void shuffleDeck();

	/*
	Function Purpose: Deal a card
	Precondition: There is at least one card left in the deck
	Post Condition: A card is returned and the index is updated to show that the card has been dealt
	*/
	Card dealCard();

	/*
	Function Purpose: Determine how many cards are left in the deck
	Precondition: None
	Post Condition: The amount of cards left in the deck have been returned
	*/
	int deckSize();
}

#endif
