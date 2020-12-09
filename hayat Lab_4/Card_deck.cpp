#include "Card_deck.h"

void card::print()
{
	if (this->singleCard[2] == "Not_Jocker")
	{
		cout << "[";
		cout << (this->singleCard[0]) << ",";
		cout << (this->singleCard[1]) << "]" << endl;
	}
	else
		cout << "Jocker" << endl;
	

}
int main()
{
	CardDeck Deck;
	for (int i = 0;i < 55;i++)
		Deck.Card_Arr[i].print();


}
