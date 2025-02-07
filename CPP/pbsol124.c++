#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n, i, Anton, Danik;
    cin >> n;

    char s[n];
    cin >> s;
    i = Anton = Danik = 0;
    strupr(s);
    while (s[i] != '\0')
    {
        if (s[i] == 'A')
        {
            Anton++;
        }
        else if (s[i] == 'D')
        {
            Danik++;
        }
        i++;
    }
    if (Anton > Danik)
        cout << "Anton";
    else if (Anton < Danik)
        cout << "Danik";
    else if (Anton == Danik)
        cout << "Friendship";
}