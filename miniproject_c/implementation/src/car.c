#include <car.h>

void registration()
{
    char name[20],phno[10],aadharcard[12],emailid[20];
    printf("enter the name\n");
    scanf("%s",name);
    printf("enter the phno\n");
    scanf("%s",phno);
    printf("enter the aadhar card number\n");
    scanf("%s",aadharcard);
    printf("enter the email id\n");
    scanf("%s",emailid);
    printf("\n successfully registred\n");
    return;

}
void login()
{
    char userid[]="ABCD",password[]="123";
    char p[15],u[15];
    int n=1,a,b;
    printf("enter the userid and password below(you have only three chances to enter)\n");
    getch();
    while(n<=3)
    {
	clrscr();
	printf("\n user id");
	scanf("%s",u);
	printf("\n password");
	scanf("%s",p);
	a=strcmp(u,userid);
	b=strcmp(p,password);
	if(a==0&&b==0)
	{
	    printf("\n you have logged successfully\n");
	    break;
	}
	else
	{
	    printf("wrong password and/or userid now you have %d more chances/s",3-n);
	}
	getch();
	n++;
    }
	if(n==4)
	{
	    printf("you cant login\n");
	    getch();
	    exit(0);
	}
	return;
}
    void cardetails()
    {
	int ch,kms,car4,car6,car8;
	float price;
	do
	{
	 printf("enter the number of kilometers\n");
	 scanf("%d",&kms);

    up:	printf("enter the choice\n");
	printf("1.4 seaters\n2.6 seaters\n3.8 seaters\n4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:printf("choose the car\n");
		   printf("1.MARUTI 800\n2.FORD MUSTANG\n3.TATA NANO\n4.SWIFT                                      DZIRE\n5.INDCA\n6.EXIT\n");
		   scanf("%d",&car4);
		   switch(car4)
		   {
		    case 1:printf("MARUTHI 800\n");
			   printf("fuel =petrol\n");
			   printf("1km=13rs\n");
			   price= kms*13;
			   printf("Total price=%f\n",price);
			   break;
		    case 2:printf("FORD MUSTANG\n");
			   printf("fuel=petrol\n");
			   printf("1km=13rs\n");
			   price=kms*13;
			   printf("Total price=%f\n",price);
			   break;
		    case 3:printf("TATA NANO\n");
			   printf("fuel=petrol\n");
			   printf("1km=13rs\n");
			   price=kms*13;
			   printf("Total price=%f\n",price);
			   break;
		   case 4:printf("SWIFT DZIRE\n");
			  printf("fuel=petrol\n");
			  printf("1km=13rs\n");
			  price=kms*13;
			  printf("Total price=%f\n",price);
			  break;
		   case 5:printf("INDICA\n");
			  printf("fuel=petrol\n");
			  printf("1km=13rs\n");
			  price=kms*13;
			  printf("Total price=%f\n",price);
			  break;
		   case 6:goto up;
		   default:printf("invalid choice\n");

		  }
		   break;
	    case 2:printf("choose the car\n");
		   printf("1.MAHINDRA THAR\n2.TATA HEXA\n3.MAHINDRA KUV100NXT\4.FORCE ONE\n5.FORCE GURKHA\n6.EXIT\n");
		   scanf("%d",&car6);
		   switch(car6)
		   {
		     case 1:printf("MAHINDRA THAR\n");
			    printf("fuel=diesel\n");
			    printf("1km=14rs\n");
			    price=kms*14;
			    printf("Total price= %f\n",price);
			    break;
		     case 2:printf("TATA HEXA\n");
			    printf("fuel=diesel\n");
			    printf("1km=14\n");
			    price=kms*14;
			    printf("Total price=%f\n",price);
			    break;
		     case 3:printf("mahindra kuv100nx\n");
			    printf("fuel=diesel\n");
			    printf("1km=14\n");
			    price=kms*14;
			    printf("Total price=%f\n",price);
			    break;
		     case 4:printf("FORCE ONE\n");
			    printf("fuel=diesel\n");
			    printf("1km=14\n");
			    price=kms*14;
			    printf("Total price =%f\n",price);
			    break;
		     case 5:printf("FORCE GURKHA\n");
			    printf("fuel=diesel\n");
			    printf("1km=14\n");
			    price=kms*14;
			    printf("Total price=%f\n",price);
			    break;
		    case 6:goto up;
		    default:printf("invalid choice\n");

			  }
			  break;
	    case 3:printf("choose the car\n");
		   printf("1.TOYOTA INNOVA\n2.MARUTI OMNI\n3.MAHINDRA XYLO\n4.CHEVROLET\n5.EXIT\n");
		   scanf("%d",&car8);
		   switch(car8)
		   {
		    case 1:printf("TOYOTA INNOVA\n");
			   printf("fuel=diesel\n");
			   printf("1km=16\n");
			   price=kms*16;
			   printf("Total price=%f\n",price);
			   break;
		    case 2:printf("MARUTI OMNI\n");
			   printf("fuel=petrol\n");
			   printf("1km=15\n");
			   price=kms*15;
			   printf("Total price=%f\n",price);
			   break;
		    case 3:printf("MAHINDRA XYLO\n");
			   printf("fuel=diesel\n");
			   printf("1km=16\n");
			   price=kms*16;
			   printf("Total price=%f\n",price);
			   break;
		    case 4:printf("CHEVROLET\n");
			   printf("fuel=diesel\n");
			   printf("1km=16\n");
			   price=kms*16;
			   printf("Total price =%f\n",price);
			   break;
		    case 5:goto up;
		    default:printf("invalide choice\n");

		    }
		   break;
	    case 4:exit(0);
	    default:printf("invalid choice\n");

	}
    }while(ch!=4);

    return;
}
