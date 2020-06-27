//Implementation of Sine & Cosine Signals

clc
clear all
t = 0:0.1:10;
s = sin(t);
c = cos(t);
subplot(2,2,1)
plot(t,s)
xtitle('Sine Wave Continuous','Time','Amplitude')
subplot(2,2,2)
plot2d3(t,s)
xtitle('Sine Wave Discrete','Time','Amplitude')
subplot(2,2,3)
plot(t,c)
xtitle('Cosine Wave Continuous','Time','Amplitude')
subplot(2,2,4)
plot2d3(t,c)
xtitle('Cosine Wave Discrete','Time','Amplitude')