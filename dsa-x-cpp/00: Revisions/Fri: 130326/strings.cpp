// Difference between:
// string s = "hello"; this is a string because here we can use methods of string & in c++ string a mutable in any other language it;s immutable..
// char arr[] = "hello"; this is same function like string but not a real string it's just array of characters

// ques: predict the output
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "hello"; // create a string name s which store "hello"

    cout << s.length() << endl; // give us the number of char str contains, which is 5, basicly same like v.size();
    cout << s[1] << endl;       // print e, same work like printing array elements or vector elements
    return 0;
}

// ques: predict the output
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abc";  // create a varible s which store string abc
    s[1] = 'x';        // place at idx 1 so which mean now string will be axc -> string only mutable in c++
    cout << s << endl; // axc b/c of our modification.
    return 0;
}

// ques: input a string, print it in reverse
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter string: ";
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
