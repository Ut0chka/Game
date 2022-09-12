#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

int square(int x) {
	int y = x;
	for (int i = 1; i < x; ++i) {
		y += x;
	}
	return y;
}

int main() 
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1251);

	vector<string> words;
	string word;
	string disliked = "kakaha";
	while (cin >> word) {
		words.push_back(word);
	}
	for (int i = 0; i < words.size(); i++) {
		if (words[i] == disliked)
			cout << "BLEEP" << "\t";
		else
			cout << words[i] << "\t";
	}
	cin.get();
}