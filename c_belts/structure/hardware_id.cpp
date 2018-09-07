//
// Created by igor.goncharov on 9/7/2018.
// An example of json structure to read the hardware id
// HI is a number of ordered key-value fields
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector hw_id = {
            "board_pn" : "PT00034950";
            "board_rev" : "E";
            "board_sn" : "001";
            "module_pn" : "PT00053515";
            "module_rev" : "F";
            "module_sn" : "001";
    };
    char[] sep_symbols = "0x0A"+"0x0B";

    hw_str = "";
    for (i in hw_id) {
        append(hw_str, hw_id[i], sep_symbol)
    }

    cout << hw_str;
    return 0;
}

