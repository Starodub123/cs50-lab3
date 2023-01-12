#include <cs50.h>
#include <stdio.h>
#include <string.h>

//Max number of candidates
#define max 9

//Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

//Array of candidates
candidate candidates[MAX];

//Number of candidates
int candidates_count;

//function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    //Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate...]\n")
        return 1;

    }

    //Populate array of candidates
    candidate_count = args - 1;
    if (candidate_count > MAX)
    {
        printf ("Maximum number of candidates in %i\n , MAX");
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
       candidates[i]. name = argv[i + 1];
       candidates[i]. votes = 0;
    }
    int voter_count = get_int("Number of voters: ");

    //Loop over all voters
    for(int i = 0; i < voter_count; i++)
    
}
string name = get_string("Vote: ");

// check for invalid vote
if (!vote(name))
{
    printf("Invalid vote.\n")
}
{
//Display winner of election
print_winner();
}
//update vote totals given a new vote
bool vote (string name)
{
    //TODO
    for (int i = 0; i < candidate_count; i++);
    {
        if (strcmp(candidates[i].name, name)== 0)
        {
         candidates[i].votes++;
         return true;   
        }
    }
}
void print_winner(void)
{
    //TODO
    int maximum_vote = 0;

    for(int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > maximum_vote)
        {
            maximum_vote = candidates[i].votes;
        }
    }
    for (int i = 0; i < candidate_count; i++)
    {
if (candidates[i].votes == maximum_vote)
{
    printf("%s\n", candidates[i].name);
}
    }

    return;
}