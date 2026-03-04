/*
// ques: calculate the time complexity for the following code snippet.
int c = 0;
for (int i = 1; i < n; i *= 2)
{
    for (int j = n; j > i; j--)
    {
        c++;
    }
}
soln: outer is log n & inner is 2n b/c i + j total number of operations 2n so tc is n log n
*/