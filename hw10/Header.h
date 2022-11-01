#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;

// функция для ввода слова
void inputWord(char* word, int size);
// функция для вывода слова
void outputWord(char* word, int size);
// функция для проверки буквы
bool checkLetter(char* word, int size, char letter);
// функция для проверки слова
bool checkWord(char* word, int size, char* word2);
// функция для проверки на повторение буквы
bool checkRepeat(char* word, int size, char letter);
// функция для проверки на повторение слова
bool checkRepeatWord(char* word, int size, char* word2);
// функция для проверки на победу
bool checkWin(char* word, int size, char* word2);
// функция для проверки на проигрыш
bool checkLose(char* word, int size, char* word2);
