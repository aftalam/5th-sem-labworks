//Implementation of Frequency Shift Keying (FSK) Signal

clc
clear all
fc1 = input('Enter High Carrier Frequency : ');
fc2 = input('Enter Low Carrier Frequency : ');
fp = input('Enter Number of Pulses : ');
t = 0:0.001:1;
c1 = sin(2*3.14*fc1*t);
c2 = sin(2*3.14*fc2*t);
m = (squarewave(2*3.14*fp*t)+1)*0.5;
for i = 0:1000
    if m(i+1)==0
        mm(i+1) = c2(i+1);
    else
        mm(i+1) = c1(i+1);
    end
end
subplot(4,1,1)
plot2d(t,m)
xtitle('Modulating Signal','Time','Amplitude')
subplot(4,1,2)
plot2d(t,c1)
xtitle('High Carrier Frequency Signal','Time','Amplitude')
subplot(4,1,3)
plot2d(t,c2)
xtitle('Low Carrier Frequency Signal','Time','Amplitude')
subplot(4,1,4)
plot2d(t,mm)
xtitle('FSK Signal','Time','Amplitude')
//high carrier freq = 30
//low carrier freq = 5
//no of pulses = 5