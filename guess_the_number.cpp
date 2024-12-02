#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

int main() {
    // ランダム数生成の初期化
    std::srand(std::time(0));
    int target = std::rand() % 100 + 1; // 1～100のランダムな数

    std::cout << "数当てゲームへようこそ！(1～100)\n";
    int guess = 0; // ユーザーの入力を格納
    int attempts = 0; // 試行回数を記録

    // ユーザーが正解するまで繰り返す
    while (true) {
        std::cout << "あなたの予想は？: ";
        std::cin >> guess; // 入力を取得
        attempts++;

        if (guess == target) {
            std::cout << "正解です！ (" << attempts << "回目で正解しました)\n";
            break;
        }

        if (guess < target) {
            std::cout << "もっと大きいです！\n";
        } else if (guess > target) {
            std::cout << "もっと小さいです！\n";
        }
    }

    return 0;
}
