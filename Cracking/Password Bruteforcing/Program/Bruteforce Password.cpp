#include <bits/stdc++.h>
#include <thread>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define endl "\n"

const string charecterList = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

void PasswordGenerator(long long int length, string password)
{
    if (length == 0)
    {
        cout << password << endl;
        return;
    }

    for (long long int i = 0; i < charecterList.length(); i++)
    {
        string tempPassword = password;
        //cout << password << endl;
        tempPassword.push_back(charecterList[i]);
        PasswordGenerator(length-1, tempPassword);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/EH/Cracking/Password Bruteforcing/IO/input.crack", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/EH/Cracking/Password Bruteforcing/IO/wordlist_6.crack", "w", stdout);
#endif // ONLINE_JUDGE

    ll length;
    cin >> length;
    for (ll i = 1; i <= length; i++)
    {
        PasswordGenerator(i, "");
    }

    return 0;
}