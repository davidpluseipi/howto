% Generate a random number uniformly distributed between 0 and 1
x = rand;       % number changes for each run
x = round(x);   % round the number to 0 or 1
if x == 0
    disp('Heads')
else
    disp('Tails')
end
