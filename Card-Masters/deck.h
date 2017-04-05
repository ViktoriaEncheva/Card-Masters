#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED
class Deck {
private:
	int* Hand;
	int* Cards;

public:
	Deck();
  ~Deck();
	void AddCard(int);
	void GetCard(int);
	void RemoveCard(int);
	void PrintHand();
};
#endif // DECK_H_INCLUDED
