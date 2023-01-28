#include <stdio.h>

int main (void)
{
    int ctr;// loop counter
    int idSearch;
    int found = 0;

    int studentID[5] = {56, 67, 21, 90, 79};
    int studentScore[5] = {90, 67, 23, 80, 33};

    int tempID, didswap, tempScore, outer, inner;
    for (outer = 0; outer < 4; outer++)
    {
        didswap = 0;
        for (inner = outer; inner < 5; inner++)
        {
            if (studentID[inner] < studentID[outer])
            {
                tempID = studentID[inner];
                tempScore = studentScore[inner];

                studentID[inner] = studentID[outer];
                studentScore[inner] = studentScore[outer];

                studentID[outer] = tempID;
                studentScore[outer] = tempScore;

                didswap = 1;
            }
        }

        if (didswap == 0)
        {
            break;
        }
    }

    printf("\n\n **********Student Score lookup********\n");
    printf("what is the student ID number? ");
    scanf("%d", &idSearch);

    // now look for the id in the array
    for (ctr = 0; ctr < 5; ctr++)
    {
        if (idSearch == studentID[ctr])
        {
            found = 1;
            break;
        }
        if (studentID[ctr] > idSearch)
        {
            break;
        }
    }

    if (found)
    {
        if (studentScore[ctr] > 50)
        {
            printf("\n The student %i passed with %i%%. \n",
            studentID[ctr], studentScore[ctr]);
        }
        else
        {
            printf("\n The student %i failed with %i%%. \n",
            studentID[ctr], studentScore[ctr]);
        }
    }
    else 
    {
        printf("** You have entered an incorrect student ID.");
        printf("\n ID %3d was not found in the list.\n", idSearch);
    }
    return (0);
}