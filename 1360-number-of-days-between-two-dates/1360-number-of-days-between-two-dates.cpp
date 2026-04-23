class Solution {
public:
bool isLeap(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int daysInMonth(int y, int m) {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (m == 2 && isLeap(y)) return 29;
        return days[m - 1];
    }

    int toDays(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        int days = 0;

        // years
        for (int i = 1971; i < y; i++) {
            days += isLeap(i) ? 366 : 365;
        }

        // months
        for (int i = 1; i < m; i++) {
            days += daysInMonth(y, i);
        }

        // days
        days += d;

        return days;
    }
    int daysBetweenDates(string date1, string date2) {
        return abs(toDays(date1) - toDays(date2));
    }
};