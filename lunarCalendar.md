# A - Lunar Calendar

An astronomy enthusiast is tracking unique lunar events. Your task is to determine how many days within a given period of time features a lunar event.

Assume the timeline is numbered, starting from day 1 to day *N*. The first lunar event occurs on day *M* (which is guaranteed to be day 1 or later). After that, a lunar event repeats every *P* days, occurring on days *M*, *M + P*, *M + 2P*, and so on.

Calculate the total number of days between day 1 and day *N* (including both) on which a lunar event occurs.

## Input

The input consists of three integers:

- *N*: the total number of days.
- *M*: the day of the first lunar event.
- *P*: the period between subsequent lunar events.

## Output

Output a single integer representing the number of days between day 1 and day *N*, inclusive, on which a lunar event occurs.

## Constraints

- 1 <= N <= 200000  
- 1 <= M <= P <= 200000

## Source
This exercise was taken from [Neps Academy](https://neps.academy/br/competition/2339/exercise/3054), and made by Caique Paiva.
