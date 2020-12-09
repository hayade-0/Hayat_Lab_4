#include<iostream>
#include<string>
using namespace std;
class card
{
	const char* rank[16] = {"","", "two", "three","four","fivc", "six", "seven", "eight", "nine","ten", "Jack", "Queen", "King", "Ace","No_rank" };
	const char* suit[5] = { "clubs", "diamonds", "hearts", "spades","No_suit" };
	const char* jokers[2]= { "Yes_Jocker","Not_Jocker" };
public:
	const char* singleCard[3];
	card()
	{
		singleCard[0] = suit[4];
		singleCard[1] =rank[15];
		singleCard[2] =jokers[1];

	}
	card(int selectedIndex_suit, int selectedIndex_rank, int selectedIndex_jokers)
	{
		singleCard[1] = rank[selectedIndex_rank];
		singleCard[0] = suit[selectedIndex_suit];
		singleCard[2] = jokers[selectedIndex_jokers];
	}
	void print();
};
class CardDeck
{
public:
	card* Card_Arr;

	CardDeck()
	{
		Card_Arr = new card[55];
		int index = 0;
		for (int i = 0;i < 4;i++)
			for (int j = 2;j < 15;j++)
			{
				card singleCard(i, j, 1);
				Card_Arr[index] = singleCard;
				index += 1;
			}
		for (int i = 0;i < 3;i++) {
			card singleCard(4, 15, 0);
			Card_Arr[index] = singleCard;
			index += 1;
		}
	}
};
