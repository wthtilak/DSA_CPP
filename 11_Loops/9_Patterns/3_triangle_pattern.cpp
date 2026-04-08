#include <iostream>
using namespace std;

void star_pattern1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  // output 👇
  //  *
  //  **
  //  ***
  //  ****
};

void int_pattern2(int n) {
  // int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << (i + 1) << " ";
    }
    // num++;
    cout << endl;
  }

  // output 👇
  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4
};

void char_pattern3(int n) {
  char ch = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << ch << " ";
    }
    ch++;
    // num++;
    cout << endl;
  }
  // output
  // A
  // B B
  // C C C
  // D D D D
};

void int_pattern4(int n) {
  for (int i = 0; i < n; i++) {
    int num = 1;
    for (int j = 0; j < i + 1; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }

  // using the 'j' variable
  // for(int i=0; i<n; i++)
  // {
  //   for(int j=1; j <= i+1; j++)
  //   {
  //     cout<< j << " ";
  //   }
  //   cout<<endl;
  // }

  // output 👇
  // 1
  // 1 2
  // 1 2 3
  // 1 2 3 4
};

void int_pattern5(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j >= 1; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
  // output 👇
  // 1
  // 2 1
  // 3 2 1
  // 4 3 2 1
};

void floyds_triangle_pattern6(int n) {
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i + 1; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
  // output 👇
  //  1
  //  2 3
  //  4 5 6
  //  7 8 9 10
};

void floyds_triangle_char_pattern7(int n) {
  char ch = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
  // output 👇
  //  A
  //  B C
  //  D E F
  //  G H I J
};

void char_pattern8(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j >= 0; j--) {
      char ch = 'A' + j;
      cout << ch << " ";
    }
    cout << endl;
  }
  // output 👇
  // A
  // B A
  // C B A
  // D C B A
};

void int_reverse_triangle_9(int n) {
  for (int i = 0; i < n; i++) {
    // spaces
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // nums
    for (int j = 0; j < n - i; j++) {
      cout << (i + 1);
    }
    cout << endl;
  }
}

void int_pyramid_10(int n) {
  for (int i = 0; i < n; i++) {
    // spaces
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // nums
    for (int j = 0; j < n - i; j++) {
      cout << (i + 1);
    }
    cout << endl;
  }
}

int main() {

  int n;
  cout << "Enter n:";
  cin >> n; // taking n from user

  // star_pattern1(n);
  // int_pattern2(n);
  // pattern3(n);
  // int_pattern4(n);
  // int_pattern5(n);
  // floyds_triangle_pattern6(n);
  // floyds_triangle_char_pattern7(n);

  // char_pattern8(n);

  int_reverse_triangle_9(n);

  return 0;
}
