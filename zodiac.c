#include<stdio.h>

void main()
{
  int n,i;
   char z[100];
  printf("Enter your name: ");
  scanf("%s",&z);
  printf("Hey,%s!\n",z);
  printf("Which is your birth month:\n");
  printf("1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December\n");
  scanf("%d",&n);
  switch(n)
  {
  case 1:
  {
    int a,c=0;
    printf("Enter your birth date:\n");
    scanf("%d",&a);
    int b[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    for(int i=0;i<19;i++)
    {
      if(a==b[i])
      {
        c++;
      }
    }
    if(c==1)
    {
      printf("Your Zodiac Sign is Capricorn!");
    }
    else
    {
      printf("Your Zodiac Sign is Aquarius!");
    }
  }
  break;
case 2:
  {
    int d,e=0;
    printf("Enter your birth date:\n");
    scanf("%d",&d);
    int f[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    for(int i=0;i<18;i++)
    {
      if(d==f[i])
      {
        e++;
      }
    }
    if(e==1)
    {
      printf("Your Zodiac Sign is Aquarius!");
    }
    else
    {
      printf("Your Zodiac Sign is Pisces!");
    }
  }
  break;
case 3:
  {
    int mr,ch=0;
    printf("Enter your birth date:\n");
    scanf("%d",&mr);
    int mar[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<20;i++)
    {
      if(mr==mar[i])
      {
        ch++;
      }
    }
    if(ch==1)
    {
      printf("Your Zodiac Sign is Pisces!");
    }
    else
    {
      printf("Your Zodiac Sign is Aries!");
    }
  }
break;
case 4:
  {
    int ap,il=0;
    printf("Enter your birth date:\n");
    scanf("%d",&ap);
    int apr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    for(int i=0;i<19;i++)
    {
      if(ap==apr[i])
      {
        il++;
      }
    }
    if(il==1)
    {
      printf("Your Zodiac Sign is Aries!");
    }
    else
    {
      printf("Your Zodiac Sign is Taurus!");
    }
  }
break;
  case 5:
  {
    int ma,ya=0;
    printf("Enter your birth date:\n");
    scanf("%d",&ma);
    int may[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<20;i++)
    {
      if(ma==may[i])
      {
        ya++;
      }
    }
    if(ya==1)
    {
      printf("Your Zodiac Sign is Taurus!");
    }
    else
    {
      printf("Your Zodiac Sign is Gemini!");
    }
  }
break;
  case 6:
  {
    int ju,un=0;
    printf("Enter your birth date:\n");
    scanf("%d",&ju);
    int ne[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<20;i++)
    {
      if(ju==ne[i])
      {
        un++;
      }
    }
    if(un==1)
    {
      printf("Your Zodiac Sign is Gemini!");
    }
    else
    {
      printf("Your Zodiac Sign is Cancer!");
    }
  }
break;
  case 7:
  {
    int jul,ul=0;
    printf("Enter your birth date:\n");
    scanf("%d",&jul);
    int ly[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    for(int i=0;i<22;i++)
    {
      if(jul==ly[i])
      {
        ul++;
      }
    }
    if(ul==1)
    {
      printf("Your Zodiac Sign is Cancer!");
    }
    else
    {
      printf("Your Zodiac Sign is Leo!");
    }
  }
break;
  case 8:
  {
    int au,gu=0;
    printf("Enter your birth date:\n");
    scanf("%d",&au);
    int st[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    for(int i=0;i<22;i++)
    {
      if(au==st[i])
      {
        gu++;
      }
    }
    if(gu==1)
    {
      printf("Your Zodiac Sign is Leo!");
    }
    else
    {
      printf("Your Zodiac Sign is Virgo!");
    }
  }
break;
  case 9:
  {
    int sep,temp=0;
    printf("Enter your birth date:\n");
    scanf("%d",&sep);
    int ber[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    for(int i=0;i<23;i++)
    {
      if(sep==ber[i])
      {
        temp++;
      }
    }
    if(temp==1)
    {
      printf("Your Zodiac Sign is Virgo!");
    }
    else
    {
      printf("Your Zodiac Sign is Libra!");
    }
  }
break;
  case 10:
  {
    int oct,to=0;
    printf("Enter your birth date:\n");
    scanf("%d",&oct);
    int er[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    for(int i=0;i<22;i++)
    {
      if(oct==er[i])
      {
        to++;
      }
    }
    if(to==1)
    {
      printf("Your Zodiac Sign is Libra!");
    }
    else
    {
      printf("Your Zodiac Sign is Scorpio!");
    }
  }
break;
  case 11:
  {
    int no,vo=0;
    printf("Enter your birth date:\n");
    scanf("%d",&no);
    int w[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    for(int i=0;i<21;i++)
    {
      if(no==w[i])
      {
        vo++;
      }
    }
    if(vo==1)
    {
      printf("Your Zodiac Sign is Scorpio!");
    }
    else
    {
      printf("Your Zodiac Sign is Sagittarius!");
    }
  }
break;
  case 12:
  {
    int de,ce=0;
    printf("Enter your birth date:\n");
    scanf("%d",&de);
    int mber[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    for(int i=0;i<21;i++)
    {
      if(de==mber[i])
      {
        ce++;
      }
    }
    if(ce==1)
    {
      printf("Your Zodiac Sign is Sagittarius!");
    }
    else
    {
      printf("Your Zodiac Sign is Capricorn!");
    }
  }
break;
default:
{
  printf("Invalid Entery!!!");
}

  }
}
    