#include <stdio.h>
#include <windows.h>
void progress_bar()
{
    // Change the colour of the progress bar
    system("color 0C");
    //Blank character
    char a = 177;
    //Filling character 
    char b = 219;
    printf("\n\n\n\n\n\t\t\t\t""Loading bar...\n\n");
    //Pad the start of progress bar to be uniform with loading bar title.
    printf("\t\t\t\t");
    // Print the empty progress bar
    for (int i = 0; i < 100 ; i++)
        printf("%c", a);
    // Return cursor to beginning
    printf("\r");
    //Return cursor to the exact position that we were printing from.
    printf("\t\t\t\t");
    //Print the progress bar being filled
    for (int i = 0; i < 100 ; i++)
    {
        printf("%c", b);
        Sleep(100);
    }
    printf("\n\n");
    printf("\t\t\t\t");
    printf("loading completed successfully!!");
}
int main()
{
    progress_bar();
    return 0;
}
