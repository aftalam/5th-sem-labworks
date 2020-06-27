//Find Signal to Noise Ratio (SNR)& Probability of Error of Pulse Code Modulation (PCM) System

clc
clear all
n = input('Enter the Number of Bits : ');
snrdb = 4.8+6*n;
print(%io(2),snrdb,'in db');
xmax = input('Enter XMAX : ');
pb = input('Enter the Input Power : ');
snr = ((pb*3*(2^2*n))/(xmax^2));
print(%io(2),snr);
print(%io(2),'in no. unit');
notb = 10:1:30;
pe = 0.5*erfc(0.5*sqrt(pb/notb));
print(%io(2),pe);
plot(notb,pe)
xlabel('Noise Power Spectral Density')
ylabel('Probability of Error')
title('Probability of Error of PCM System')
//no of bits = 8
//xmax = 100
//input power = 1