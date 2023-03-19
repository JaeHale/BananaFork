/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  string place, death, look;
  int timeremaining, wood, glass, nail, carabiner, timewait;
  timeremaining = 10, wood = 0, glass = 0, nail = 0, carabiner = 0, timewait = 0;
  cout << "Welcome to the game. You will have to make choices or something.\n";
  cout << "\n";
  
  cout << "You wake up on the floor and look around. You are in a small basement.\n";
  cout << "You remember what has happened.\n";
  cout << "The man with the heirloom, and his sister.\n";
  cout << "You thought that the police would never find them, but they did and now you are on the run.\n";
  cout << "That's why you are here. The police are coming to your location. They will be here in 10 minutes. You need to escape.\n";
  cout << "\n";
  
dwc:
  if (timeremaining <= 0)
    {
      goto timeup;
    }  
  cout << "Do you try the [door], the [window], the [closet], or do you [wait]?\n";
filler:  
  place = "";
  getline (cin, place);
  cout << "\n";
  if (place == "door")
    {
      if (timeremaining <= 0)
        {
          goto timeup;
        }      
      cout << "You fumble with the door for 5 minutes, but realize that it has been locked from the other side.\n";
      cout << "You do however, find a piece of wood that would be sharp enough to pierce a body.\n";
      cout << "\n";
      timeremaining -= 5;
      wood = 1;
      goto dwc;
    }
  if (place == "window")
    {
      if (timeremaining <= 0)
        {
          goto timeup;
        }      
      cout << "You fumble with the window for 5 minutes, but realize that it has been locked from the other side.\n";
      cout << "You do however, find a shard of glass that would be sharp enough to pierce a body.\n";
      cout << "\n";
      timeremaining -= 5;
      glass = 1;
      place = "";
      goto dwc;
    }  
  if (place == "closet")
    {
      if (timeremaining <= 0)
        {
          goto timeup;
        }      
      cout << "Do you [look] through or [wait] in the closet?\n";
      getline (cin, look);
      cout << "\n";
      if (look == "look")
        {
          cout << "You look through the closet for 5 minutes.\n";
          cout << "You find a nail that would be sharp enough to pierce a body.\n";
          cout << "\n";
          timeremaining -= 5;
          nail = 1;
          place = "";
          goto dwc;          
        }
      if (look == "wait")
        {
          goto wait;
        }
      
    }
  if (place == "wait")
    {
      goto wait;
    }
  if (place == "")
    {
      if (timeremaining <= 0)
        {
          goto timeup;
        }
      cout << "Do you try the [door], the [window], the [closet], or do you [wait]?\n";
      goto filler;
    }
  if (place == "carabiner")
    {
      goto carabiner;
    }  
  else
    {
      cout << "Sorry, that is not an option.\n";
      cout << "\n";
      goto dwc;
    }


timeup:    
  cout << "The police are here, but you have time to do one more thing.\n";
  if (wood == 0 && glass == 0 && nail == 0 && carabiner == 0)
    {
      cout << "Do you [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "give up")
        {
          goto arrest;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }    
  if (wood == 1 && glass == 0 && nail == 0 && carabiner == 0)
    {
      cout << "Do you use the [wood], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "wood")
        {
          goto wooddie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 1 && nail == 0 && carabiner == 0)
    {
      cout << "Do you use the [glass], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "glass")
        {
          goto glassdie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 0 && nail == 1 && carabiner == 0)
    {
      cout << "Do you use the [nail], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "nail")
        {
          goto naildie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 0 && nail == 0 && carabiner == 1)
    {
      cout << "Do you use the [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 1 && glass == 0 && nail == 0 && carabiner == 1)
    {
      cout << "Do you use the [wood], [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "wood")
        {
          goto wooddie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 1 && nail == 0 && carabiner == 1)
    {
      cout << "Do you use the [glass], [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "glass")
        {
          goto glassdie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 0 && nail == 1 && carabiner == 1)
    {
      cout << "Do you use the [nail], [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "nail")
        {
          goto naildie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 1 && glass == 1 && nail == 0 && carabiner == 1)
    {
      cout << "Do you use the [wood], [glass], [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "wood")
        {
          goto wooddie;
        }
      if (death == "glass")
        {
          goto glassdie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 1 && glass == 0 && nail == 1 && carabiner == 1)
    {
      cout << "Do you use the [wood], [glass], [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "wood")
        {
          goto wooddie;
        }
      if (death == "nail")
        {
          goto naildie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 1 && nail == 1 && carabiner == 1)
    {
      cout << "Do you use the [glass], [nail], [carabiner], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "glass")
        {
          goto glassdie;
        }
      if (death == "nail")
        {
          goto naildie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "carabiner")
        {
          goto carabinerdeath;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 1 && glass == 1 && nail == 0 && carabiner == 0)
    {
      cout << "Do you use the [wood], [glass], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "wood")
        {
          goto wooddie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "glass")
        {
          goto glassdie;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 0 && glass == 1 && nail == 1 && carabiner == 0)
    {
      cout << "Do you use the [glass], [nail], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "glass")
        {
          goto glassdie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "nail")
        {
          goto naildie;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
  if (wood == 1 && glass == 0 && nail == 1 && carabiner == 0)
    {
      cout << "Do you use the [wood], [nail], or [give up]?\n";
      getline (cin, death);
      cout << "\n";
      if (death == "wood")
        {
          goto glassdie;
        }
      else if (death == "give up")
        {
          goto arrest;
        }
      else if (death == "nail")
        {
          goto naildie;
        }
      else
        {
          cout << "Sorry, that is not an option.\n";
          cout << "\n";
          goto timeup;
        }
    }
    
wait:
  cout << "How long (in minutes) do you wait for?\n";
  cin >> timewait;
  if (timewait >= 11)
    {
      cout << "\n";
      cout << "That number is too big dumbass, try again.\n";
      cout << "\n";
      goto wait;
    }
  timeremaining -= timewait;
  cout << "\n";
  cout << "You wait for " << timewait << " minutes.\n";
  timewait = 0;
  cout << "\n";
  goto filler;
      
carabiner:
  cout << "You reach into your pocket and pull out a carabiner. It has the words 'Fullersberg Woods' enscribed on it. It is gold.\n";
  cout << "You put the carabiner back into your pocket.\n";
  cout << "\n";
  carabiner = 1;
  goto dwc;
  
wooddie:    
  cout << "You pull out the piece of wood and stab yourself with it.\n";
  cout << "The police arrive at the basement and realize that you have already died.\n";
  cout << "ENDING 1\n";
  return 0;
glassdie:
  cout << "You pull out the shard of glass and stab yourself with it.\n";
  cout << "The police arrive at the basement and realize that you have already died.\n";
  cout << "ENDING 2\n";
  return 0;
naildie:
  cout << "You pull out the nail and stab yourself with it.\n";
  cout << "The police arrive at the basement and realize that you have already died.\n";
  cout << "ENDING 3\n";
  return 0;
arrest:
  cout << "You have nothing to do but wait as the police descend on the house.";
  cout << "The police arrive at the basement and arrest you.\n";
  cout << "ENDING 4\n";
  return 0;
carabinerdeath:
  cout << "You pull out the carabiner and realize that it has been used for evil.\n";
  cout << "You throw the carabiner at the wall, and it cracks like plastic.\n";
  cout << "The basement glitches and then the illusion is shattered completely.\n";
  cout << "You can see hazy outlines of people behind the glass, and they scramble to another corner of the room.\n";
  cout << "The screens turn back on and the cycle repeats anew.\n";
  cout << "TRUE ENDING\n";
  return 0;
}

//Evan Zapata is hot
