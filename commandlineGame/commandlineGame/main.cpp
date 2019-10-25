//
//  main.cpp
//  commandlineGame
//
//  Created by Ravin Bhakta on 10/24/19.
//  Copyright © 2019 Ravin Bhakta. All rights reserved.
//

#include <iostream>

using namespace std;

class Player{
public:
    string name;
    int attack;
    int health;
    int defense;
    
};

class Monster{
public:
    string name;
    int attack;
    int defense;
    int health;
};



public attack(Player a, Monster b);

int main(int argc, const char * argv[]) {
    Player a;
    Monster b;
    
    cout<<"Enter your name, Player: ";
    cin>>a.name;
    a.attack = 10;
    a.health = 50;
    a.defense = 10;
    
    cout<<""<<endl;
    cout<<"Enter a monster name";
    cin>>b.name;
    b.attack = 40;
    b.defense =10;
    b.health = 30;
    
    attack(a,b);
}

public attack(Player a, Monster b){
    
}
