package datastructuresandalgorithms.primitivetypes;

public class CountingBits {
  int countBits(int x) {
    int numBits = 0;
    for (int i = 0; i < Integer.BYTES * 8; i++) {
      numBits += x & 1;
      x = x >> 1;
    }
    return numBits;
  }
}
