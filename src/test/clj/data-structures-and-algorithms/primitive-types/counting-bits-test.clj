(ns tests.counting-bits-test 
  (:require [data-structures-and-algorithms.primitive-types.counting-bits :as algo])
  (:use clojure.test))

(deftest must-pass (is true))

(deftest zeroth-example 
  (is (= (algo/count-bits 0) 0)))

(deftest first-example
  (is (= (algo/count-bits 1) 1)))

;(deftest second-example
;  (is (= (algo/count-bits 2) 1)))

;(deftest third-example
;  (is (= (algo/count-bits 3) 2)))
