//
//  main.cpp
//  game
//
//  Created by Ali Kesserwani
//
// Execute Mac Terminal:  g++ -o lab21 main.cpp
//./lab21

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <fstream>
#include <cstdlib>
using namespace std;

//function declarations
//game dynamics
void type();
void dead();
void writeWeapon();
void writeEnergy();

//story line
void introText();
void startGame();
void partOne();
void partTwo();
void bOne();
void bTwo();
void cOne();
void cTwo();
void fightBandits();
void wHorse();
void woHorse();
void eOne();
void fOne();
void fTwo();
void gOne();
void finalBoss();
void finalD();
void victory();
void credits();


//style functions
void type(string word, int speed){
    for (const auto c : word) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
}

void writeEnergy(string level){
    ofstream myfile;
    myfile.open ("/Users/alikesserwani/Desktop/game/energy.txt");
    myfile << level;
    myfile.close();
}

void writeWeapon(string item){
    ofstream myfile;
    myfile.open ("/Users/alikesserwani/Desktop/game/weapon.txt");
    myfile << item;
    myfile.close();
}

//dead
void dead(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
    type ( "You have been killed\n", 100);
    cout << "Restart Game? (Y,N) > ";
    string prompt;
    cin >>prompt;
    
    if (prompt == "Y" || prompt == "y"){
        cout << "\n";
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(200));
        introText();
    }
    else if (prompt == "N" || prompt == "n"){
        cout << "\n";
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(200));
        introText();
    }
    else {
    while (prompt != "Y" || prompt != "y" || prompt != "N" || prompt != "n") {
        cout << "I don't know what that means? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "Y" || tryAgain == "y"){
            cout << "\n";
            cout << "\n";
            this_thread::sleep_for(chrono::milliseconds(200));
            introText();
            break;
        }
        else if(tryAgain == "N" || tryAgain == "n"){
            cout << "\n";
            cout << "\n";
            this_thread::sleep_for(chrono::milliseconds(200));
            introText();
            break;
        }
    }
    }


    
}

void credits(){
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "------------------------------------------------------\n";
    cout << "           Created by Ali Kesserwani                  \n";
    cout << "------------------------------------------------------\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    introText();
    
}

void victory(){
    cout << "\n";
    cout << "\n";
    cout << "------------------------------------------------------\n";
    type(" VICTORY!!\n",100);
    type(" You have successfully killed the Evil Wizard and saved the Princess\n",100);
    type(" The grateful King has given you all riches and luxuries you could ever imagine\n",100);
    cout << "\n";
    type("GAME OVER\n",100);
    cout << "\n";
    cout << "\n";
    credits();

}


//boss dialogue
void finalD(){
    cout << "\n";
    type("--------------------\n", 100);
    type("A. Swing for the head\n", 100);
    type( "B. Drive for the chest\n", 100);
    cout << "What do you choose > ";
    string chooseOne;
    cin >> chooseOne;
    
    if (chooseOne == "a" || chooseOne == "A"){
        cout << "\n";
        type( "The wizard has ducked and hit you with his staff\n", 100);
        type( "You fall to the ground\n", 100);
    }
    else if (chooseOne == "b" || chooseOne == "B") {
        cout << "\n";
        type( "The wizard has dodged your drive and you slam into the wall\n", 100);
        type( "You fall to the ground\n", 100);
    }
    else {
            cout << "\n";
            type( "The wizard has dodged your drive and you slam into the wall\n", 100);
            type( "You fall to the ground\n", 100);
    }

    
    cout << "\n";
    type("--------------------\n", 100);
    type("A.Swing at the feet\n", 100);
    type( "B. Tackle Him\n", 100);
    cout << "What do you choose > ";
    string chooseTwo;
    cin >> chooseTwo;
    
    if (chooseTwo == "a" || chooseTwo == "A"){
        cout << "\n";
        type( "You swing at the wizard's feet\n", 100);
        type( "Your weapon scrapes his left foot\n", 100);
    }
    else if (chooseTwo == "b" || chooseTwo == "B") {
        cout << "\n";
        type( "You run full speed at the Wizard and throw him to the ground\n", 100);
        type( "He then pushes you off and points his staff at you\n", 100);
    }
    else {
            cout << "\n";
        type( "You swing at the wizard's feet\n", 100);
        type( "Your weapon scrapes his left foot\n", 100);
        }

    cout << "\n";
    type("--------------------\n", 100);
    type("A. Swing at his staff\n", 100);
    type( "B. Throw your weapon at him \n", 100);
    cout << "What do you choose > ";
    string chooseThree;
    cin >> chooseThree;
    
    if (chooseThree == "a" || chooseThree == "A"){
        cout << "\n";
        type( "You swing your weapon at the wizard's staff\n", 100);
        type( "The two weapons create sparks in the air as you both fight\n", 100);
    }
    else if (chooseThree == "b" || chooseThree == "B") {
        cout << "\n";
        type( "You throw your weapon at the wizard and miss him\n", 100);
        type( "Oh no!\n", 100);
        type( "The weapon falls of the side of the tower\n", 100);
        type( "But their is still hope!\n", 100);
        type( "You pull out a small knife and run at the Wizard one last time\n", 100);

    }
    else {
            cout << "\n";
        type( "You swing your weapon at the wizard's staff\n", 100);
        type( "The two weapons create sparks in the air as you both fight\n", 100);
    }
    

}



