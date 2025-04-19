#include <stdio.h>

// Function to display bill with stylish formatting
void printBill(char* movie, int seats, float pricePerTicket, float totalAmount, float gst, float totalWithGST) {
    printf("\n");
    printf("\033[1;36m==============================================================\033[0m\n");
    printf("\033[1;32m     		   YOUR MOVIE BOOKING BILL    \033[0m\n");
    printf("\033[1;36m==============================================================\033[0m\n");
    printf("		Movie: \033[1;33m%s\033[60m\n", movie);
    printf("		Seats: \033[1;33m%d\033[0m\n", seats);
    printf("		Price per Ticket: \033[1;33m%.2f\033[0m\n", pricePerTicket);
    printf("		Total Amount: \033[1;33m%.2f\033[0m\n", totalAmount);
    printf("		GST (18%%): \033[1;33m%.2f\033[0m\n", gst);
    printf("		\033[1;31mFinal Amount: %.2f\033[0m\n", totalWithGST);
    printf("\033[1;36m==============================================================\033[0m\n");
}

int main() {
    int movieType, movieChoice, seats;
    float price, total, gst, finalTotal;
    char* movieName;

    // Movie choices
    printf("Select Movie Type:\n");
    printf("Press 1 for Bollywood\n");
    printf("Press 2 for Hollywood\n");
    printf("Press 3 for Tollywood\n");
    scanf("%d", &movieType);

    switch (movieType) {
        case 1:
            printf("You selected Bollywood.\n");
            printf("Available movies:\n");
            printf("1. Pathaan (200 INR)\n");
            printf("2. Jawan (250 INR)\n");
            printf("3. Tiger 3 (220 INR)\n");
            printf("4. Brahmastra (280 INR)\n");
            printf("5. Gadar 2 (230 INR)\n");
            scanf("%d", &movieChoice);

            switch (movieChoice) {
                case 1:
                    movieName = "Pathaan";
                    price = 200;
                    break;
                case 2:
                    movieName = "Jawan";
                    price = 250;
                    break;
                case 3:
                    movieName = "Tiger 3";
                    price = 220;
                    break;
                case 4:
                    movieName = "Brahmastra";
                    price = 280;
                    break;
                    
                case 5:
                    movieName = "Gadar 2";
                    price = 230;
                    break;
                default:
                    printf("Invalid choice!\n");
                    return 1;
            }
            break;

        case 2:
            printf("You selected Hollywood.\n");
            printf("Available movies:\n");
            printf("1. Avatar (300 INR)\n");
            printf("2. Inception (350 INR)\n");
            printf("3. Avengers (400 INR)\n");
            printf("4. Titanic (250 INR)\n");
            printf("5. Fast & Furious (280 INR)\n");
            scanf("%d", &movieChoice);

            switch (movieChoice) {
                case 1:
                    movieName = "Avatar";
                    price = 300;
                    break;
                case 2:
                    movieName = "Inception";
                    price = 350;
                    break;
                case 3:
                    movieName = "Avengers";
                    price = 400;
                    break;
                case 4:
                    movieName = "Titanic";
                    price = 250;
                    break;
                case 5:
                    movieName = "Fast & Furious";
                    price = 280;
                    break;
                default:
                    printf("Invalid choice!\n");
                    return 1;
            }
            break;

        case 3:
            printf("You selected Tollywood.\n");
            printf("Available movies:\n");
            printf("1. RRR (250 INR)\n");
            printf("2. Baahubali (300 INR)\n");
            printf("3. Pushpa (230 INR)\n");
            printf("4. KGF (270 INR)\n");
            printf("5. Sarkaru Vaari Paata (240 INR)\n");
            scanf("%d", &movieChoice);

            switch (movieChoice) {
                case 1:
                    movieName = "RRR";
                    price = 250;
                    break;
                case 2:
                    movieName = "Baahubali";
                    price = 300;
                    break;
                case 3:
                    movieName = "Pushpa";
                    price = 230;
                    break;
                case 4:
                    movieName = "KGF";
                    price = 270;
                    break;
                case 5:
                    movieName = "Sarkaru Vaari Paata";
                    price = 240;
                    break;
                default:
                    printf("Invalid choice!\n");
                    return 1;
            }
            break;

        default:
            printf("Invalid movie type!\n");
            return 1;
    }

    // Asking user for number of seats
    printf("How many seats would you like to book?\n");
    scanf("%d", &seats);

    // Calculate total and GST
    total = price * seats;
    gst = total * 0.18;  // 18% GST
    finalTotal = total + gst;

//     Print the bill
    printBill(movieName, seats, price, total, gst, finalTotal);

    return 0;
}