#include <stdio.h>
#include <stdlib.h>

int generate_day();
int generate_week();
void print_week(int week[5][8]);

int main(void)
{
  time_t t;
  srand((unsigned) time(&t));
  printf("Mandag\n");

  generate_day();
}

int generate_day()
{
  int i = 0, n = 0, j = 0, l = 0;
  int static k;
  int day[8];
    
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

    printf("%d\n", day[i]);
  }
  
  return day[8];
}

void print_week( int week[5][8])
{
  int i, j;
  
  for(i = 0; i <= 5; i++)
  {
    for(j = 0; j <= 8; j++)
    {
      printf("%d", week[i][j]);
    }
  }
}

/*
void print_day(int day[])
{
  int i;
  for( i = 0 ; i < 8 ; i++ )
  {
    switch(day[i])
    {
      case 0:
        printf("Dansk\n");
      break;
      case 1:
        printf("Engelsk\n");
      break;
      case 2:
        printf("Religion\n");
      break;
      case 3:
        printf("Samfundsfag\n");
      break;
      case 4:
        printf("Fysik\n");
      break;
      case 5:
        printf("Kemi\n");
      break;
      case 6:
        printf("Natur Teknik\n");
      break;
      case 7:
        printf("Biologi\n");
      break;
      default:
        
      break;
    }
  }
}*/