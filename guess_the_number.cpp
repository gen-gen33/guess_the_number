#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
#include <math.h> // pow()

int main() {
    std::cout << "数当てゲームへようこそ！\n";
<<<<<<< HEAD
    std::cout << "難易度を選択してください：\n";
    std::cout << "command...\n";
    std::cout << "1: 1~10\n";
    std::cout << "2: 1~100\n";
    std::cout << "3: 1~1000\n";
    int difficulty = 0;
    int max_num = 0;
    while (true) {
        std::cin >> difficulty;
        // 入力エラーが発生した場合
        if (std::cin.fail()) {
            std::cout << "無効な入力です！数値を入力してください。\n";
            std::cin.clear();               // エラー状態をクリア
            std::cin.ignore(1000, '\n');    // 入力バッファをクリア
            continue;
=======
    while (true) {
        std::cout << "難易度を選択してください：\n";
        std::cout << "command...\n";
        std::cout << "1: 1~10\n";
        std::cout << "2: 1~100\n";
        std::cout << "3: 1~1000\n";
        int difficulty = 0;
        int max_num = 0;
        while (true) {
            std::cin >> difficulty;
            // 入力エラーが発生した場合
            if (std::cin.fail()) {
                std::cout << "無効な入力です！数値を入力してください。\n";
                std::cin.clear();               // エラー状態をクリア
                std::cin.ignore(1000, '\n');    // 入力バッファをクリア
                continue;
            }
            if (difficulty<0 || 3<difficulty){
                std::cout << "1~3を選んでください\n";
            } else{
                std::cout << "難易度"<<difficulty<<"\n";
                break;
            }
>>>>>>> replay
        }
        max_num = pow(10, difficulty);

        // ランダム数生成の初期化
        std::srand(std::time(0));
        int target = std::rand() % max_num + 1; // 1～100のランダムな数

        int guess = 0; // ユーザーの入力を格納
        int attempts = 0; // 試行回数を記録

        // ユーザーが正解するまで繰り返す
        while (true) {
            std::cout << "あなたの予想は？: ";
            std::cin >> guess; // 入力を取得
            attempts++;
            // 入力エラーが発生した場合
            if (std::cin.fail()) {
                std::cout << "無効な入力です！\n";
                std::cout << "0から" << max_num << "の値を入力してください\n";
                std::cin.clear();               // エラー状態をクリア
                std::cin.ignore(1000, '\n');    // 入力バッファをクリア
                continue;
            }

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

        // もう一度プレイするかどうか確認
        char play_again;
        std::cout << "もう一度プレイしますか？ (y/n):";
        std::cin >> play_again;
        if (play_again != 'y' && play_again != 'Y') {
            std::cout << "ゲームを終了します。ありがとうございました！\n";
            break;
        }

        std::cout << "\n再挑戦します!\n";
    }

    return 0;
}
