int SLargest(int n,vector<int> a){
    int Largest=a[0];
    int sLargest=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]>Largest){
            sLargest=Largest;
            Largest=a[i];
        }
        else if(a[i]<Largest && a[i]>sLargest){
            sLargest=a[i];
        }
    }
    return sLargest;
}
int SSmallest(int n,vector<int> a){
    int Smallest=a[0];
    int sSmallest=INT_MAX;
    for(int i=0;i<a.size();i++){
        if(a[i]<Smallest){
            sSmallest=Smallest;
            Smallest=a[i];
        }
        else if(a[i]>Smallest && a[i]<sSmallest){
            sSmallest=a[i];
        }
        
    }
    return sSmallest;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int Largest=SLargest(n,a);
    int Smallest=SSmallest(n,a);
    vector<int> ans;
    ans.push_back(Largest);
    ans.push_back(Smallest);
    return ans;

}
