//
// Created by cowspirit on 2019-06-19.
//

#ifndef ALGORITHM_NQUEEN_H
#define ALGORITHM_NQUEEN_H


class NQueen {
public:
    static int tot;
    NQueen() {
        for (int i = 0; i < 8; ++i) {
            flag_a[i] = false;
        }
        for (int i = 0; i < 8 * 2 - 1; ++i) {
            flag_b[i] = flag_c[i] = false;
        }
    }

    void Nqueen(int i);

    void Print();

private:
    int n_ = 8;
    int pos[8];
    bool flag_a[8];
    bool flag_b[8 * 2 - 1];
    bool flag_c[8 * 2 - 1];
};


#endif //ALGORITHM_NQUEEN_H
