#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int testCase;
    cin >> testCase;

    for (size_t i = 1; i <= testCase; i++)
    {
        int myPosition, liftPosition;
        cin >> myPosition >> liftPosition;

        int timeTakenByMeToEnter = 5;
        int timeTakenByMeToExit = 5;
        int timeTakenByLiftToOpen = 3;
        int timeTakenByLiftToClose = 3;
        int timeTakenByLiftToReachMyFloor = abs(myPosition - liftPosition) * 4; // If lift was on floor 7 and I was on floor 2, number of floors passed by the lift would be (2-7)=-5. But number of floors cannot be negative. To avoid the minus sign, we used the abs() function. As the lift takes 4 seconds to reach the adjacent floor, we multiply by 4.
        int timeTakenByLiftToReachGroundFloorFromMyFloor = (myPosition)*4;      // Lift takes 4 seconds to go from one floor to the next floor. That's why we multiply by 4.

        int ans = timeTakenByLiftToReachMyFloor + timeTakenByLiftToOpen + timeTakenByMeToEnter + timeTakenByLiftToClose + timeTakenByLiftToReachGroundFloorFromMyFloor + timeTakenByLiftToOpen + timeTakenByMeToExit;

        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}