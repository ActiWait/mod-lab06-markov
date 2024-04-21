//  Copyright 2024 Teodor

#include <gtest/gtest.h>
#include "textgen.h"



TEST(AutomataTest, test1) {
    std::vector<std::string>  s = {"1", "2", "3", "4", "5", "6"};
    std::deque<std::string> true_s = {"1", "2"};
    prefix pref_s = get_pref(s , 2);
    EXPECT_EQ(pref_s, true_s);
}

TEST(AutomataTest, test2) {
    std::vector<std::string>  words = {"1", "2", "3", "4", "5", "6"};

    std::map<prefix, postfix> statetab1;
    prefix pre1 = get_pref(s, 2);
    add_new_row(statelab1, pre1, s, 2);

    std::deque<std::string> true_s = {"1", "2"};
    std::map<prefix, postfix> statetab1;
    std::vector<std::string> post = {words[2]}
    statetab1[trues] = post;

    EXPECT_EQ(statetab1, statetab2);
}

TEST(AutomataTest, test3) {
    std::vector<std::string>  words = {"1", "2", "3", "4", "5", "6"};

    std::map<prefix, postfix> statetab = creaate_statetab(words, 2);

    std::deque<std::string> pref = {"1", "2"};
    std::vector<std::string> post;
    add_new_string(statetab, pref, post);
    std::string true_string = "3";


    EXPECT_EQ(post[0], true_string);
}

TEST(AutomataTest, test4) {
    std::vector<std::string>  words = {"1", "2", "3", "1", "2", "4"};

    std::map<prefix, postfix> statetab = creaate_statetab(words, 2);

    std::deque<std::string> pref = {"1", "2"};
    std::vector<std::string> post;
    add_new_string(statetab, pref, post);
    std::vector<std::string> true_string = {"3", "4"};

    EXPECT_EQ(true_string.find(post[0]) != true_string.end(), true);
}

TEST(AutomataTest, test5) {
    std::vector<std::string>  words = {"1", "2", "3", "4", "5", "6"};

    std::map<prefix, postfix> statetab = creaate_statetab(words, 2);
    std::vector<std::string> text = get_text(statetab, words, 2, 6);

    EXPECT_EQ(words, text);
}