//final boss
void finalBoss(){
    cout << "\n";
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
     type("You reach the top of the tower where the Wizard stands.\n", 100);
    type("And next to him...\n", 100);
    type("The Princess!...\n", 100);
    type("She is pleading as the Wizard grabs her and threatens to throw her off the tower.\n", 100);
    type("You pull out your weapon and the Wizard his staff.\n", 100);
    
    
    //reading text files
     ifstream WfileFive("/Users/alikesserwani/Desktop/game/weapon.txt");
     string WcontentFive;
    ifstream EfileFive("/Users/alikesserwani/Desktop/game/energy.txt");
    string EcontentFive;
    
    while(WfileFive >> WcontentFive && EfileFive >> EcontentFive) {
        if (WcontentFive == "axe" && EcontentFive == "ntired"){
            //energy + battle axe
            // probability 70/30
            srand(std::time(0));
            int number = std::rand() % 10 + 1;

            if (number== 1 || number== 2 || number== 3 || number== 4 || number== 5 || number== 6 ||number== 7 ){
                finalD();
                type("You find a moment where the Wizard leaves his chest open.\n", 100);
                type("You finally stab the wizard straight through the chest, piercing his heart.\n", 100);
                type("Standing on the edge of the tower, you kick him as he falls to his death.\n", 100);
                victory();
            }else if (number== 8 || number== 9 || number==10){
                //fight dialogue
                finalD();
                type("The Wizard dodges you final attempt.\n",100);
                type("He then grabs his staff and hits you on the side of the head with it.\n",100);
                type("You have finally died from fatigue and horrible wounds.\n", 100);
                dead();
            }
        }
        //no energy + battle axe
        // probability 40/60
       else if (WcontentFive == "axe" || EcontentFive == "tired"){
                srand(std::time(0));
                int numberTwo = std::rand() % 5 + 1;
           
                if (numberTwo == 1 || numberTwo == 2){
                    finalD();
                    type("You find a moment where the Wizard leaves his chest open.\n", 100);
                    type("You finally stab the wizard straight through the chest, piercing his heart.\n", 100);
                    type("Standing on the edge of the tower, you kick him as he falls to his death.\n", 100);
                    victory();
                } else if(numberTwo == 3 || numberTwo == 4 || numberTwo == 5){
                    finalD();
                    type("The Wizard dodges you final attempt.",100);
                    type("He then grabs his staff and hits you on the side of the head with it.",100);
                    type("You have finally died from fatigue and horrible wounds.\n", 100);
                    dead();
                }
        }
        //energy + sword
        // probability 60/40
       else if (WcontentFive == "sword" && EcontentFive == "ntired"){
           srand(std::time(0));
           int numberThree = std::rand() % 5 + 1;
      
           if (numberThree == 1 || numberThree == 2 || numberThree == 3){
               finalD();
               type("You find a moment where the Wizard leaves his chest open.\n", 100);
               type("You finally stab the wizard straight through the chest, piercing his heart.\n", 100);
               type("Standing on the edge of the tower, you kick him as he falls to his death.\n", 100);
               victory();
           } else if(numberThree == 4 || numberThree == 5){
               finalD();
               type("The Wizard dodges you final attempt.",100);
               type("He then grabs his staff and hits you on the side of the head with it.",100);
               type("You have finally died from fatigue and horrible wounds.\n", 100);
                dead();
           }
       }
        //mo energy + sword
        // probability 20/80
       else if (WcontentFive == "sword" && EcontentFive == "tired"){
           srand(std::time(0));
           int numberFour = std::rand() % 5 + 1;
      
           if (numberFour == 5){
               finalD();
               type("You find a moment where the Wizard leaves his chest open.\n", 100);
               type("You finally stab the wizard straight through the chest, piercing his heart.\n", 100);
               type("Standing on the edge of the tower, you kick him as he falls to his death.\n", 100);
               victory();
           } else if(numberFour == 1 || numberFour == 2 || numberFour == 3 || numberFour == 4){
               finalD();
               type("The Wizard dodges you final attempt.",100);
               type("He then grabs his staff and hits you on the side of the head with it.",100);
               type("You have finally died from fatigue and horrible wounds.\n", 100);
                dead();
           }
       }
    }

}












