#include<iostream>
using namespace std;



// declarate the function
int profit (int year, int month, int date);
int mod (int a, int b);
int max(int a, int b, int c);
int max_crossing_sum(int array[], int begin, int mid, int end);
int max_subarray_sum(int array[], int begin, int end);


int main(){
    int n,year,month,date;
    cin >> n ;
    cin >> year >> month >>date ;
    int array[n] ;
    for (int i=0; i<n; i++){
        array[i] = profit(year,month,date);
        int year_tem= mod ((year*year + 2*month +1) , 10007) -5000  ;
        int month_tem= mod((month*month + 2*year -1) , 10007)-5000;
        int date_tem= mod((year +month +date) , 121)-60;
        year = year_tem;
        month = month_tem;
        date = date_tem;
    }  


    int max_profit = max_subarray_sum(array, 0, n - 1);
    cout << max_profit<<endl;
    return 0;
}


// caluculate the profit each one
int profit (int year, int month, int date) {
    return year+month+date ;
    
}

//calculate the modules
int mod (int a, int b) {
    if (a>0) {
        return a%b ;
    }
    else {
        return (a%b+b)%b ;
    }
}

//find maximum of three integers
int max(int a, int b, int c) {
    int max_value;
    if (b<a && c<a ){
        max_value = a;
    }
    else if (a<b && c<b){
        max_value=b;
    }
    else {
        max_value = c;
    }
    return max_value;
    }


int max_crossing_sum(int array[], int begin, int mid, int end)
{
    int sum = 0;
    int left_sum =-2147483648; // we assign the minimum number in int type
    for (int i = mid; i >= begin; i--) {
        sum = sum + array[i];
        if (sum > left_sum)
            left_sum = sum;
    }

    
    sum = 0;
    int right_sum = -2147483648; // we assign the minimum number in int type
    for (int i = mid+1; i <= end; i++) {
        sum = sum + array[i];
        if (sum > right_sum)
            right_sum = sum;
    }

    return max(left_sum + right_sum, left_sum, right_sum);
}

// find the  sum of maximum sum 
int max_subarray_sum(int array[], int begin, int end)
{
    if (begin == end){
        return array[begin];
    }
    int mid = (begin + end) / 2;

    return max(max_subarray_sum(array , begin, mid), max_subarray_sum(array , mid + 1, end), max_crossing_sum(array, begin, mid, end));
}
