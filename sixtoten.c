/*6*/ int i=5;
   i=i++ - --i + ++i;
   /*o/p 5-5+6=>6*/
/*7*/int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
   /*o/p=4
    * =>first a=a-6=>1,a=a+1=>2,a=a+2=>4*/
/*8*/ int x=10,y=5,p,q;
   p=x>9;//thi is true so p=1
   q=p||(x=5,y=10);//this is true q=1
   printf("%d %d %d\n",q,x,y);
   /*o/p=>1,10,5*/
    *
/*9*/int x=2,y=1;
   y+=x<<=2;//first 2<<2so 8 and add 1 
   printf("%d %d\n",x,y);
   /* 0/p==> x=8,y=9*/
/*10*/ int x=2,y=4,z;
    z=y++*x++|y--;//4*2|5
    printf("%d\n",z);
    //o/p=> 13 ( 8|5=>13)
/*11*/ int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;//c&&a=1and b&1=0
    printf("%d\n",d);
    //o/p:0 
/*12*/ int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;//(10<=10)?1:2=> 1
    //10>=10?1:3=>o/p=>1
    //10<10? 1:4o/p=>4
    printf("%d\n",i);
    //o/p: condition is false so o/p is 4
/*13*/ int a=10,b=20;
    a=(a>5||b=6?40:50);//b=6?40:50 this is error
    printf("%d\n",a);
    //o/p ; error
/*14/printf("%x\n",-1>>4);//o/p:ffffffff
    printf("%x\n",-1<<4);//o/p:fffffffo
/*15*/ int x=7;
    x=(x<<=x%2);//x%2==1
    printf("%d\n",x);//x<<1
    //o/p:14
/*16*/int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));//1
/*17*/int a=5;
    a=a-~a +1;//5-(-6)+1
    printf("%d\n",a);//o/p:12
/*18*/ a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
    //o/p:error
/*19*/ a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
		    //o/p:error
/*20*/ int i=5;
    i=i++ - i
    printf("%d",i)
//o/p:error 
