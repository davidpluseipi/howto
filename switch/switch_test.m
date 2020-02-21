tic
run switch_ex.m
t = toc;
fprintf('MATLAB: %6.4f\n', t)

tic
!./build/switch
t = toc;
fprintf('C++: %6.4f\n', t)