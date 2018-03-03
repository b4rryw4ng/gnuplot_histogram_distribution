/***********************************************
 Distribution V1.0
 
 argv[1] for input file
 argv[2] fot output file
 Input file is the Output file from Histogram
 Output file is the file for gnuplot to plot the Distribution Image
 
 ************************************************/

#include <iostream>
#include <fstream>
#include <time.h>
#define size 1000

using namespace std;
int main(int argc,char ** argv){
    if(argc!=3){
        fprintf(stdout, "Usage:  ./parser  [filename]\n");
        exit(0);
    }
    int feq[size];
    for(int i=0;i<size;i++){
        feq[i]=0;
    }
    ifstream infile;
    ofstream outfile;
    
    infile.open(argv[1]);
    
    outfile.open(argv[2]);
    int i=0;
    float data;
    int max=0;
    while(!infile.eof()){
        
        infile>>data;
        
        
        int temp=data;
        if(max<temp)max=temp;
        if(temp<size)feq[temp]++;
        i++;
    }
    cout<<max<<endl;
    for(int i=0;i<size;i++){
        if(feq[i]==0){
            
        }
        else {
            outfile<<i<<"  "<<feq[i]<<endl;
        }
    }
    
}

