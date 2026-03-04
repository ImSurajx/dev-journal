/*
// ques: calculate the time complexity for the following code snippet.
int c = 0;
for (int i = 0; i < n; i++)
{
    for (int j = 1; j * j < n; j *= 2)
    {
        c++;
    }
}
soln: outer n times, inner sqrt of n , j *= 2 exponential so here tec will be, n log n
*/