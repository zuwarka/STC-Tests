Fd=249;
t=0:1/Fd:1;
% функция синуса 
sinusoid = sin(4*pi*t);
subplot(4,1,1);
plot(sinusoid)
title 'Сигнал синуса';
xlabel ('Частота');
ylabel ('Амплитуда');
% функция косинуса
cosinusoid = cos(4*pi*t);
subplot(4,1,2);
plot(cosinusoid);
title 'Сигнал косинуса';
xlabel ('Частота');
ylabel ('Амплитуда');
% функция тангенса
tangensoid = tan(4*pi*t);
subplot(4,1,3);
plot(tangensoid);
title 'Сигнал тангенса';
xlabel ('Частота');
ylabel ('Амплитуда');
% функция случайного сигнала
randomer = 200*rand(250, 1);
subplot(4,1,4);
plot(randomer);
title 'Случайный сигнал';
xlabel ('Частота');
ylabel ('Амплитуда');
% подключаем инструментарий для создания фильров и отрисовки спектров
sptool;
