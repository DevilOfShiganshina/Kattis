# Hanging out on the Terrace

The HiQ office in Stockholm has a pretty awesome rooftop terrace, often used in company parties and events such\
as programming competitions.

Unfortunately, fire safety rules limit the number of people who can be on the terrace at any one point in time – at\
most *L* people. During a party, people come and go to the terrace, but it is pretty annoying to keep track of the\
number of people who are currently on the terrace. Furthermore, people often enter the terrace in groups. If a\
group of people wish to enter the terrace, but their addition would exceed the fire safety limit, the group will\
instead go and play ping pong inside.

Your task is to write a program that determines, given the sizes of the groups which attempted to enter the terrace\
during a party and when people left the terrace, how many times a group was denied entry to the terrace.

## Input

The first line of input contains the fire safety limit 1 ≤ *L* ≤ 200 and the number of events 0 ≤ *x* ≤ 100.

The next x lines contains the events. An event starts with one of the words “enter” or “leave”, depending on\
whether the event describes a group attempting to enter the terrace or some set of people leaving it. This is\
followed by an integer 1 ≤ *p* ≤ 200 – the number of people entering/leaving at this time.

The number of people who leave the terrace will never exceed the number of people currently on the terrace.

## Output

Output the number of groups who were not allowed to enter the terrace during the party.

## Explanation of Sample Input

There may be at most 4 people on the terrace at the same time. The first thing that happens is 3 people entering the\
terrace. Then, a group of 2 people attempt to enter. This would bring the total number up to 3 + 2 = 5. Since this is\
larger than 4, this group may not enter. A single person then leaves, meaning 2 people remain on the terrace. That\
person then comes back, brining the total number up to three again. Finally, a pair of people try to enter the\
terrace, but is again denied since this would bring the total number up to 5.

| Sample Input | Sample Output |
| ---          | ---           |
| 4 5          | 2             |
| enter 3      |               |
| enter 2      |               |
| leave 1      |               |
| enter 1      |               |
| enter 2      |               |