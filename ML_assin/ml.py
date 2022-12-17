# Main function of hw5 problem 4

import random


# Junction Tree Algorithm
def JCT4MarkovChain(potentials):
  # potentials = cell of potentials
  # marginals = output marginals

  marginals = potentials

  n = len(marginals)
  separators = [[1,1] for i in range(n-1)]
  print(marginals)
  # Forward
  for i in range(n-1):
    separators[i] = [sum(x) for x in zip(*marginals[i])]
    marginals[i+1] = [[x[0] * y[0] * y[1] for y in zip(separators[i], [1,1])] for x in marginals[i+1]]

  # Backward
  for i in range(n-1):
    s_old = separators[n-i-1]
    separators[n-i-1] = [sum(x) for x in zip(*marginals[n-i-1])]
    marginals[n-i-1] = [[x[0] * y[0] * y[1] / s_old[0] for y in zip([1,1], separators[n-i-1])] for x in marginals[n-i-1]]

  # Normalize
  for i in range(n):
    total = sum(sum(x) for x in marginals[i])
    marginals[i] = [[x / total for x in row] for row in marginals[i]]

  return marginals
n = 5
psis = [None] * (n-1)

for i in range(1, n):
  psis = [[random.random() for i in range(2)] for j in range(2)]

marginals = JCT4MarkovChain(psis)

p_test = [None] * 4
p_test[0] = [[0.1, 0.7], [0.8, 0.3]]
p_test[1] = [[0.5, 0.1], [0.1, 0.5]]
p_test[2] = [[0.1, 0.5], [0.5, 0.1]]
p_test[3] = [[0.9, 0.3], [0.1, 0.3]]
m_test = JCT4MarkovChain(p_test)