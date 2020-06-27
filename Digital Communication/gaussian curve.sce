//Implementation of Gaussian Distribution Curve

clc
clear all
Var = input('Enter the Variance : ');
Mean = input('Enter the Mean : ');
x = -5:0.001:20;
pdf = ((1/sqrt(2*3.14*Var))*exp(-((x-Mean).^2)/(2*Var)));
Var1 = input('Enter the Variance : ');
Mean1 = input('Enter the Mean : ');
pdf1 = ((1/sqrt(2*3.14*Var1))*exp(-((x-Mean1).^2)/(2*Var1)));
Var2 = input('Enter the Variance : ');
Mean2 = input('Enter the Mean : ');
pdf2 = ((1/sqrt(2*3.14*Var2))*exp(-((x-Mean2).^2)/(2*Var2)));
plot(x,pdf,'r')
plot(x,pdf1,'b')
plot(x,pdf2,'g')
xtitle('Gaussian Distribution Curve','X','PDF')
h1 = legend('Curve','Curve 2','Curve 3');
//variance = 8 & 7 & 5
//mean = 7 & 6 & 4