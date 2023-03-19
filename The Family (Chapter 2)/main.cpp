/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  string body, place, know, saidplace, yn, yn2;
  int carabiners, level, notlook;
  carabiners = 0, notlook = 0, level = 0;
  cout << "Welcome to the game. You will have to make choices or something.\n";
  cout << "\n";
  
  cout << "You wake up in a bed and look around. You are in a room in a motel.\n";
  cout << "On the floor of the room, there is a dead body.\n";
  cout << "Everything comes back to you as you remember...\n";
  cout << "The food...\n The man...\n  The magic...\n";
  cout << "You realize you need to hide this body.\n";
  cout << "\n";    

cbb:
  cout << "Do you hide the body in the [closet], under the [bed], or in the [bathroom]?\n";  
  getline (cin, body);
  cout << "\n";
  
  if (body == "magic" && 4 < level)
    {
      cout << "You teleport the body to...\n";
      getline (cin, place);
      goto teleport;
    }
  else if (body == "magic" && 4 == level)
    {
      cout << "Congrats! You are a high enough level to do magic.\n";
      level += 1;
      goto cbb;
    }
  else if (body == "magic" && 4 >= level)
    {
      cout << "Sorry, you are not a high enough level to do magic.\n";
      level += 1;
      goto cbb;
    }
  if (body == "closet")
    {
      place = "closet";
      goto yn;
    }
  else if (body == "bathroom")
    {
      place = "bathroom";
      goto yn;
    }
  else if (body == "bed")
    {
      place = "bed";
      goto yn2;
    }
  else if (body == "carabiner")
    {
      goto carabiner;
    }
  else
    {
      cout << "That's not an option. Try again.\n";
      cout << "\n";
      goto cbb;
    }

yn:     
  cout << "You want to put the body in the " << place << "?\n";
  cout << "[yes] or [no]\n";
  getline (cin, yn);
  
  if (yn == "yes")
    {
      goto where;
    }
  if (yn == "no")
    {
      goto cbb;
    }
  else
    {
      cout << "Type yes or no idiot.";
      goto yn;
    }

yn2:     
  cout << "You want to put the body under the " << place << "?\n";
  cout << "[yes] or [no]\n";
  getline (cin, yn);
  
  if (yn == "yes")
    {
      goto where;
    }
  if (yn == "no")
    {
      goto cbb;
    }
  else
    {
      cout << "\n";
      cout << "Type yes or no idiot.\n";
      goto yn;
    }
    
where:
  cout << "\n";
  cout << "A woman comes into the room. 'Where is my brother?' she asks.\n";    
  cout << "Do you [know] or [not know] where her brother is?\n";
  getline (cin, know);
  cout << "\n";
  
  if (know == "know")
    {
      goto know;
    }
  else if (know == "not know")
    {
      goto notknow;
    }
  else
    {
      cout << "That's not a valid answer stupid.\n";
      cout << "\n";
      goto where;
    }

know:
    cout << "You tell the woman you know where her brother is.\n";
    cout << "'Where is he?' she asks.\n";
    cout << "Is her brother in the [closet], under the [bed], or in the [bathroom]? (You can lie to her.)\n";
    getline (cin, saidplace);
    cout << "\n";

    if (saidplace == "closet" && place == "closet")
      {
        cout << "You show the woman the closet and tell her that he is in there.\n";
        cout << "She pulls the body out from the closet and yells,'You killed my brother, now I'm going to kill you!'\n";
        cout << "\n";
        cout << "The woman shoots you and you die.\n";
        cout << "BAD ENDING 1\n";
        goto end;
      }
    else if (saidplace == "closet" && place != "closet")
      {
        cout << "You show the woman the closet and tell her that he is in there.\n";
        cout << "She opens the closet, but there is nothing there. 'Why would you lie to me?' she asks. 'Now I'm angry!' she yells.\n";
        cout << "\n";
        cout << "The woman shoots you and you die.\n";
        cout << "BAD ENDING 2\n";
        goto end;
      }        
    else if (saidplace == "bed" && place == "bed")
      {
        cout << "You show the woman the bed and tell her that he is under there.\n";
        cout << "She pulls the body out from under the bed and yells,'You killed my brother, now I'm going to kill you!'\n";
        cout << "\n";
        cout << "The woman shoots you and you die.\n";
        cout << "BAD ENDING 3\n";
        goto end;
      }
    else if (saidplace == "bed" && place != "bed")
      {
        cout << "You show the woman the bed and tell her that he is under there.\n";
        cout << "She reaches under the bed, bu there is nothing there. 'Why would you lie to me?' she asks. 'Now I'm angry!' she yells.\n";
        cout << "\n";
        cout << "The woman shoots you and you die.\n";
        cout << "BAD ENDING 4\n";
        goto end;
      }
    else if (saidplace == "bathroom" && place == "bathroom")
      {
        cout << "You show the woman the bathroom and tell her that he is in there.\n";
        cout << "She pulls the body out from the bathroom and yells,'You killed my brother, now I'm going to kill you!'\n";
        cout << "\n";
        cout << "The woman shoots you and you die.\n";
        cout << "BAD ENDING 5\n";
        goto end;
      }
    else if (saidplace == "bathroom" && place != "bathroom")
      {
        cout << "You show the woman the bathroom and tell her that he is in there.\n";
        cout << "She  opens the bathroom, but there is nothing there. 'Why would you lie to me?' she asks. 'Now I'm angry!' she yells.\n";
        cout << "\n";
        cout << "The woman shoots you and you die.\n";
        cout << "BAD ENDING 6\n";
        goto end;
      }
    else if (saidplace == "carabiner" && carabiners == 1)
      {
        cout << "You tell the woman that her brother is in the bathroom. When she has her back turned, you open the carabiner, stab her with it, and she dies.\n";
        cout << "\n";
        cout << "You check out of the motel and leave the duos' bodies in the " << place << ".\n";        
        cout << "GOOD ENDING 1\n";
        goto end;
      }
    else
      {
        cout << "Sorry, that is not a valid place, try again.\n";
        cout << "\n";
        goto know;
      }
      
