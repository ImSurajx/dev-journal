/*
// ques: calculate the time complexity for the following code snippet.
int c = 0;
for (int i = 0; i < n; i++)
{
    for (int j = 1; j < n; j *= 2)
    {
        c++;
    }
}
soln: outer n, inner is going log n -> exponential so net t.c is nlogn 
*/
