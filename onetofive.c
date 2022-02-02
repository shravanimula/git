 /*1*/
printf("%d\n",1==5==5);

/*output=>0(because of comparision)*/


/*2*/int i =0;
   printf("%d %d",i,i++);
   /*output=>1,0(i++ means first print then increment so)*/
/*3*/ int x=5;
   printf("%d %d %d\n",x++,x++,x++);
   /*ouput 7 6 5*/
/*4*/ int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
   /*output error in thefirst printf at a time increm decreme is not possible*/
/*5*/int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
   /*output => 1 is True   => k==1 condition is true so print true*/
