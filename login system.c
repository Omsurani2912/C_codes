#include <stdio.h>
#include <string.h>

struct User {
    char name[20];
    int mobileNumber;
    int uidNumber;
    char password[10];
};
int main(){


    int ch;
    struct User user;
    
    do {
       printf("Enter 1 for Registration \n Enter 2 for Login \n Enter 3 to change password \n Enter 4 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter your name: ");
                scanf("%s", user.name);
                printf("Enter your mobile number: ");
                scanf("%d", &user.mobileNumber);
                printf("Enter your uid number: ");
                scanf("%d", &user.uidNumber);
                printf("Enter your password: ");
                scanf("%s", user.password);
                printf("Registration successful!");
                
                break;

            case 2:
                printf("Enter your name: ");
                scanf("%s", user.name);
                printf("Enter your password: ");
                scanf("%s", user.password);

                // Perform login verification logic here
                // For simplicity, let's assume the login is successful
                printf("Login successful!\n");
                
                break;

            case 3:
                printf("Enter your uid number: ");
                scanf("%d", &user.uidNumber);
                printf("Enter your new password: ");
                scanf("%s", user.password);

                // Perform password change logic here
                // For simplicity, let's assume the password change is successful
                printf("Password changed successfully!\n");
                
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice\n");
            
        }
    } while (ch != 4);

    return 0;
}

