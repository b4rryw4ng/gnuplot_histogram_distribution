/***********************************************
 Histogram.cpp V1.0
 
 argv[1] for input file
 argv[2] fot output file
 Input file is the raw data for computing RTT & OW
 Output file is the file for gnuplot to plot the Histogram Image also use as Input file for Distribution
 ************************************************/
#include <iostream>
#include <fstream>
#include <string>



#include <time.h>
#define size 4809

using namespace std;
int main(int argc,char ** argv){
    if(argc!=3){
        fprintf(stdout, "Usage:  ./parser  [filename]\n");
        exit(0);
    }
    ifstream infile;
    ofstream outfile_his;
    infile.open(argv[1]);
    outfile_his.open(argv[2]);
    while(!infile.eof()){
        int temp=0;
        
        infile>>temp;
        
        if(temp>=0){
            temp=temp;
        }
        else {
            temp+=1000000;
        }
        if (temp>=1000) temp=temp/1000;
        
        outfile_his<<temp<<endl;
    }
        
    
}


