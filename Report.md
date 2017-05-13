# PID Control Project

## Parameter Choosing
First, pure P controller was used and plenty of oscillations is observed. To give the best performance of pure P controller, the P factor chosen is 0.3.

Then, added D factor to it, found that when D is too small it still oscillates. So larger D factor were chosen which is 3.3 to make it more stable.

After P and D factors were chosen, the PD controller worked well and it successfully drove a circle. Maybe a good choice of I factor would improve the performance.

Finally, a little I factor(0.009) was added and there was no obvious improvement in performance. However, when I factor is huge, the vehicle would keep on driving a circle and do not drive on track.

Therefore, the parameters are chosen manually one by one which are:
```
P = 0.3
I = 0.009
D = 3.33

```


## Performance
It successfully drove a circle on that track, with plenty of oscillations however, which means that the path is not smooth enough even it successfully drove a circle.

To improve its performance, may better parameter tuning and some penalty on oscillation would help.


