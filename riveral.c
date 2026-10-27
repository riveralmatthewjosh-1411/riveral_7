#include <stdio.h>

int main() {
    int applicants, qualified = 0;
    int i;
    float gwa, averageGWA, totalGWA = 0;

    printf("Enter number of applicants: ");
    scanf("%d", &applicants);

    for (i = 1; i <= applicants; i++) {
        printf("\nEnter GWA of applicant %d (1.00 - 5.00): ", i);
        scanf("%f", &gwa);

        totalGWA += gwa;

        if (gwa >= 1.00 && gwa <= 1.75) {
            printf("Applicant %d: QUALIFIED\n", i);
            qualified++;
        } else if (gwa > 1.75 && gwa <= 5.00) {
            printf("Applicant %d: NOT QUALIFIED\n", i);
        } else {
            printf("Invalid GWA entered!\n");
        }
    }

    if (applicants > 0) {
        averageGWA = totalGWA / applicants;

        printf("\n===== SCHOLARSHIP RESULTS =====\n");
        printf("Total Qualified Applicants: %d\n", qualified);
        printf("Average GWA: %.2f\n", averageGWA);
    } else {
        printf("No applicants to evaluate.\n");
    }

    return 0;
}
