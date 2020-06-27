//Implementation of Unit Step & Impulse Signals

clc
clear all
t = -10:10;
u = [zeros(1,10),ones(1,11)];
i = [zeros(1,10),ones(1),zeros(1,10)];
subplot(2,2,1)
plot(t,u)
xtitle('Unit Step Continuous','Time','Amplitude')
subplot(2,2,2)
plot2d3(t,u)
xtitle('Unit Step Discrete','Time','Amplitude')
subplot(2,2,3)
plot(t,i)
xtitle('Impulse Continuous','Time','Amplitude')
subplot(2,2,4)
plot2d3(t,i)
xtitle('Impulse Discrete','Time','Amplitude')