#include<bits/stdc++.h>
using namespace std;

//length
double cmToMeter(double value){
    return value*0.01;
}

double meterToCm(double value){
    return value*100;
}

double cmToInch(double value){
    return value*(1/2.54);
}

double InchToCm(double value){
    return value*2.54;
}

double cmToMiles(double value){
    return value*(1/160934.4);
}

double milesToCm(double value){
    return value*160934.4;
}

double cmToFeet(double value){
    return value*(1/30.48);
}

double feetToCm(double value){
    return value*30.48;
}

double meterToInch(double value){
    return value*39.37;
}

double inchToMeter(double value){
    return value*(1/39.37);
}

double meterToMiles(double value){
    return value*(1/1609.344);
}

double milesToMeter(double value){
    return value*1609.344;
}

double meterToFeet(double value){
    return value*(1/0.305);
}

double feetToMeter(double value){
    return value*0.305;
}

double inchToMiles(double value){
    return value*(1/63360);
}

double milesToInch(double value){
    return value*63360;
}

double feetToInch(double value){
    return value*12;
}

double inchToFeet(double value){
    return value*(1/12);
}

double feetToMiles(double value){
    return value*(1/5280);
}

double milesToFeet(double value){
    return value*5280;
}

//temperature

double celciusToFarhenheit(double value){
    return (value*(9/5))+32;
}

double farhenheitToCelsius(double value){
    return(value-32)*(5/9);
}

double celsiusToKelvin(double value){
    return value+273.15;
}

double kelvinToCelsius(double value){
    return value-273.15;
}

double kelvinToFarhenheit(double value){
    return ((value-273.15)*(9/5))+32;
}

double farhenheitToKelvin(double value){
    return ((value-32)*(5/9))+273.15;
}



//weight

double kgToGrams(double value){
    return value*1000;
}

double gramsToKg(double value){
    return value*(1/1000);
}

double kgToPounds(double value){
    return value*2.205;
}

double poundsToKg(double value){
    return value*(1/2.205);
}

double gramsToPounds(double value){
    return value*(1/453.592);
}

double poundsToGrams(double value){
    return value*453.592;
}



//print

void print(double unit1, double unit2, string notation1, string notation2){
    cout<<unit1<<notation1<<" = "<<unit2<<notation2<<endl;
}


int main(){
    double unit1, unit2;
    string notation1, notation2;

    while(1){
        int ch1;
        cout<<"--------------- UNIT CONVERTER ---------------"<<endl;
        cout<<"1. LENGTH\n2. TEMPERATURE\n3. WEIGHT\n4. EXIT";
        cout<<"\nEnter your choice: (1-4)"<<endl;
        cin>>ch1;

        if(ch1==1){
            int ch2;
            cout<<"--------------- LENGTH ---------------"<<endl;
            cout<<"Enter the unit to be converted from:";
            cout<<"1. CENTIMETER\n2. METER\n3. INCH\n4. FEET\n5. MILE\n6. BACK\n7. EXIT";
            cout<<"\nEnter your choice: (1-4)"<<endl;
            cin>>ch1;
        }

    }
}