//sneaking probability
void gOne(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
    cout << "\n";
     type("You have finally approached the Evil Wizard's Castle.\n", 100);
    type("But wait!\n", 100);
    type("It is heavily guarded by his skeleton army.\n", 100);
    type("Therefore you will have to sneak in. \n", 100);
    type("--------------------\n", 100);



    
    //reading text files
     ifstream WfileFour("/Users/alikesserwani/Desktop/game/weapon.txt");
     string WcontentFour;
    ifstream EfileFour("/Users/alikesserwani/Desktop/game/energy.txt");
    string EcontentFour;

    
    
     while(WfileFour >> WcontentFour && EfileFour >> EcontentFour) {
         if (WcontentFour == "axe" && EcontentFour == "ntired"){
             //energy + battle axe
             // probability 90/10
             srand(std::time(0));
             int number = std::rand() % 10 + 1;

             if (number== 1 || number== 2 || number== 3 || number== 4 || number== 5 || number== 6 ||number== 7 || number== 8 || number== 9){
                 type("You have successfully sneaked into the castle. \n", 100);
                 finalBoss();
             }else if (number==10){
                 type("Oh no!\n", 100);
                 type("A skeleton has spotted and impaled you!\n", 100);
                 cout << "\n";
                 dead();
             }
         }
         //no energy + battle axe
         // probability 50/50
        else if (WcontentFour == "axe" || EcontentFour == "tired"){
                 srand(std::time(0));
                 int numberTwo = std::rand() % 2 + 1;
            
                 if (numberTwo == 1){
                     type("You have successfully sneaked into the castle. \n", 100);
                     finalBoss();
                 } else if(numberTwo == 2){
                     type("Oh no!\n", 100);
                     type("A skeleton has spotted and impaled you!\n", 100);
                     cout << "\n";
                         dead();
                 }
         }
         //energy + sword
         // probability 75/25
        else if (WcontentFour == "sword" && EcontentFour == "ntired"){
            srand(std::time(0));
            int numberThree = std::rand() % 4 + 1;
       
            if (numberThree == 1 || numberThree == 2 || numberThree == 3){
                type("You have successfully sneaked into the castle. \n", 100);
                finalBoss();
            } else if(numberThree == 4){
                type("Oh no!\n", 100);
                type("A skeleton has spotted and impaled you!\n", 100);
                cout << "\n";
                    dead();
            }
        }
         //mo energy + sword
         // probability 25/75
        else if (WcontentFour == "sword" && EcontentFour == "tired"){
            srand(std::time(0));
            int numberFour = std::rand() % 4 + 1;
       
            if (numberFour == 4){
                type("You have successfully sneaked into the castle. \n", 100);
                finalBoss();
            } else if(numberFour == 1 || numberFour == 2 || numberFour == 3){
                type("Oh no!\n", 100);
                type("A skeleton has spotted and impaled you!\n", 100);
                cout << "\n";
                    dead();
            }
        }
     }

}




