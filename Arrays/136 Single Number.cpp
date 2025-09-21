class Solution {
public:
//BIT manipulation meri jaan lelo
    int singleNumber(vector<int>& nums) {
        
        int val=0;

        for(int x : nums)
        {
            val=val^x;
        }

        return val;

       
    }
};

/*
1. Basic XOR properties

Self-canceling:

𝐴
⊕
𝐴
=
0
A⊕A=0
(a number XOR with itself is always zero).

Identity:

𝐴
⊕
0
=
𝐴
A⊕0=A.

Commutative:

𝐴
⊕
𝐵
=
𝐵
⊕
𝐴
A⊕B=B⊕A.
(order doesn’t matter).

Associative:

(
𝐴
⊕
𝐵
)
⊕
𝐶
=
𝐴
⊕
(
𝐵
⊕
𝐶
)
(A⊕B)⊕C=A⊕(B⊕C).
(grouping doesn’t matter).
 
A⊕B⊕A=(A⊕A)⊕B(associative + commutative)=0⊕B=B
That’s why you can shuffle and regroup terms freely.
*/
