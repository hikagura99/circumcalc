#include <stdio.h>
int main()
{
  float radius = 0, diameter = 0, circumference = 0, area = 0;
  const float pi = 3.14159f;
  char state = 'n';
  char unit1 = 0, unit2 = 0;

  while (state != 'y'){
        printf("Input the diameter of the circle (Use a . for the floating point): ");
        scanf("%f", &diameter);
        printf("\nWhat's the measure unit (i.e. cm)? ");
        getchar();
        scanf("%c%c", &unit2, &unit1);

      while (diameter != 0.0f){{
        if (unit1 == '\n'){
          printf("\nSubmitted diameter is %f%c, is it correct? ??(y\\n??) ", diameter, unit2);
          scanf("%c", &state);}
        else {
            printf("\nSubmitted diameter is %f%c%c, is it correct? ??(y\\n??) ", diameter, unit2,
                                                                                            unit1);
          getchar();
          scanf("%c", &state);}}

       if (state == 'n'){
          diameter = 0.0f;
          continue;}

       else if (state == 'y'){
           radius        =       diameter/2;
           circumference =      2*radius*pi;
           area          = pi*radius*radius;
          if (unit1 == '\n'){
            printf("\nThe circumference is %.10f%c.\nThe area is %.10f%c².\n",
                                                  circumference, unit2, area, unit2);
            return 0;}

          else{
           printf("\nThe circumference is %.10f%c%c.\nThe area is %.10f%c%c².\n", circumference,
                                                                unit2, unit1, area, unit2, unit1);
           return 0;}
       }

      else {
          printf("\nInvalid input: please enter either \"y\" or \"n\".\n");
          state = 'n';
          continue;}
      }
  }
}

