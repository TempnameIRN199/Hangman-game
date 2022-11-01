#include "Header.h"
void inputWord(char* word, int size)
{
	// ввод слова
	cout << "Enter word: ";
	cin >> word;
	// проверка на длину слова
	while (strlen(word) > size)
	{
		cout << "Word is too long. Try again: ";
		cin >> word;
	}
	// проверка на наличие цифр
	for (int i = 0; i < strlen(word); i++)
	{
		while (isdigit(word[i]))
		{
			cout << "Word can't contain numbers. Try again: ";
			cin >> word;
			i = 0;
		}
	}
	// проверка на наличие символов
	for (int i = 0; i < strlen(word); i++)
	{
		while (ispunct(word[i]))
		{
			cout << "Word can't contain symbols. Try again: ";
			cin >> word;
			i = 0;
		}
	}
	// проверка на наличие пробелов
	for (int i = 0; i < strlen(word); i++)
	{
		while (isspace(word[i]))
		{
			cout << "Word can't contain spaces. Try again: ";
			cin >> word;
			i = 0;
		}
	}
	// проверка на наличие заглавных букв
	for (int i = 0; i < strlen(word); i++)
	{
		while (isupper(word[i]))
		{
			cout << "Word can't contain uppercase letters. Try again: ";
			cin >> word;
			i = 0;
		}
	}
}
void outputWord(char* word, int size)
{
	// вывод слова
	cout << "Your word: ";
	for (int i = 0; i < strlen(word); i++)
	{
		cout << word[i];
	}
	cout << endl;
}
bool checkLetter(char* word, int size, char letter)
{
	// проверка на наличие буквы в слове
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == letter)
		{
			return true;
		}
	}
	return false;
}
bool checkWord(char* word, int size, char* word2, int size2)
{
	// проверка на совпадение слов
	if (strcmp(word, word2) == 0)
	{
		return true;
	}
	return false;
}
bool checkRepeat(char* word, int size, char letter)
{
	// проверка на повторение буквы
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == letter)
		{
			return true;
		}
	}
	return false;
}
bool checkRepeatWord(char* word, int size, char* word2)
{
	// проверка на повторение слова
	if (strcmp(word, word2) == 0)
	{
		return true;
	}
	return false;
}
bool checkWin(char* word, int size, char* word2)
{
	// проверка на победу
	if (strcmp(word, word2) == 0)
	{
		return true;
	}
	return false;
}
bool checkLose(char* word, int size, char* word2)
{
	// проверка на поражение
	if (strcmp(word, word2) == 0)
	{
		return true;
	}
	return false;
}