//fight dragon
void fTwo(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
     type("You have chosen to fight the Dragon\n", 100);
    type("--------------------", 100);

    //reading text files
     ifstream WfileThree("/Users/alikesserwani/Desktop/game/weapon.txt");
     string WcontentThree;
    ifstream EfileThree("/Users/alikesserwani/Desktop/game/energy.txt");
    string EcontentThree;

    
    
     while(WfileThree >> WcontentThree && EfileThree >> EcontentThree) {
         if (WcontentThree == "axe" && EcontentThree == "ntired"){
             //energy + battle axe
             // probability 90/10
             srand(std::time(0));
             int number = std::rand() % 10 + 1;

             if (number== 1 || number== 2 || number== 3 || number== 4 || number== 5 || number== 6 ||number== 7 || number== 8 || number== 9){
                 cout << "\n";
                 type("You have successfully defeated the dragon\n", 100);
                 cout << "\n";
                 type("The Dragon is now your subject and shall take you to the Evil Wizard's Castle\n", 100);
                 cout << "\n";
                 finalBoss();
             }else if (number==10){
                 cout << "\n";
                 type("The Dragon has engulfed you in a ring of flames.\n", 100);
                 type("You have been reduced to ashes.\n", 100);
                 cout << "\n";
                 dead();
             }
         }
         //no energy + battle axe
         // probability 50/50
        else if (WcontentThree == "axe" || EcontentThree == "tired"){
                 srand(std::time(0));
                 int numberTwo = std::rand() % 2 + 1;
            
                 if (numberTwo == 1){
                     cout << "\n";
                     type("You have successfully defeated the dragon\n", 100);
                     cout << "\n";
                     type("The Dragon is now your subject and shall take you to the Evil Wizard's Castle\n", 100);
                     cout << "\n";
                     finalBoss();
                 } else if(numberTwo == 2){
                     cout << "\n";
                     type("The Dragon has engulfed you in a ring of flames.\n", 100);
                     type("You have been reduced to ashes.\n", 100);
                     cout << "\n";
                         dead();
                 }
         }
         //energy + sword
         // probability 75/25
        else if (WcontentThree == "sword" && EcontentThree == "ntired"){
            srand(std::time(0));
            int numberThree = std::rand() % 4 + 1;
       
            if (numberThree == 1 || numberThree == 2 || numberThree == 3){
                cout << "\n";
                type("You have successfully defeated the dragon\n", 100);
                cout << "\n";
                type("The Dragon is now your subject and shall take you to the Evil Wizard's Castle\n", 100);
                cout << "\n";
                finalBoss();
            } else if(numberThree == 4){
                cout << "\n";
                type("The Dragon has engulfed you in a ring of flames.\n", 100);
                type("You have been reduced to ashes.\n", 100);
                cout << "\n";
                    dead();
            }
        }
         //mo energy + sword
         // probability 25/75
        else if (WcontentThree == "sword" && EcontentThree == "tired"){
            srand(std::time(0));
            int numberFour = std::rand() % 4 + 1;
       
            if (numberFour == 4){
                cout << "\n";
                type("You have successfully defeated the dragon\n", 100);
                cout << "\n";
                type("The Dragon is now your subject and shall take you to the Evil Wizard's Castle\n", 100);
                cout << "\n";
                finalBoss();
            } else if(numberFour == 1 || numberFour == 2 || numberFour == 3){
                cout << "\n";
                type("The Dragon has engulfed you in a ring of flames.\n", 100);
                type("You have been reduced to ashes.\n", 100);
                cout << "\n";
                    dead();
            }
        }
     }
}



//fight dragon - Question
void fOne(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
    type( "As you ride in the woods, you hear a loud snoring.\n", 100);
    type( "Oh no!\n", 100);
    type( "A Dragon!\n", 100);
    type( "The Dragon wakes up and spots you.\n", 100);
    type("A. Fight the Dragon\n", 100);
    type("B. Flee\n", 100);
    cout << "What do you choose? > ";
    string fightDragon;
    cin >> fightDragon;
    
    if (fightDragon == "A" || fightDragon == "a"){
        fTwo();
    }
    else if (fightDragon == "B" || fightDragon == "b"){
        cout << "\n";
        gOne();
    }
    else {
    while (fightDragon != "A" || fightDragon != "a" || fightDragon != "B" || fightDragon != "b") {
        cout << "I don't know what that means? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "A" || tryAgain == "a"){
            fTwo();
            break;
        }
        else if(tryAgain == "B" || tryAgain == "b"){
            gOne();
            break;
        }
    }

    }

    
}


//approach inn
void eOne(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
    type("After traveling for many more days, you have reached an Inn. \n", 100);
    type("Do you choose to stay or continue on your journey? \n", 100);
    type("A. Yes\n", 100);
    type("B. No\n", 100);
    cout << "> ";
    string chooseInn;
    cin >> chooseInn;

    if (chooseInn == "A" || chooseInn == "a"){
        writeEnergy("ntired");
        type("--------------------\n", 100);
        type("You wake up well rested the next morning and are ready to continue your journey \n", 100);
        fOne();
    }
    else if (chooseInn == "B" || chooseInn == "b"){
        writeEnergy("tired");
        fOne();
    }
    else {
    while (chooseInn != "A" || chooseInn != "a" || chooseInn != "B" || chooseInn != "b") {
        cout << "I don't know what that means? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "A" || tryAgain == "a"){
            writeEnergy("ntired");
            type("--------------------\n", 100);
            type("You wake up well rested the next morning and are ready to continue your journey \n", 100);
            fOne();
            break;
        }
        else if(tryAgain == "B" || tryAgain == "b"){
            writeEnergy("tired");
            fOne();
            break;
        }
    }

    }
}


