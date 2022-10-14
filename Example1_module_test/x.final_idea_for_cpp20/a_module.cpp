string get_username() {
    return input("What's your name, dear? ___")
}

export void say_hi() {
    auto name = get_username()
    print("Hi! " + name + "!")
}

export void print_something() {
    print("Hello World")
}

/*
#include <cstdio>
#include <iostream>

string get_username() {
    string username;
    cout << "What's your name, dear? ___";
    cin >> username;
    return username;
}

void say_hi() {
    auto name = get_username();
    printf("Hi! " + name + "!");
}

void print_something() {
    printf("Hello World");
}
*/
