




// this code contain only the functional code no header files and main function is included.


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item &s1,Item &s2)
    {
        double r1=(double)s1.value/(double)s1.weight;
        double r2=(double)s2.value/(double)s2.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=W)
            {
                W-=arr[i].weight;
                ans+=arr[i].value;
            }
            else
            {
              double value=(double)arr[i].value/(double)arr[i].weight;
              ans+=value*(double)W;
              break;
            }
        }
        return ans;
    }
        
};