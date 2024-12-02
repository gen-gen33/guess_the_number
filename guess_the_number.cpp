#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
#include <math.h> // pow()

// 有効な数値を取得する汎用関数
int getValidInput(int min, int max) {
    int input;
    while (true) {
        std::cin >> input;
        if (std::cin.fail() || input < min || input > max) {
            std::cout << "無効な入力です！" << min << "から" << max << "の範囲で入力してください。\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            return input;
        }
    }
}

int selectDifficulty() {
        std::cout << "難易度を選択してください：\n";
        std::cout << "command...\n";
        std::cout << "1: 1~10\n";
        std::cout << "2: 1~100\n";
        std::cout << "3: 1~1000\n";
    return getValidInput(1,3);
}

int playGame(int max_num) {
    // ランダム数生成の初期化
    std::srand(std::time(0));
    int target = std::rand() % max_num + 1; // 1～100のランダムな数
    int attempts = 0; // 試行回数を記録

    // ユーザーが正解するまで繰り返す
    while (true) {
        std::cout << "あなたの予想は？: ";
        int guess = getValidInput(1, max_num);
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
    return attempts;
}

bool confirmRetry() {
    char play_again;
    while (true) {
        std::cout << "もう一度プレイしますか？ (y/n):";
        std::cin >> play_again;
        if (play_again == 'y' ||  play_again == 'Y') {
            return true;
        } else if (play_again == 'n' ||  play_again == 'N') {
            return false;
        } else {
            std::cout << "無効な値です。もう一度入力してください。";
        }
    }
}

int main() {
    std::cout << "数当てゲームへようこそ！\n";
    while (true) {
        int difficulty = selectDifficulty();
        int max_num = pow(10, difficulty);
        int attempts = playGame(max_num);
        // もう一度プレイするかどうか確認
        if (!(confirmRetry())) {
            std::cout << "ゲームを終了します。ありがとうございました！\n";
            break;
        }
        std::cout << "\n再挑戦します!\n";
    }
    return 0;
}
