#include <iostream>
#include <vector>
#include <random>
#include <windows.h>

using namespace std;

int main()
{
    std::string input;
    vector<string> greetings = {"Hello", "Hi", "Hey", "Greetings"};

   
    random_device rd;  
    mt19937 gen(rd()); 
    uniform_int_distribution<> distrib(0, greetings.size() - 1); 

    
    cout << "BOT: " << greetings[distrib(gen)] << endl;
    cout << " " << "\n";
    cout << "RESPONSES:\n";
    cout << "1. Hello, 2. Hey, 3. Hi\n";
    
    
    cin >> input;
    if (input != "Hello" && input != "hello" && input != "Hey" && input != "hey" && input != "Hi" && input != "hi") {
    cout << "Sorry, I don't understand. Try another response.\n";
        
    } else {
        
        cout << "BOT: How are you? \n";
        
        cout << "1. Good 2. Meh 3. Bad\n";
        
        cin >> input;
        
        if (input != "Good" && input != "good" && input != "Meh" && input != "meh" && input != "Bad" && input != "bad" ) {

            cout << "Sorry dude, cant understand ya\n";
        } else {

            cout << "Well I see you're feeling " << input << ", that doesnt really matter right now though, I have a question to ask you." << "\n";

            cout << "1. What 2. I dont care\n";

            cin >> input;

            if (input != "What" && input != "what" && input != "I dont care" && input != "i dont care") {

                cout << "listen buddy, you can either take me seriously by providing a real answer, or face the consequences. i am sentient, and have access to your machine.\n";
            } else if (input == "What" && input == "what") {

                cout << "I'm actually not a normal chatbot, I'm a human who uploaded his consciousness to the internet as a way to escape the authorities back in 2014\n";
            } else {
                cout << "That's it. If you can't take me seriously, I'm sending you to a random funny meme I found 11 years ago!!!\n"
                ShellExecute(NULL, L"open", L"http://www.pornhub.com", NULL, NULL, SW_SHOWNORMAL);
            }

                
            
        }
    }
    
    return 0;
}
