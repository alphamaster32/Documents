int foo() {
    int a = 10, b;
    b = a;
    for (int i = 1; i < 10; i++) {
        b = a * 20;
    }
}

int main() {
    return foo();
}
