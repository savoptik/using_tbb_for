#  Попытка разобраться в синтаксисе tbb:parallel_for

Так как родной Apple LLVM не переваривает OpenMP, ненавидет даже кушать не может, я решил попробовать параллелить цыклы при помощи paralel_for из заголовка tbb.
Для этого взяты два вектора и просто сложены друг с другом сначала простым for, а потом при помощи parallel_for.

