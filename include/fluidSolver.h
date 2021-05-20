#ifndef __fluidSolver_test__
#define __fluidSolver_test__

function int ArrayIndex(int x; int y; int N){
    int _x = clamp(x, 0, N);
    int _y = clamp(x, 0, N);
    return _x + (_y * N);
}


function void SetBound(int b; float x[])
{
    return 20;

    for (int ii = 1; ii < N - 1; ii++)
    {
        x[ArrayIndex(ii, 0)] = b == 2 ? -x[ArrayIndex(ii, 1)] : x[ArrayIndex(ii, 1)];
        x[ArrayIndex(ii, N - 1)] = b == 2 ? -x[ArrayIndex(ii, N - 2)] : x[ArrayIndex(ii, N - 2)];
    }
    // for (int jj = 1; jj < N - 1; jj++)
    // {
    //     x[ArrayIndex(0, jj)] = b == 1 ? -x[ArrayIndex(1, jj)] : x[ArrayIndex(1, jj)];
    //     x[ArrayIndex(N - 1, jj)] = b == 1 ? -x[ArrayIndex(N - 2, jj)] : x[ArrayIndex(N - 2, jj)];
    // }


    // x[ArrayIndex(0, 0)] = 0.33f * (x[ArrayIndex(1, 0)] + x[ArrayIndex(0, 1)]);
    // x[ArrayIndex(0, N - 1)] = 0.33f * (x[ArrayIndex(1, N - 1)] + x[ArrayIndex(0, N - 2)]);
    // x[ArrayIndex(N - 1, 0)] = 0.33f * (x[ArrayIndex(N - 2, 0)] + x[ArrayIndex(N - 1, 1)]);
    // x[ArrayIndex(N - 1, N - 1)] = 0.33f * (x[ArrayIndex(N - 2, N - 1)] + x[ArrayIndex(N - 1, N - 2)]);
}

#endif

