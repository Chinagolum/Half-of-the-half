#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string word;

	int t;
	cin >> t;
	for (int i = 0; i < t ;i++)
	{
	cin >> word;
	
		for(int ii=0; ii < word.size()/2; ii=ii+2)
		{
			vector<char> arr(word.begin(), word.end()) ;
			cout << arr[ii];			
		}
		cout << endl;
	}
	return 0;
}
