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
