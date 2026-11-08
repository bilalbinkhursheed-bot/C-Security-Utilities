#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(){
 
 /*i want to create a shopping cart program where i can choose between three vegetables. Choosing
 one will lead me to a prompt asking me how many i want, which will then give me a calculated amount
 of the cost.
 Variables i will need: Float (for price), char variables for vegetables, a math function, scanf, fgets,
 if statements, maybe switches, and a choice with a null terminator*/

 float price1 = 5.0f; // for tomato
 float price2 = 10.0f; // for capsicum
 float price3 = 20.0f; // for beetroot
 char choice[100] = "\0";
 int amount =  0;
 float total_cost = 0.0f;
 bool is_transaction_valid = false;

 printf("Welcome to Bilals Store\n");
 printf("Please enter your desired vegetable (Tomato or Capsicum or Beetroot): ");
 fgets(choice, sizeof(choice), stdin);
  choice[strcspn(choice, "\n")] = '\0';

  if (strcmp(choice, "Tomato") == 0 || strcmp(choice, "tomato") == 0){
    printf("Enter the amount of tomatoes you want: ");
    scanf("%d", &amount);
    total_cost = amount * price1;
    printf("Your total amount for %d tomatoes is: %.1f ", amount, total_cost);
    is_transaction_valid = true;
   }
   else if(strcmp(choice,"Capsicum") == 0 || strcmp(choice, "capsicum") == 0){
    printf("Enter the amount of capsicum you want: ");
    scanf("%d", &amount);
    total_cost = amount * price2;
    printf("Your total amount for %d capsicum is: %.1f", amount, total_cost);
    is_transaction_valid = true;
   }
   else if(strcmp(choice, "Beetroot") == 0 || strcmp(choice, "beetroot") == 0){
    printf("Enter the amount of beetroot you want: ");
    scanf("%d", &amount);
    total_cost = amount * price3;
    printf("Your total amount for %d beetroot is: %.1f", amount, total_cost);
    is_transaction_valid = true;
   }
   else{
    printf("Please enter any one of the listed vegetables.");
   }
   printf("\n--- SYSTEM AUDIT LOG ---\n");
   if(is_transaction_valid){
    printf("[STATUS=SUCCESS] Processed order for %d units of '%s'. Total revenue: PKR %.2f\n", amount, choice, total_cost);
   }
   else{
    printf("[STATUS=WARNING] Invalid or Unauthorized store selection attempt detected.");
   }
    return 0;
}
