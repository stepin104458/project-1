#include <Car.h>
#define VALID   (1)
#define INVALID (0)

int main()
{
    clrscr();
    printf("############################################################\n");
    printf("enter the registration details\n");
    registration();
    printf("############################################################\n");
    printf("userid=ABCD\n");
    printf("password=123\n");
    printf("************************************************************\n");
    printf("login\n");
    login();
    printf("************************************************************\n");
    printf("car details\n");
    cardetails();
    return;
}
