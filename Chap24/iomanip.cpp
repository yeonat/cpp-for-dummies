// #include <iostream.h>

// void fn(float interest, float dollarAmount)
// {
//     cout << “Dollar amount = “;
//     cout.precision(2);
//     cout << dollarAmount;
//     cout.precision(4);
//     cout << interest
//          << “\n”;
// }

// #include <iostream.h>
// #include <iomanip.h>
// void fn(float interest, float dollarAmount)
// {
//     cout << "Dollar amount = "
//          << setprecision(2) << dollarAmount
//          << setprecision(4) << interest
//          << “\n”;
// }

// #include <iostream.h>
// #include <iomanip.h>
// void fn()
// {
//     cout << setw(8) // width is 8...
//          << 10      //...for the 10, but...
//          << 20      //...default for the 20
//          << “\n”;
// }

// #include <iostream.h>
// #include <iomanip.h>
// void fn()
// {
//     cout << setw(8) // set the width...
//          << 10
//          << setw(8) //...now reset it
//          << 20
//          << “\n”;
// }

// #include <iostream.h>
// void fn(float value)
// {
//     int previousPrecision;
//     // ...doing stuff here...
//     // you can ask what the current precision is:
//     previousPrecision = cout.precision();
//     // or you can save the old value when you change it
//     previousPrecision = cout.precision(2);
//     cout << value;
//     // now restore the precision to previous value
//     cout.precision(previousPrecision);
//     //...do more neat stuff...
// }
