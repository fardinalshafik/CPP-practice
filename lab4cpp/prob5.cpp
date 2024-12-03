#include <iostream>
using namespace std;

class Players
{
private:
    char name[30];
    int score;
public:
    void getdata(int &highestScore);
    void display();
};

void Players::getdata(int &highestScore){
    cout<<"Enter the name of the player: ";
    cin.getline(name,30);
    cout<<"Enter the score of the player: ";
    cin>>score;
    if(score>highestScore){
        highestScore=score;
    }
}

void Players::display(){
    cout<<name<<" score "<<score<<" Runs."<<endl;
}

int main() 
{
    Players p[8];
    int n;
    int highestScore = 0;
    cout << "Enter the number of players: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<"Player "<<i+1<<endl;   
        p[i].getdata(highestScore);
    }
    for(int i=0;i<n;i++){
        p[i].display();
    }
    return 0;
}