//with horse
void wHorse(){
    cout << "\n";
    type( "You ride your horse across the water and reach the other side\n", 100);
    eOne();
}


//without horse
void woHorse(){
    cout << "\n";
    ifstream file("/Users/alikesserwani/Desktop/game/weapon.txt");
    string content;
    while(file >> content) {
        if (content == "sword"){
            type ("You have successfuly swam to the other side\n", 100);
            type ("But you have abandoned your horse, and must continue this journey by foot \n", 100);
            eOne();
        } else if (content == "axe"){
            type ("Oh no!\n",100);
            type ("The weight of the axe is pulling down on you as you swim!\n",100);
            type ("You have drowned in the middle of the water\n",100);
            cout << "\n";
            dead();
            }
    }
}

//fight bandits
void fightBandits(){
   // cout << "\n";
   cout << "-----------------------------------------------------------------\n";
    type("You have chosen to fight the bandits\n", 100);
    ifstream file("/Users/alikesserwani/Desktop/game/weapon.txt");
    string contentTwo;
    while(file >> contentTwo) {
        if (contentTwo == "sword"){
            // probability 50/50
            srand(std::time(0));  // needed once per program run
            int number = std::rand() % 2 + 1;

            if (number== 1){
                type("--------------------\n", 100);
                type("You have survived\n", 100);
                eOne();
            }else if (number==2){
                cout << "\n";
                type("The bandits have sliced your head off\n", 100);
                dead();
            }
        }
            else if (contentTwo == "axe"){
            //75/25
                srand(std::time(0));  // needed once per program run
                int numberTwo = std::rand() % 2 + 1;
                if (numberTwo == 1 || numberTwo == 2 || numberTwo == 3){
                    type("--------------------\n", 100);
                    type("You have survived\n", 100);
                    eOne();
                } else if(numberTwo ==4){
                    cout << "\n";
                    type("The bandits have sliced your head off\n", 100);
                        dead();
                }
        }
    }
}



//C1
void cOne(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
    type ("Oh no!\n",100);
     type("A group of bandits have spotted you and are approaching\n", 100);
     type("A. Fight them\n", 100);
    type("B. Flee\n", 100);
    cout << "What do you choose? (A,B) > ";
    string chooseTwo;
    cin >> chooseTwo;
    
    if (chooseTwo == "A" || chooseTwo == "a"){
        fightBandits();
    }
    else if (chooseTwo == "B" || chooseTwo == "b"){
        cout << "-----------------------------------------------------------------\n";
        type("As you flee, you are shot in the head by a stray arrow.\n", 100);
        type("You have brought shame to the kingdom.\n", 100);
        dead();
        
    }
    else {
    while (chooseTwo != "A" || chooseTwo != "a" || chooseTwo != "B" || chooseTwo != "b") {
        cout << "I do not speak this tongue? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "A" || tryAgain == "a"){
            fightBandits();
            break;
        }
        else if(tryAgain == "B" || tryAgain == "b"){
            cout << "-----------------------------------------------------------------\n";
            type("As you flee, you are shot in the head by a stray arrow.\n", 100);
            type("You have brought shame to the kingdom.\n", 100);
            dead();
            break;
        }
    }
    }

    

}


//B1
void bOne(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
      type ("Hours after traveling through the woods, you reach water.\n",100);
      type("Your horse neighs and stops.\n", 100);
      type("A. Take horse through water\n", 100);
      type("B. Abandon horse\n", 100);
     cout << "What do you choose? (A,B) > ";
    string chooseOne;
    cin >> chooseOne;
    
    if (chooseOne == "A" || chooseOne == "a"){
        wHorse();
    }
    else if (chooseOne == "B" || chooseOne == "b"){
        woHorse();
        
    }
    else {
    while (chooseOne != "A" || chooseOne != "a" || chooseOne != "B" || chooseOne != "b") {
        cout << "I do not speak this tongue? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "A" || tryAgain == "a"){
            wHorse();
            break;
        }
        else if(tryAgain == "B" || tryAgain == "b"){
            woHorse();
            break;
        }
    }
    }


}


