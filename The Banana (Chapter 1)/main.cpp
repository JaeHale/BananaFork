/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int
main()
{

  string banana, dude, confront, food, spell;
  int level, carabiners;
  carabiners = 0;
  food = "banana";
  cout << "Welcome to the game. You will have to make choices or something.\n";
  cout << "\n";
start:
  cout << "You wake up in a bed and look around. You are in a room in a motel.\n";
  cout << "On the dresser of the room, you see a banana.\n";
  cout << "\n";
  
eim:
  cout << "Do you [eat] it, [ignore] it, or [magic] it? \n";
  getline (cin, banana);
  cout << "\n";
  
  if (banana == "magic" && 4 < level)
    {
      cout << "You use your magic to turn the banana into a...\n";
      goto spells;
    }
  if (banana == "magic" && 4 == level)
    {
      cout << "Congrats! You are a high enough level to do magic.\n";
      level += 1;
      goto eim;
    }
  else if (banana == "magic" && 4 >= level)
    {
      cout << "Sorry, you are not a high enough level to do magic.\n";
      level += 1;
      goto eim;
    }
  if (banana == "eat")
    {
      cout << "You pick up the " << food << " from the dresser and eat it.\n";
      cout << "You look to your right and see someone standing at the doorway of the motel.\n";
      cout << "He looks at you and says, 'Dude did you eat my " << food << "?'\n";
	goto ny;
    }
  else if (banana == "ignore")
    {
      cout << "You instead decide to stare at the " << food << " instead of eating it.\n";
      cout << "You look to your right and see someone standing at the doorway of the motel.\n";
      cout << "He looks at you and says, 'Dude did you eat my " << food << "?'\n";
	goto ny;
    }
  else if (banana == "jack sux")
    {
      cout << "I HATE YOU, YOU ARE DUMB, YOU SUCK, YOU GET THE BAD ENDING LOLLOLOL, now u have to buy super cat adventure 3!!!!1!!\n";
      goto end;
    }
  else if (banana == "carabiner")
    {
	  goto carabiner;
    }
  else
    {
      cout << "What the heck, you didn't put in one of the options, try again.\n";
      goto eim;
    }

spells:
  getline (cin, spell);
  if (spell == "pineapple")
    {
      cout << "\n";
      cout << "There's not even a pineapple in this game, but okay.\n";
      food = "pineapple";
      goto eim;
    }
  else if (spell == "apple")
    {
      cout << "\n";
      cout << "What? An apple? I mean okay if you insist.\n";
      food = "apple";
      goto eim;
    }
  else if (spell == "glock")
    {
      cout << "\n";
      cout << "No need to flaunt your nationality that hard bud.\n";
      food = "glock";
      goto gunsi;
    }
  else if (spell == "gun")
    {
      cout << "\n";
      cout << "No need to flaunt your nationality that hard bud.\n";
      food = "gun";
      goto gunsi;
    }
  else if (spell == "bomb")
    {
      cout << "\n";
      cout << "Oh man that sucks for you...\n";
      food = "bomb";
      goto bomb;
    }
  else if (spell == "carabiner" && carabiners == 1)
    {
      cout << "\n";
      goto banana;
    }
  else if (spell == "carabiner" && carabiners == 0)
    {
      cout << "Sorry, you do not have a carabiner yet.\n";
      goto spells;
    }  
  else
    {
      food = spell;
      cout << "\n";
      cout << "Poof! The banana is transformed into a " << food << ".\n";
      goto eim;

    }

ny:
  cout << "\n";
  cout << "Do you say [no] or [yes] to him? \n";
  getline (cin, dude);
  cout << "\n";

  if (dude == "no" && banana == "eat")
    {
      cout << "'Why are you lying?' he says, 'I saw you eat it! I AM GOING TO GET MY REVENGE.'\n";
    }
  else if (dude == "no" && banana == "ignore")
    {
      cout << "'Oh ok, thanks for letting me know, I'm actually blind so I couldn't tell.'\n";
    }
  else if (dude == "yes" && banana == "eat")
    {
      cout << "'WHY WOULD YOU EAT MY PRICELESS FAMILY HEIRLOOM??? I AM GOING TO GET MY REVENGE.'\n";
    }
  else if (dude == "yes" && banana == "ignore")
    {
      cout << "'Why would you say yes? I can see that you haven't eaten it, are you dumb or something?'\n";
      cout << "\n";
      cout << "You then went home because you are depressed because you are blind\n";
      cout << "BAD ENDING 1\n";
      goto end;
    }
  else
    {
      cout << "You did not give a valid answer, what are you doing?\n";
      goto ny;
    }
frend:
  cout << "Do you [run] away or [fight] him?\n";
  getline (cin, confront);
  cout << "\n";

  cout << "\n";
  if (confront == "run" && banana == "eat")
    {
      cout << "You run away from the man, but end up tripping and dying.\n";
      cout << "BAD ENDING 2\n";
      goto end;
    }
  else if (confront == "run" && banana == "ignore")
    {
      cout << "'What? Why are you running? You didn't do anything, stop running.' As you ran you tripped and died.\n";
      cout << "BAD ENDING 3\n";
      goto end;
    }
  else if (confront == "fight" && banana == "eat")
    {
      cout << "You tried to fight, but the man was so angry that he killed you.\n";
      cout << "BAD ENDING 4\n";
      goto end;
    }
  else if (confront == "fight" && banana == "ignore")
    {
      cout << "The man was so confused on why you suddenly start to fight him for no reason that you were able to beat him.\n";
      cout << "GOOD ENDING 1\n";
      goto end;
    }
  else
    {
      cout << "COME ON MAN, put in a valid answer!!\n";
      goto frend;
    }

gunsi:
  cout << "On the dresser of the room, you see a " << food << ".\n";
  cout << "Do you [shoot] it, or [ignore] it? \n";
  getline (cin, banana);
  cout << "\n";
  
  if (banana == "shoot")
    {
      cout << "You pick up the " << food << " from the dresser and shoot it.\n";
      cout << "You look to your right and see someone standing at the doorway of the motel.\n";
      cout << "He looks at you and says, 'Dude did you shoot my " << food << "?'\n";
      goto gunyn;
    }
  else if (banana == "ignore")
    {
      cout << "You instead decide to stare at the " << food << " instead of shooting it.\n";
      cout << "You look to your right and see someone standing at the doorway of the motel.\n";
      cout << "He looks at you and says, 'Dude did you shoot my " << food << "?'\n";
      goto gunyn;
    }
 else if (banana == "jack sux")
    {
      cout << "I HATE YOU, YOU ARE DUMB, YOU SUCK, YOU GET THE BAD ENDING LOLLOLOL, now u have to buy super cat adventure 3!!!!1!!\n";
      goto end;
    }
  else
    {
      cout << "What the heck, you didn't put in one of the options, try again.\n";
      goto gunsi;
    }

gunyn:
  cout << "\n";
  cout << "Do you say [no] or [yes] to him? \n";
  getline (cin, dude);
  cout << "\n";
  
  if (dude == "no" && banana == "shoot")
    {
      cout << "'Why are you lying?' he says, 'I heard you shoot it! I AM GOING TO TAKE YOU DOWN.'\n";
    }
  else if (dude == "no" && banana == "ignore")
    {
      cout << "'Oh ok, thanks for letting me know, I'm actually blind so I couldn't tell.'\n";
    }
  else if (dude == "yes" && banana == "shoot")
    {
      cout << "'WHY WOULD YOU SHOOT MY PRICELESS FAMILY GLOCK??? I AM GOING TO GET MY REVENGE.'\n";
    }
  else if (dude == "yes" && banana == "ignore")
    {
      cout << "'Why would you say yes? I can see that you haven't touched, it are you dumb or something?'\n";
      cout << "\n";
      cout << "You then went home because you are depressed because you are dumb\n";
      cout << "BAD ENDING 5\n";
      goto end;
    }
  else
    {
      cout << "You did not give a valid answer, what are you doing?\n";
      goto gunyn;
    }
gunfrend:
  cout << "Do you [run] away or [fight] him?\n";
  getline (cin, confront);
  cout << "\n";
  
  if (confront == "run" && banana == "shoot")
    {
      cout << "You run away from the man, but end up tripping and dying.\n";
      cout << "BAD ENDING 6\n";
      goto end;
    }
  else if (confront == "run" && banana == "ignore")
    {
      cout << "'What? Why are you running? You didn't do anything, stop running.' As you ran you tripped and died.\n";
      cout << "BAD ENDING 7\n";
      goto end;
    }
  else if (confront == "fight" && banana == "shoot")
    {
      cout << "You shot the gun but missed the man. The man was then so angry that he killed you.\n";
      cout << "BAD ENDING 8\n";
      goto end;
    }
  else if (confront == "fight" && banana == "ignore")
    {
      cout << "You took the man by suprise, shooting at him and actually hitting him.\n";
      cout << "GOOD ENDING 2\n";
      goto end;
    }
  else
    {
      cout << "COME ON MAN, put in a valid answer!!\n";
      goto gunfrend;
    }
bomb:
    cout << "The banana transforms into a bomb, which promptly blows up, instantly killing you.\n";
    cout << "BAD ENDING 9\n";
    goto end;
banana:
    cout << "You wake up, for real this time. You see the scientists that have been forging this reality for you. They put you back under, and the cycle continues anew.\n";
    cout << "TRUE ENDING\n";
    goto end;
    
carabiner:
  cout << "You reach into your pocket and pull out a carabiner. It has the words 'Fullersberg Woods' enscribed on it. It is gold.\n";
  cout << "You put the carabiner back into your pocket.\n";
  cout << "\n";
  carabiners = 1;
  goto start;    

end:
  return 0;
}

// Billy and his mom are preparing to go to the store. Before they go, Billy has to eat something.
// Should Billy eat [Apple] [donut] or [nothing]?

//(apple) Billy eats the apple as he and his mom











