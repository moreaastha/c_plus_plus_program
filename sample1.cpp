#include<iostream>
using namespace std;
void isvowel(char character)
{
    if(character == 'a') 
    {
        cout<<"The given charachter is a vowel!";
    }
    else if(character == 'e')
    {
        cout<<"The given charachter is a vowel!";
    }
    else if(character == 'i')
    {
        cout<<"The given charachter is a vowel!";
    }
    else if(character == 'o')
    {
        cout<<"The given charachter is a vowel!";
    }
    else if(character == 'u')
    {
        cout<<"The given charachter is a vowel!";
    }
    else
    {
        cout<<"The given charachter is not a vowel!";

    }
}
int main()
{
    char character;
    cout<<"Enter any character: ";
    cin>>character;
    isvowel(character);
    return 0;
}