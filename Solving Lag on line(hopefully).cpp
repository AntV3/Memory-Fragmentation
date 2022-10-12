//Solving Current Memory Fragmentation in starlink assembly line

//when memory is heavily fragmented you get allocation errors
//allocations will take longer because more work needs to get done
//to sort out bits
// this may not neccesarily come from the line but solving this
//may decrease lag and increase responsiveness

//this code is just an example and  may help solve that issue by using a best fit algorithm 
//other algorithms can be used like sequential but i believe "best fit"
// will be more effecient  in solving our issue


//We can think  of the memory as being a smart parking lot and think of bits as cars
// the parking lot  has  available spaces to put the cars in but it cant because it cant identify those available spaces








#include <iostream>
#include<memory>

using namespace std;

void bestfit(int bsize[],  int m, int psize[], int n) {
//store block id of block allocated to a process
    int alloc[n];
//no block assigned to process
    memset(alloc,-1 sizepf(alloc));
// find blocks for each process
    for(int i=0;  i<n; i++) {
//use best fit for process
        int bestIdx = -1;
        for (int j=0; j<m; j++) {
            if(bsize{j} >= psize[i]) {
                if(bestIdx == -1)
                bestIdx = j;
                else if (bsize[bestIdx] > bsize[j])
                bestIdx = j;
            }
        }
    }
}
if (bestIdx != -1) {
    //allocate block j to p[i]
    alloc[i] = bestIdx;
// reduce some of the available memory in block
    bsize=[bestIdx] -= psize[i];

}
cout << "\nProcess No. \tProcess Size \tBlock no.\n";
for(int i =0; i <n; i++) {
    cout << " " << i+1 << "t\t\t\t" << psize[i] << "t\t\t\t";
    if (alloc[i]) != -1
    cout << alloc[i] +1;
    else
    cout << "Not allocated";
    cout << endl;
}
//Driver
int main() {
    int bsize[] ={100,500,200,300,400};
    int psize[] = {112,518,110,526};
    int m= sizeof(bsize)/sizeof(bsize[0]);
    int n= sizeof(psize)/sizeof(psize[0]);
    bestfit(bsize, m, psize,n);
    return 0;
}