notknow:
    cout << "You tell the woman you don't know where her brother is.\n";
    cout << "'Do you mind if I have a look around then?' she asks.\n";
    goto look;

look:
    cout << "Can she [look] or [not look]?\n";
    getline (cin, yn2);
    cout << "\n";
    
    if (notlook == 2)
      {
        cout << "The woman gets impatient and shoots you. You die.\n";
        cout << "BAD ENDING 7\n";
        goto end;
      }    
    if (yn2 == "look")
      {
        if (place == "closet")
          {
            cout << "The woman looks in the closet and sees the dead body of her brother.\n";
            cout << "She pulls the body out from the closet and yells,'You killed my brother, now I'm going to kill you!'\n";
            cout << "\n";
            cout << "The woman shoots you and you die.\n";
            cout << "BAD ENDING 8";
            goto end;
          }
        else if (place == "bed")
          {
            cout << "The woman looks in the closet, but finds nothing. She then looks under the bed and sees the dead body of her brother.\n";
            cout << "She pulls the body out from under the bed and yells,'You killed my brother, now I'm going to kill you!'\n";
            cout << "\n";
            cout << "The woman shoots you and you die.\n";
            cout << "BAD ENDING 9";
            goto end;
          }
        else if (place == "bathroom")
          {
            cout << "The woman looks in the closet, but finds nothing. She then looks under the bed, but finds nothing again.\n"; 
            cout << "She finally looks in the bathroom and sees the dead body of her brother.\n";
            cout << "She pulls the body out from the bathroom and yells,'You killed my brother, now I'm going to kill you!'\n";
            cout << "\n";
            cout << "The woman shoots you and you die.\n";
            cout << "BAD ENDING 10";
            goto end;
          }
        else if (place != "closet" && place != "bed" && place != "bathroom")
          {
            cout << "The woman looks in the closet, but finds nothing. She then looks under the bed, but finds nothing again.\n";
            cout << "She finally looks in the bathroom, but finds nothing there. This is because of course, the brother's body is in " << place <<",\n";
            cout << "but the woman doesn't know that.\n";
            cout << "'I just can't believe I my brother is missing!' the woman says. You wish her good luck and she\n";
            cout << "apologises for the trouble.\n";
            cout << "\n";
            cout << "The woman leaves to got look for her brother elsewhere.\n";
            cout << "GOOD ENDING 2";
            goto end;
          }
      }
    else if (yn2 == "not look")
      {
        cout << "'Please?' the woman says, 'I'm so worried about my brother.'\n";
        cout << "\n";
        notlook += 1;
        goto look;
      }
    else
      {
        cout << "That is not one of the options you incompetent nincompoop.\n";
        cout << "\n";
        goto look;
      }

teleport:
  cout << "\n";
  cout << "Poof! The body is teleported to " << place << "\n";
  goto where;
  
carabiner:
  cout << "You reach into your pocket and pull out a carabiner. It has the words 'Fullersberg Woods' enscribed on it. It is gold.\n";
  cout << "You put the carabiner back into your pocket.\n";
  cout << "\n";
  carabiners = 1;
  goto cbb;

end:  
  return 0;
}

//Peter is obese

