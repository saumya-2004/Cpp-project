#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Get the current time
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);

    // Prompt the user to enter a country code and read it in
    string country_code;
    cout << "Enter a country code (e.g. IND for India): ";
    cin >> country_code;

    // Find the time zone offset for the entered country using if-else statements
    int time_zone_offset = 0;
    if (country_code == "UTC") {
        time_zone_offset = 0;
    } else if (country_code == "IND") {
        time_zone_offset = 5;
    } else if (country_code == "CHN") {
        time_zone_offset = 8;
    } else if (country_code == "USA") {
        time_zone_offset = -4;
    } else if (country_code == "CAN") {
        time_zone_offset = -5;
    } else if (country_code == "MEX") {
        time_zone_offset = -6;
    } else if (country_code == "BRA") {
        time_zone_offset = -3;
    } else if (country_code == "GBR") {
        time_zone_offset = 1;
    } else if (country_code == "FRA") {
        time_zone_offset = 2;
    } else if (country_code == "DEU") {
        time_zone_offset = 2;
    } else if (country_code == "ITA") {
        time_zone_offset = 2;
    } else if (country_code == "ESP") {
        time_zone_offset = 2;
    } else if (country_code == "SWE") {
        time_zone_offset = 2;
    } else if (country_code == "RUS") {
        time_zone_offset = 3;
    } else if (country_code == "TUR") {
        time_zone_offset = 3;
    } else if (country_code == "EGY") {
        time_zone_offset = 2;
    } else if (country_code == "NGA") {
        time_zone_offset = 1;
    } else if (country_code == "ZAF") {
        time_zone_offset = 2;
    } else if (country_code == "JPN") {
        time_zone_offset = 9;
    } else if (country_code == "AUS") {
        time_zone_offset = 10;
    } else if (country_code == "NZL") {
        time_zone_offset = 12;
    } else if (country_code == "ARG") {
        time_zone_offset = -3;
    } else if (country_code == "COL") {
        time_zone_offset = -5;
    } else if (country_code == "CHL") {
        time_zone_offset = -4;
    } else if (country_code == "PER") {
        time_zone_offset = -5;
    } else {
        cout << "Unknown country code" << endl;
        return 0;
    }

    // Calculate the time for the specified country and print it
    auto time = now + chrono::hours(time_zone_offset);
    time_t time_t = chrono::system_clock::to_time_t(time);
    cout << country_code << ": " << ctime(&time_t);

    return 0;
}
