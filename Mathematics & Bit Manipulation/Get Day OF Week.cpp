class Solution {
  public:
    string getDayOfWeek(int d, int m, int y) {
    if (m == 1) {  // January → month 13 of previous year
        m = 13;
        y--;
    }
    if (m == 2) {  // February → month 14 of previous year
        m = 14;
        y--;
    }

    int q = d;
    int K = y % 100;
    int J = y / 100;

    int h = (q + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + 5 * J) % 7;

    string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return days[h];
}
};