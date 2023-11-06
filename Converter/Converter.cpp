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

double inchToCm(double value){
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
    string lengthNotation[] = {"cm", "m", "in", "ft", "mi" };
    string tempNotation[] = {"^C", "^F", "K"};
    string weightNotation[] = {"kg", "g", "lbs"};

    while(1){
        int ch1;
        cout<<"--------------- UNIT CONVERTER ---------------"<<endl;
        cout<<"1. LENGTH\n2. TEMPERATURE\n3. WEIGHT\n4. EXIT\n";
        cout<<"\nEnter your choice: (1-4)"<<endl;
        cin>>ch1;

        if(ch1==1){
            int ch2,ch3;
            cout<<"--------------- LENGTH ---------------"<<endl;

            cout<<"Enter the unit to be converted from:"<<endl;
            cout<<"1. CENTIMETER\n2. METER\n3. INCH\n4. FEET\n5. MILE\n6. EXIT\n";
            cout<<"\nEnter your choice: (1-6)"<<endl;
            cin>>ch2;
            if(ch2==6)
            exit(0);

            cout<<"Enter the unit to be converted to:"<<endl;
            cout<<"1. CENTIMETER\n2. METER\n3. INCH\n4. FEET\n5. MILE\n6. EXIT\n";
            cout<<"\nEnter your choice: (1-6)"<<endl;
            cin>>ch3;
            if(ch3==6)
            exit(0);
            cout<<"Enter the value: "<<endl;
            cin>>unit1;

            if(ch2==ch3){
                unit2 = unit1;
            }

            if(ch2==1 && ch3==2){
                unit2 = cmToMeter(unit1);
            }

            if(ch2==1 && ch3==3){
                unit2 = cmToInch(unit1);
            }
            
            if(ch2==1 && ch3==4){
                unit2 = cmToFeet(unit1);
            }

            if(ch2==1 && ch3==5){
                unit2 = cmToMiles(unit1);
            }

            if(ch2==2 && ch3==1){
                unit2 = meterToCm(unit1);
            }

            if(ch2==2 && ch3==3){
                unit2 = meterToInch(unit1);
            }

            if(ch2==2 && ch3==4){
                unit2 = meterToFeet(unit1);
            }

            if(ch2==2 && ch3==5){
                unit2 = meterToMiles(unit1);
            }

            if(ch2==3 && ch3==1){
                unit2 = inchToCm(unit1);
            }

            if(ch2==3 && ch3==2){
                unit2 = inchToMeter(unit1);
            }

            if(ch2==3 && ch3==4){
                unit2 = inchToFeet(unit1);
            }

            if(ch2==3 && ch3==5){
                unit2 = inchToMiles(unit1);
            }

            if(ch2==4 && ch3==1){
                unit2 = feetToCm(unit1);
            }

            if(ch2==4 && ch3==2){
                unit2 = feetToMeter(unit1);
            }

            if(ch2==4 && ch3==3){
                unit2 = feetToInch(unit1);
            }

            if(ch2==4 && ch3==5){
                unit2 = feetToMiles(unit1);
            }

            if(ch2==5 && ch3==1){
                unit2 = milesToCm(unit1);
            }

            if(ch2==5 && ch3==2){
                unit2 = milesToMeter(unit1);
            }

            if(ch2==5 && ch3==3){
                unit2 = milesToInch(unit1);
            }

            if(ch2==5 && ch3==4){
                unit2 = milesToFeet(unit1);
            }

            print(unit1, unit2, lengthNotation[ch2-1], lengthNotation[ch3-1]);

        }

        else if(ch1==2){
            int ch2, ch3;
            cout<<"--------------- TEMPERATURE ---------------"<<endl;

            cout<<"Enter the unit to be converted from:"<<endl;
            cout<<"1. CELSIUS\n2. FARHENHEIT\n3. KELVIN\n4. EXIT\n";
            cout<<"\nEnter your choice: (1-4)"<<endl;
            cin>>ch2;
            if(ch2==6)
            exit(0);

            cout<<"Enter the unit to be converted to:"<<endl;
            cout<<"1. CELSIUS\n2. FARHENHEIT\n3. KELVIN\n4. EXIT\n";
            cout<<"\nEnter your choice: (1-4)"<<endl;
            cin>>ch3;
            if(ch3==6)
            exit(0);
            cout<<"Enter the value: "<<endl;
            cin>>unit1;

            if(ch2==ch3){
                unit2 = unit1;
            }

            if(ch2==1 && ch3==2){
                unit2 = celciusToFarhenheit(unit1);
            }

            if(ch2==1 && ch3==3){
                unit2 = celsiusToKelvin(unit1);
            }

            if(ch2==2 && ch3==1){
                unit2 = farhenheitToCelsius(unit1);
            }

            if(ch2==2 && ch3==3){
                unit2 = farhenheitToKelvin(unit1);
            }

            if(ch2==3 && ch3==1){
                unit2 = kelvinToCelsius(unit1);
            }

            if(ch2==3 && ch3==2){
                unit2 = kelvinToFarhenheit(unit1);
            }

            print(unit1, unit2, tempNotation[ch2-1], tempNotation[ch3-1]);
        }

        if(ch1==3){
            int ch2, ch3;
            cout<<"--------------- WEIGHT ---------------"<<endl;

            cout<<"Enter the unit to be converted from:"<<endl;
            cout<<"1. KILOGRAM\n2. GRAM\n3. POUNDS\n4. EXIT\n";
            cout<<"\nEnter your choice: (1-4)"<<endl;
            cin>>ch2;
            if(ch2==6)
            exit(0);

            cout<<"Enter the unit to be converted to:"<<endl;
            cout<<"1. KILOGRAM\n2. GRAM\n3. POUNDS\n4. EXIT\n";
            cout<<"\nEnter your choice: (1-4)"<<endl;
            cin>>ch3;
            if(ch3==6)
            exit(0);
            cout<<"Enter the value: "<<endl;
            cin>>unit1;

            if(ch2==ch3){
                unit2 = unit1;
            }

            if(ch2==1 && ch3==2){
                unit2 = kgToGrams(unit1);
            }

            if(ch2==1 && ch3==3){
                unit2 = kgToPounds(unit1);
            }

            if(ch2==2 && ch3==1){
                unit2 = gramsToKg(unit1);
            }

            if(ch2==2 && ch3==3){
                unit2 = gramsToPounds(unit1);
            }

            if(ch2==3 && ch3==1){
                unit2 = poundsToKg(unit1);
            }

            if(ch2==3 && ch3==2){
                unit2 = poundsToGrams(unit1);
            }

            print(unit1, unit2, weightNotation[ch2-1], weightNotation[ch3-1]);
        }

        else if(ch1==4){
            exit(0);
        }

    }
}