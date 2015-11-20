#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *mathiasfunc(void)
{
  int i = 0, n = 0, j = 0, l = 0;
  int static k;
  int static day[8];
  j = (rand() % 8);
  if(j < 4)
  {
    j += 5;
  }
  else if(j == 4)
  {
    j += (1 + (rand() % 3));
  }
  
  for( i = 1 ; i <= j ; i++ ) 
  {
    k = (rand() % 11);
    
    if(k == 0)
    {
      k += (rand() % 11);
    }
    day[i] = k;
  }
  return day;
}

int *create_scheme(void)
{
  int n = 1, j, i, size = 0, z = 0, lenght_day = 0;
  int danish, english, history, religion, math, nature;
  int gym, music, pictures, homework, supported_teach;
  int *day;
  int static week[8][5];
    homework = 0;
    danish = 0, english = 0, history = 0, religion = 0, math = 0, nature = 0;
    gym = 0, music = 0, pictures = 0, supported_teach = 0;

    for (i = 0; i < 5; i++)
    {
      day = mathiasfunc();
      for(j = 0; j < 8; j++)
      {
        week[j][i] = * (day + j);
        if(week[j][i] != 0)
          lenght_day++;
        switch(week[j][i])
        {
          case 0:
            break;
          case 1:
            danish++;
            break;
          case 2:
            english++;
            break;
          case 3:
            history++;
            break;
          case 4:
            religion++;
            break;
          case 5:
            math++;
            break;
          case 6:
            nature++;
            break;
          case 7:
            gym++;
            break;
          case 8:
            music++;
            break;
          case 9:
            pictures++;
            break;
          case 10:
            homework++;
            break;
          case 11:
            supported_teach++;
            break;
        }
      }
    }
    return week;
}

int main( void )
{
  time_t t;
  int i,y;
  int week[8][5];
  srand((unsigned) time(&t));
  week = create_scheme();
  for(i = 0; i < 8; ++i)
  {
    for(y = 0; y < 5; ++y)
    {
      printf("%d\n",week[y][i]);
    }
  }
}