#include <fstream>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct Account {
    string name;
    string password;
};

struct Post {
    int upload_time;
    int update_time;
    string name;
    string title;
    string text;
};

stack<Post> posts_list;
vector<Account> accounts_list;

void load_account();
void load_post() {
    return;
}

void check_sign_in();
void sign_in();

void show_post() {
    return;
}

void add_post() {
    return;
}

int main() {
    load_post();
    load_account();

    string option = "show_post";

    check_sign_in();

    while (true) {
        if (option == "show_post") {
        } else if (option == "add_post") {
        }
        cin >> option;
    }
    return 0;
}

void load_account() {
    string data;
    Account account;

    ifstream load_accounts_data;
    load_accounts_data.open("accounts_data.txt");
    while (getline(load_accounts_data, data)) {
        account.name = data;
        getline(load_accounts_data, data);
        account.password = data;
        accounts_list.push_back(account);
    }
}

void check_sign_in() {
    bool check_login = false;
    if (!check_login) {
        cout << "�w��" << endl;
        cout << "�A�n" << endl;
    }
    cout << "[1] ??��?�\n";
    cout << "[2] 註�??\n";
}

void sign_in() {
    string input_name, password;
    cout << "�?輸�?�使??��?????稱�??";
    while (cin >> input_name) {
        bool check_name = false;
        for (int i = 0; i < accounts_list.size(); i++) {
            if (accounts_list[i].name == input_name) {
                check_name = true;
            }
        }
        if (check_name) {
            break;
        }
    }
    cout << "�?輸�?��??碼�??\n[/end] �????\n";
    while (cin >> password) {
        char is_forget_password = false;
        for (int i = 0; i < accounts_list.size(); i++) {
            if (accounts_list[i].name == input_name && accounts_list[i].password != password) {
                cout << "�?碼�?�誤�?�??????�輸??��??\n";
                break;
            }
        }
        cout << "�?�?�?碼�??\n";
        cout << "[0] 並�?????\n";
        cout << "[1] ??��??\n";
        cin >> is_forget_password;
        if (is_forget_password) {
            cout << "???�???�己??�辦�?�????�?�???��?????麼辦???\n";
        }
    }
}