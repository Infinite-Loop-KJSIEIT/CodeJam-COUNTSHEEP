#include <iostream>
#include<string.h>
using namespace std;
int main()
{
  int test;
  cin >> test;
  for (int c=1; c<= test ; c++)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (std::size_t i=0; i < s.length()-1; i++)
            {
                if (s[i] != s[i+1]) cnt++;
            }
        if (s[s.length()-1] == '-') cnt++;
        cout << "Case #" <<c<< ": "<< cnt << endl;
    }
  return 0;
}