//part 2
void partTwo(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
      type ("Upon leaving the castle, you travel for days on horseback.\n",100);
      type("All of a sudden you approach a fork.\n", 100);
      type("A. To the left is the ancient dark forest\n", 100);
     type("B. To the right is the stone road\n", 100);
    cout <<"Choose a direction (A,B) > ";
    string chooseRoadone;
    cin >> chooseRoadone;
    
    if (chooseRoadone == "A" || chooseRoadone == "a"){
        bOne();
    }
    else if (chooseRoadone == "B" || chooseRoadone == "b"){
        cOne();
    }
    else {
    while (chooseRoadone != "A" || chooseRoadone != "a" || chooseRoadone != "B" || chooseRoadone != "b") {
        cout << "I do not speak this tongue? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "A" || tryAgain == "a"){
            bOne();
            break;
        }
        else if(tryAgain == "B" || tryAgain == "b"){
            cOne();
            break;
        }
    }
    }

    
    
}



//part 1
void partOne(){
    cout << "\n";
    cout << "-----------------------------------------------------------------\n";
    type("First choose your weapon.\n", 100);
    type("A. The battle axe (heavy but strong)\n", 100);
    type("B. The sword (light but weak)\n", 100);
    cout << "(A,B) > ";
    string chooseWeapon;
    cin >> chooseWeapon;

    if (chooseWeapon == "A" || chooseWeapon == "a"){
       type("A wise choice: You have chosen the battle axe\n", 100);
        writeWeapon("axe");
        partTwo();
    }
    else if (chooseWeapon == "B" || chooseWeapon == "b"){
        type("A wise choice: You have chosen the sword\n", 100);
        writeWeapon("sword");
        partTwo();
    }
    else {
    while (chooseWeapon != "A" || chooseWeapon != "a" || chooseWeapon != "B" || chooseWeapon != "b") {
        cout << "I don't know what that means? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "A" || tryAgain == "a"){
            type("A wise choice: You have chosen the battle axe\n", 100);
            writeWeapon("axe");
            partTwo();
            break;
        }
        else if(tryAgain == "B" || tryAgain == "b"){
           type("A wise choice: You have chosen the sword\n", 100);
            writeWeapon("sword");
            partTwo();
            break;
        }
    }
    }


}


//part 1
void startGame(){
    cout << "\n";
   cout << "-----------------------------------------------------------------\n";
  type("The princess has been captured from the castle by the evil wizard.\n", 100);
  type("The king has appointed you, his best man, to save her.\n", 100);
    cout <<"Do you accept this mission? (Y,N) > ";
    string prompt;
    cin >>prompt;
    
    if (prompt == "Y" || prompt == "y"){
        partOne();
    }
    else if (prompt == "N" || prompt == "n"){
        type("Goodbye Coward!\n", 100);
        cout << "\n";
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(200));
        introText();
    }
    else {
    while (prompt != "Y" || prompt != "y" || prompt != "N" || prompt != "n") {
        cout << "I don't know what that means? > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "Y" || tryAgain == "y"){
            partOne();
            break;
        }
        else if(tryAgain == "N" || tryAgain == "n"){
            type("Goodbye Coward!\n", 100);
            cout << "\n";
            cout << "\n";
            this_thread::sleep_for(chrono::milliseconds(200));
            introText();
            break;
        }
    }
    }

    
    
}

void introText(){
    cout << "----------\n";
    type("Knightrise\n", 100);
    cout << "----------\n";
    this_thread::sleep_for(chrono::milliseconds(100));
    cout << "Type 'Go' to begin > ";
    string begin;
    cin >> begin;
    
    if (begin == "Go" || begin == "go"){
        startGame();
    } else {
    while (begin != "Go" || begin != "go") {
        cout << "Try Again > ";
        string tryAgain;
        cin >> tryAgain;
        if (tryAgain == "Go" || tryAgain == "go"){
            startGame();
            break;
        }
    }
    }
    
    
} //end function
    
    


int main(int argc, const char * argv[]) {
    //start game
    introText();
    
}




/*
 Text file records
 Weapon choice
 Energy(inn/by foot)
 
 Combinations
 +Energy + Battle Axe = 90
 -Energy + Battle Axe = 50
 +Energy + Sword = 75
 -Energy + Sword = 25
 
 #read file
 
 ifstream file("/Users/alikesserwani/Desktop/test/weapon.txt");
 string content;

 while(file >> content) {
     cout << content;
 }
 
 
 */ 
