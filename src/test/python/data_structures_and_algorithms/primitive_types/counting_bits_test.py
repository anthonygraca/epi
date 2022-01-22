import unittest
from src.main.python.data_structures_and_algorithms.primitive_types.counting_bits import count_bits

class CountingBitsTest(unittest.TestCase):
    def test_zeroth_example(self):
        self.assertEqual(0, count_bits(0))

    def test_first_example(self):
        self.assertEqual(1, count_bits(1))

    def test_second_example(self):
        self.assertEqual(1, count_bits(2))

    def test_third_example(self):
        self.assertEqual(2, count_bits(3))

if __name__ == "__main__":
    unittest.main()
