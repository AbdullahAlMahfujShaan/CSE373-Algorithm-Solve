#include<stdio.h>

int arr1[1049]; //Array of Briefing Time of Soldier
int arr2[1049]; //Array of Execution Time of a solder

int MAX(int a, int b) //Max Function
{
    if(a>=b)
        return a;
    else
        return b;
}

int main()
{
    int n;
    printf("Enter the number of soldiers to brief: ");
    scanf("%d", &n);

    int a, b, i;
    printf("Enter briefing & execution time\n");
    for(i=0; i<n; i++)
    {
        printf("Brief Time for %d: ",i);
        scanf("%d",&a);
        printf("Execution Time for %d: ",i);
        scanf("%d",&b);
        arr1[i]=a; //storing Briefing time
        arr2[i]=b; //storing Execution time
    }

    int mx=-1; //initialize with a low value
    int mxIndex=-1;

    int result=0; //The final estimation
    int iniTime=0; //Time to brief
    int exeTime=0; //Time to execute
    int j=0;
//Greedy Approach
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++) //For calculating the next maximum
        {
            if(mx<=arr2[j])
            {
                mx=arr2[j];
                mxIndex=j;
            }
        }

        iniTime+=arr1[mxIndex]; //increasing briefing time
        exeTime=iniTime+arr2[mxIndex]; //time for execution

        result=MAX(iniTime, exeTime); //Storing the maximum value

        arr1[mxIndex]=0; //Replacing the maximum value with 0
        arr2[mxIndex]=0; //Replacing the maximum value with 0

        mx=-1; //initializing with a lower value
        mxIndex=-1;
    }

    printf("Best Completion time is: %d ", result);

    return 0;
}
