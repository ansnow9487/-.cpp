#include<iostream>
#include<string>
using namespace std;

int main()
{
    int Happy, Surprise, Fear, Anger, Sad ;
    string code;
    cout << "Enter a sequence of bits: ";
    cin >> code;
    int i = 0;
    while (i+1 < code.length())
    {
        if( code[i]== '0' && code[i + 1]== '0' )
        {
            cout << "Happy "; 
            i += 2;
        }
        else if ( code[i]== '0' && code[i + 1]== '1')
        {
            cout << "Surprise "; 
            i += 2;
        }
        else if (i+2 < code.length()) 
        {
            if (code[i]== '1' && code[i + 1]== '0' && code[ i + 2]== '1'&& code[ i + 3]== '0')
            {
                cout << "Anger "; 
                i += 4;
                }
                else if (code[i]== '1' && code[i + 1]== '0' && code[ i + 2]== '1'&& code[ i + 3]== '1')
                {
                    cout << "Sad ";
                    i += 4;
                } 
                else if ( code[i]== '1' && code[i + 1]== '0' && code[ i + 2]== '0')
        {
            cout << "Fear "; 
            i += 3;
        }
                else 
                {
                    return 1;
                }
        }
        else 
        {
            return 1;
        }
    }
    if (i < code.length()) {
        return 1;
    }
    cout << endl;
    return 0;
}
