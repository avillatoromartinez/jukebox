/*This program runs a jukebox. In the jukebox, the user is allowed to select the following song choices in the menu. 
The program first displays the menu for the user, and once the song is selected, it reads the song's text file. 
There are five text files in total which hold the characters for each of the songs in the menu. 
These text files are opened and read once selected. */

#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(void) {
   printf("Welcome to Astrid Villatoro's Lyric Jukebox!\n");
   int t; // t = track
   
   //The Selection Menu

   printf("Please select a track from the list below: \n\n");
   printf("   Artist                 Song                   Album\n");
   printf("__________________________________________________________________________________\n");
   printf("1. Adele                  All Night Parking      30\n");
   printf("2. The Marias             Care For You           Care For You\n");
   printf("3. Steve Lacy             C U Girl               C U Girl\n");
   printf("4. Omar Apollo            Evergreen              Ivory\n");
   printf("5. The Neighbourhood      Stargazing             Chip Chrome and The Mono- Tones\n\n");
   printf("0. Quit\n> ");
  
   scanf("%d", &t); //user selection
   
   printf("Track selected: %d\n", t);
   
   //Song Files and Quit Option
   if(t == 1) {
      printf("Now play Adele  -  All Night Parking  -  30\n\n");
      // opening lyrics for opt. 1
      FILE * allNightParking;
      int display;

      allNightParking = fopen("villatoro_astrid_all_night_parking.txt", "r");
      while(1) {
	 display = fgetc(allNightParking);
	 
	 if(feof(allNightParking))
	   break;
	 printf("%c", display);
         usleep(100000);
	}
	sleep(1);
      fclose(allNightParking);
   }   
   
   if(t == 2) {
      printf("Now playing The Marias  -  Care For You  -  Care For You\n\n");
      //opening lyrics for opt 2
      FILE * careForYou;
      int display;

      careForYou = fopen("villatoro_astrid_care_for_you.txt", "r");
      
      while(1) {
	 display = fgetc(careForYou);
	 
	 if(feof(careForYou))
	   break;

	 printf("%c", display);
	 usleep(100000);
      }
	sleep(1);
      fclose(careForYou);
   }
   if(t == 3) {
	// opening opt 3
      printf("Now playing Steve Lacy  -  C U Girl  -  C U Girl\n\n");
      FILE * cUGirl;
      int display;

      cUGirl = fopen("villatoro_astrid_c_u_girl.txt", "r");
      
      while(1) {
	 display = fgetc(cUGirl);
	 
	 if(feof(cUGirl))
	   break;

	 printf("%c", display);
         usleep(100000);
      }
	sleep(1);
      fclose(cUGirl);
   }
   if(t == 4) {
	//opening opt 4
      printf("Now playing Omar Apollo  - Evergreen  -  Ivory\n\n");
      FILE * evergreen;
      int display;

      evergreen = fopen("villatoro_astrid_evergreen.txt", "r");
      
      while(1) {
	 display = fgetc(evergreen);
	 
	 if(feof(evergreen))
	   break;

	 printf("%c", display);
	 usleep(100000);
      }
	sleep(1);
      fclose(evergreen);
   }
   if(t == 5) {
	//opening opt 5
      printf("Now playing The Neighbourhood  -  Stargazing  -  Chip Chrome and The Mono- Tones\n\n");
      FILE * stargazing;
      int display;

      stargazing = fopen("villatoro_astrid_stargazing.txt", "r");
      
      while(1) {
	 display = fgetc(stargazing);
	 
	 if(feof(stargazing))
	   break;

	 printf("%c", display);
	 usleep(100000);
      }
      fclose(stargazing);
   }
   else {
      printf("\nThank you for choosing Astrid's Jukebox\n");
   }
   return 0;
}

