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
// ����������� ���� ��������. ����� ����: ������������ �����, ������� ������������ ������ �������� �� ���������� ���������� �������, ����� ������ ���� �� ����������.
// � ����� � �������� � ������� ����� ��������������� ���, ���������� �������� ���� word.txt.
// ���� ���� ������ ��������� ��������� ���������� ����, ������������� � �������.
// ������������� ��� ��������� ��������(� ����� ��� ����, ���� ������� ��� ��������� ����, ��������� ���� � �.�)

// ������� ��� ����� �����
void inputWord(char* word, int size);
// ������� ��� ������ �����
void outputWord(char* word, int size);
// ������� ��� �������� �����
bool checkLetter(char* word, int size, char letter);
// ������� ��� �������� �����
bool checkWord(char* word, int size, char* word2);
// ������� ��� �������� �� ���������� �����
bool checkRepeat(char* word, int size, char letter);
// ������� ��� �������� �� ���������� �����
bool checkRepeatWord(char* word, int size, char* word2);
// ������� ��� �������� �� ������
bool checkWin(char* word, int size, char* word2);
// ������� ��� �������� �� ��������
bool checkLose(char* word, int size, char* word2);
