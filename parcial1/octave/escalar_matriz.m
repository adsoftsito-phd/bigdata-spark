A = [0 1 2;
     3 4 5;
     6 7 8];
B = [0 0 0;
     0 0 0;
     0 0 0];
renglones = 3;
columnas = 3;

% impresion de matriz con for
escalar = input("valor escalar : ")

for ren=1:renglones;
  for col=1:columnas;
    B(ren, col) = A(ren, col) * escalar;
  % fprintf('%d\t', B(ren, col) )
  end
 % fprintf('\n')
end

A
B


