/*
ques: you are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.
each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip.
also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.
you are also given an integer totalTrips, which denotes the number of trips all buses should make in total.
return the minimum time required for all buses to complete at least totalTrips trips.
*/
#include <iostream>
using namespace std;
long long minimumTime(vector<int> &time, int totalTrips)
{
    long long low = 1;
    long long mini = *min_element(time.begin(), time.end());
    long long high =
        mini * totalTrips; // worst case: total time taken by fastest bus to
                           // complete all trips.
    long ans = 0;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long trips = 0;
        for (int i = 0; i < time.size(); i++)
        {
            trips += mid / time[i];
        }
        if (trips >= totalTrips)
        {
            ans = mid;
            high = mid - 1; // go left
        }
        else
        {
            low = mid + 1; // go right
        }
    }
    return ans;
}
int main()
{
    vector<int> time = {5, 10, 10};
    int totalTrips = minimumTime(time, 9);
    cout << "total minimum time required to complete 9 trips is: " << totalTrips << endl;
    return 0;
}