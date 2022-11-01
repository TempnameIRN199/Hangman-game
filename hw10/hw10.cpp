#include "Header.h"
int main()
{
	setlocale(0, "");
	char word[20];
	char word2[20];
	char letter;
	int size = 20;
	int size2 = 20;
	int count = 0;
	inputWord(word, size);
	outputWord(word, size);
	cout << "Enter letter: ";
	cin >> letter;
	while (checkLetter(word, size, letter) == false)
	{
		cout << "There is no such letter in the word. Try again: ";
		cin >> letter;
	}
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == letter)
		{
			word2[i] = letter;
		}
		else
		{
			word2[i] = '*';
		}
	}
	outputWord(word2, size2);
	while (checkWin(word, size, word2) == false && checkLose(word, size, word2) == false)
	{
		cout << "Enter letter: ";
		cin >> letter;
		while (checkRepeat(word, size, letter) == true)
		{
			cout << "You have already entered this letter. Try again: ";
			cin >> letter;
		}
		while (checkLetter(word, size, letter) == false)
		{
			cout << "There is no such letter in the word. Try again: ";
			cin >> letter;
		}
		for (int i = 0; i < strlen(word); i++)
		{
			if (word[i] == letter)
			{
				word2[i] = letter;
			}
		}
		outputWord(word2, size2);
	}
	if (checkWin(word, size, word2) == true)
	{
		cout << "You win!" << endl;
	}
	else
	{
		cout << "You lose!" << endl;
	}