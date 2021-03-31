#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<int> numbers{};
    char entry{};
    
        do{
        cout << "P- Print the numbers"<<endl;
        cout << "A- Add the numbers"<<endl;
        cout << "M- Mean of the numbers"<<endl;
        cout << "S- Smallest of the numbers"<<endl;
        cout << "L- Largest of the numbers"<<endl;
        cout << "Q- Quit"<<endl;
        cout << "Please select a option" << endl;
        cin>>entry;
        
        
        if (entry == 'P' || entry == 'p')
        {
            if (numbers.size()==0)
                cout << "[] - The list is empty"<< endl;
            else {
                cout << "[";
                for(auto num:numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
            
        }
        
        else if (entry == 'A' || entry == 'a')
        {
            
            int num_to_add{};
            cout << "Enter the number"<<endl;
            cin>> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << "Added to the list" << endl;
            }
        
        else if (entry == 'M' || entry == 'm')
        {
            if (numbers.size() ==0)
                cout << "There are No Numbers in the list" << endl;
            else{
                int total{};
                for(auto num:numbers)
                    total += num;
                    
                cout << " The mean of the numbers is : " << static_cast<double>(total)/numbers.size() << endl;
            }
        }
        
        else if (entry == 'S' || entry == 's')
        {
            if (numbers.size() ==0)
                cout << "The list is no small numbers" << endl;
            else{
                int smallest{};
                smallest= numbers.at(0);
                for (auto num:numbers)
                    if (num < smallest)
                        smallest=num;
                cout << "The smallest number is: " << smallest << endl;
            }
            
        }
        else if (entry == 'L' || entry == 'l')
        {
            if (numbers.size() ==0)
                cout << "The list is no large numbers" << endl;
            else{
                int largest{};
                largest= numbers.at(0);
                for (auto num:numbers)
                    if (num>largest)
                        largest = num;
                cout << "The largest number is: "<< largest<< endl;
            }
        }
        
        else if (entry == 'Q' || entry == 'q'){
        cout<< "Goodbye"<<endl;}
        
        else{
            cout<<"Sorry not a valid entry."<<endl;
        } 
        }while(entry !='Q' && entry !='q');
        
        cout << endl;
        return 0;
    
}