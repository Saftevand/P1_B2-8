#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **allocate_week(int Rows,int Cols)
{
  //Funktion der allokere plads til ugen
  int **week = (int **)malloc(Rows * sizeof(int *));
  int row;
  for (row = 0; row < Rows; row++)
  {
    week[row] = (int *)malloc(Cols * sizeof(int));
  }
  return week;
}

int free_week(int **week,int Rows)
{
  //Funktion der frigiver den allokerede plads til ugen
  int row;
  for(row = 0; row < Rows; row++)
  {
    free(week[row]);
  }
  free(week);
}

int *create_day(void)
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
  
  for( i = 0 ; i <= j ; i++ ) 
  {
    k = (rand() % 12);
    
    if(k == 0)
    {
      k += (rand() % 12);
    }
    day[i] = k;
  }
  return day;
}

void print_week(int Rows, int Cols, int **week)
{
  int i,j;
  for(i = 0; i < Rows; ++i)
  {
    for(j = 0; j < Cols; ++j)
    {
      printf("%d\t",week[i][j]);
    }
    printf("\n");
  }
}

int lenght_week(int **week)
{
  int lenght = 0, i, j, Rows = 8, Cols = 5;
  for(i = 0; i < Cols; ++i)
  {
    for(j = 0; j < Rows; ++j)
    {
      if(week[j][i] != 0)
      {
        lenght++;
      }
    }
  }
  return lenght;
}

int **create_week(int **week)
{
  int j, i;
  int *day;
    for (i = 0; i < 5; i++)
    {
      day = create_day();
      for(j = 0; j < 8; j++)
      {
        week[j][i] = * (day + j);
      }
    }
    return week;
}

int main( void )
{
  time_t t;
  int i,y,z = 35,h = 0;
  srand((unsigned) time(&t));
  int **week;
  week = create_week(allocate_week(8,5));
  free_week(week,8);
}