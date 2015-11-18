#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dankfunc(){
  int n = 1, j, i, week[8][5], *day;
  for (i = 0; i <= 4; i++)
  {
    day = mathiasfunc();
    for(j=0; j <= 7; j++)
    {
      week[j][i] = week[*(day+j)][i];
    }
  }
  while (n != 0)
  {
    j = 0;
    if (strlen(week[0])+strlen(week[1])+strlen(week[2])+strlen(week[3])+strlen(week[4]) = 30)
    {
      for(i=0; i <=4; i++)
      {
        if (strncmp(week[i]) == 1)
          j++;
      }
      printf("%d",j);
    }
    else
    {
      n = 1;
    }
  }
  return week;
}

int * mathiasfunc()
{
  int day[8] = {1,1,3,4,5,2};
  return day;
}


int main( void )
{
  dankfunc();
} 


