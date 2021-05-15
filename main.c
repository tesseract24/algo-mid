#include<stdio.h>

int main() {

    int char_count, newLines, dots, comma, sasveniNishnebi;


    newLines = 0;
    dots = 0;
    comma = 0;
    sasveniNishnebi = 0;


    if((char_count = getchar()) == EOF)
    {
      if(feof(stdin))
      {
        perror("\n end of file");
      }
      if(ferror(stdin))
      {
        perror("getchar error");
      }
    
    }
    while ((char_count = getchar()) != EOF) {
        if (char_count == ',')
            ++comma;
        if (char_count == '.')
            ++dots;
        if (char_count == '\n')
        {
            ++newLines;
            sasveniNishnebi = dots + comma;
        }
    }


    if (newLines > 1){
      printf("\ncomma: %d\ndots: %d:\nboth together: %d", comma, dots,sasveniNishnebi);
    }return 0;

}


void copy(char to[], char from[]){
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
} 
