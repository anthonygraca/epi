(ns data-structures-and-algorithms.primitive-types.counting-bits (:gen-class))

(comment "
(defn more-ones? [x]
  (> x 1))

(defn shift-and-increment [x]
  if (

(defn count-bits [x]
  (if (more-ones? x)
    (shift-and-increment x)
    0))
")

(defn count-bits [x]
  (bit-and x 1))
