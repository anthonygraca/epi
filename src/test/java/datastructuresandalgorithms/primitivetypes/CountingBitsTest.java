package datastructuresandalgorithms.primitivetypes;

import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class CountingBitsTest {
  @Test
  public void zerothExample() {
    CountingBits algo = new CountingBits();
    assertEquals(0, algo.countBits(0));
  }

  @Test
  public void firstExample() {
    CountingBits algo = new CountingBits();
    assertEquals(1, algo.countBits(1));
  }

  @Test
  public void secondExample() {
    CountingBits algo = new CountingBits();
    assertEquals(1, algo.countBits(2));
  }

  @Test
  public void thirdExample() {
    CountingBits algo = new CountingBits();
    assertEquals(2, algo.countBits(3));
  }

  @Test
  public void fourthExample() {
    CountingBits algo = new CountingBits();
    assertEquals(31, algo.countBits(0b11111111111111111111111111111101));
  }

  @Test
  public void fifthExample() {
    CountingBits algo = new CountingBits();
    assertEquals(30, algo.countBits(0b01111111111111111111111111111101));
  }

}
