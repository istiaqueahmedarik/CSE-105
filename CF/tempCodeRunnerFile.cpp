if (lexicographical_compare(sub1.begin(), sub1.end(), sub3.begin(), sub3.end()) && lexicographical_compare(sub2.begin(), sub2.end(), sub3.begin(), sub3.end()))
    {
        return 1;
    }
    else if (lexicographical_compare(sub1.begin(), sub1.end(), sub3.begin(), sub3.end()) == false && lexicographical_compare(sub2.begin(), sub2.end(), sub3.begin(), sub3.end()) == false)
    {
        return 1;
    }