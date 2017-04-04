#include <bits/stdc++.h>

using namespace std;

bool checkUniqness(string str)
{
	int check = 0;
	for(int i = 0; i < str.length(); i++){
		int val = str[i] - 'a';
		if(check & (1 << val))
			return false;
		check |= (1 << val);
	}
	return true;
}

int main(int argc, char **argv) {
	if(checkUniqness("abcd"))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
