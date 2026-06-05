#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput;

    cout << "===== Rule-Based AI Chatbot =====" << endl;
    cout << "Type 'bye' to exit\n";

    while(true)
    {
        cout << "\nYou: ";
        getline(cin, userInput);

        if(userInput == "hi" || userInput == "hello")
        {
            cout << "Bot: Hello! Nice to meet you." << endl;
        }
        else if(userInput == "how are you")
        {
            cout << "Bot: I am doing great." << endl;
        }
        else if(userInput == "your name")
        {
            cout << "Bot: I am a Rule-Based AI Chatbot." << endl;
        }
        else if(userInput == "college")
        {
            cout << "Bot: College life is amazing!" << endl;
        }
        else if(userInput == "bye")
        {
            cout << "Bot: Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Bot: Sorry, I don't understand." << endl;
        }
    }

    return 0;
}