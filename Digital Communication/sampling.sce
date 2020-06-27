//Perform Sampling of a Given Signal & Plot its Waveform

clc
clear all
fm = input('Enter the MAXIMUM frequency : ');
fs = input('Enter the SAMPLING frequency : ');
nyc = 4;
t = 0:1/fs:nyc*1/fm;
x = sin(2*%pi*fm*t);
y = squarewave(3*%pi*fm*t,100);
z = x.*y;
subplot(3,1,1)
plot(t,x)
xtitle('Message Signal','Time','Amplitude')
subplot(3,1,2)
plot2d3(t,y)
xtitle('Impulse Signal','Time','Amplitude')
subplot(3,1,3)
plot2d3(t,z)
xtitle('Sampled Signal','Time','Amplitude')
//max freq = 500e6
//critical freq = 1000e6
//under freq = 800e6
//over freq = 1800e7