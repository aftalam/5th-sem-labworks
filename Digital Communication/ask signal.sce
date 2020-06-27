//Implementation of Amplitude Shift Keying (ASK) Signal

clc
clear all
f1 = input('Enter Carrier Frequency : ');
f2 = input('Enter Frequency of Pulse : ');
t = 0:0.001:1;
x = cos(2*3.14*f1*t);
y = (squarewave(2*3.14*f2*t)+1)/2;
z = x.*y;
subplot(3,1,1)
plot2d(t,x)
xtitle('Carrier Signal','Time','Amplitude')
subplot(3,1,2)
plot2d3(t,y)
xtitle('Modulating Signal','Time','Amplitude')
subplot(3,1,3)
plot(t,z)
xtitle('ASK Signal','Time','Amplitude')
//carrier freq = 20
//freq of pulse = 5