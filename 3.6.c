#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float a,b,c,s1,s2,s;
    int i;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    scanf("%f %f", &x3, &y3);
    scanf("%f %f", &x4, &y4);

    float massi_dlin[3];

    massi_dlin[0] = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    massi_dlin[1] = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    massi_dlin[2] = sqrt(pow((x4-x1),2)+pow((y4-y1),2));
 //   printf("%f %f %f", massi_dlin[0], massi_dlin[1],massi_dlin[2]);



    float big;
    big = 0;
    for (i = 0; i<=2; i+=1)
    {
        if (massi_dlin[i] > big)
        {
            big = massi_dlin[i];
        }
    }
//printf("%f", big);
    s = 1;
    for (i = 0; i<=2; i++)
    {
        if (massi_dlin[i]!=big)
        {
            s = s*massi_dlin[i];
           // printf("%f", s);
        }
    }
    printf("%f", s);
 //   if (a<b)
  //  {
  //      if (a<c)
  //      {
  //          s1=a;
  //          if (b<c)
  //          {   s2=b;
  //          }
  //          else
  //          {   s2=c;
  //          }
   //     }
  //      else
  //      {   s1=c; s2=a;
  //      }
  //  }
  //  else
 //   {   if (a<c)
  //      {   s1=b;s2=a;
  //      }
   //     else
  //      {   s1=c; s2=b;
  //      }
  //  }

  //      s=s1*s2;

    return 0;
}
