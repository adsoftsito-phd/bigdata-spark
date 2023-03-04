A = [1 1;
     1 1];
B = [2 2;
     2 2];
C = [0 0;
     0 0];
renglones = 2;
columnas = 2;


for ren=1:renglones;
  for col=1:columnas;
    C(ren, col) = A(ren, col) + B(ren, col);
  % fprintf('%d\t', B(ren, col) )
  end
 % fprintf('\n')
end

A
B
C


