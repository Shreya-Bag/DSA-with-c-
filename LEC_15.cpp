// painter partitioning problem : https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
 int n = c.size();
    long long start=c[0],end=0,mid;
    long long ans;
    for(int i=0;i<n;i++){
        end+=c[i];
        if(c[i]>start)
        start=c[i];
    }
    start*=b,end*=b;
    if(a==1)
    return end%10000003;
    while(start<=end){
        mid=end+(start-end)/2;
        int count=1,sum=0;
        for(int i=0;i<n;i++){
            sum+=c[i]*b;
            if(sum>mid){
                sum=c[i]*b;
                count++;
            }
        }
        if(count<=a){
            ans=mid;
            end=mid-1;
        }
        else
        start=mid+1;
        
    }
    return ans%10000003;
//aggressive cow problem: https://www.geeksforgeeks.org/problems/aggressive-cows/1
