#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    vector<string> participants;
    int numberOfParticipants;
    cout << "How many are the participants?: ";
    cin >> numberOfParticipants;
    for (int i = 1; i <= numberOfParticipants; i++ ) {
        string participant;
        cout << "Enter the name of participant number "
        << i << ": ";
        cin >> participant;
        participants.push_back(participant);
    }
    srand(time(NULL));
    int randomNumber = rand();
    int index = randomNumber % numberOfParticipants;
    cout <<"Go clean those plates, " << participants[index] << ".";
}