There is a war and it doesn't look very promising for your country. 
Now it's time to act.
You have a commando squad at your disposal and planning an ambush on an important enemy camp located nearby. 
You have N soldiers in your squad.
In your master-plan, every single soldier has a unique responsibility and you don't want any of your soldier to know the plan for other soldiers so that everyone can focus on his task only.
In order to enforce this, you brief every individual soldier about his tasks separately and just before sending him to the battle field. 
You know that every single soldier needs a certain amount of time to execute his job. 
You also know very clearly how much time you need to brief every single soldier.
Being anxious to finish the total operation as soon as possible, you need to write a C program that finds an order of briefing your soldiers that will minimize the time necessary for all the soldiers to complete their tasks.
You may assume that, no soldier has a plan that depends on the tasks of his fellows.
In other words, once a soldier begins a task, he can finish it without the necessity of pausing in between.
Input specification:
The input starts with an integer N (1 ≤ N ≤ 1000), denoting the number of soldiers.
Each of the following N lines describe a soldier with two integers B (1 ≤ B ≤ 10000) & J (1 ≤ J ≤ 10000). 
B seconds are needed to brief the soldier while completing his job needs J seconds.
The output of your program is a single integer representing the total number of seconds counted from the start of your first briefing till the completion of all job.
Sample input:
3
2 5 
3 2 
2 1
Sample output:
8
Sample input:
3
3 3 
4 4 
5 5
Sample output:
15
