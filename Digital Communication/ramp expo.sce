//Implementation of Ramp & Exponential Signals

clc
clear all
t = 0:1:50;
for n = 0:50;
    x(n+1) = n;
end
subplot(3,2,1)
plot(t,x)
xtitle('Ramp Continuous','Time','Amplitude')
subplot(3,2,2)
plot2d3(t,x)
xtitle('Ramp Discrete','Time','Amplitude')
x = [0:0.1:2*%pi];
e = exp(x);
subplot(3,2,3)
plot(x,e)
xtitle('exp(x) Continuous','Time','Amplitude')
subplot(3,2,4)
plot2d3(x,e)
xtitle('exp(x) Discrete','Time','Amplitude')
e = exp(-x);
subplot(3,2,5)
plot(x,e)
xtitle('exp(-x) Continuous','Time','Amplitude')
subplot(3,2,6)
plot2d3(x,e)
xtitle('exp(-x) Discrete','Time','Amplitude')