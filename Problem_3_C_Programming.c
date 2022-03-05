#include<stdio.h>
#include<stdlib.h>
int searchElement (int[]);
int displayElement (int[]);
int
main ()
{
  int Choice,res, input, array[]= { 1, 5, 4, 8, 9, 2, 0, 6, 11, 7 };
  while (1)
    {
      printf ("\n1:Search Element\n2:Display List\n3:Exit\n");
      scanf ("%d", &Choice);
      switch (Choice)
    	{
	case 1:
	   res=searchElement (array);
	  if(res==1)
	  {
	      printf(" Yes\n");
	  }
	  else
	  {
	      printf(" No\n");
	  }
	  break;
	case 2:
	  displayElement (array);
	  break;
	case 3:
	  exit (0);

	default:
	  printf ("\nInvalid Choice");
    	}
    }
  return 0;
}


int searchElement(int array[])
{
    int input,flag=0;
    printf("Enter Element to Find \n");
    scanf("%d",&input);
    for(int i=0;i<10;i++)
    {
        if(array[i]==input)
        {
            flag=1;
            break;
        }
    }
     return flag;
}

int displayElement (int array[])
{
   printf("Elements in the array:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",array[i]);
    }
}
