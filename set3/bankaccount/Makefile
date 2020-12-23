run:bank.cpp test_bank.cpp CreditAccount.cpp SavingsAccount.cpp
	g++ bank.cpp test_bank.cpp CreditAccount.cpp SavingsAccount.cpp CreditAccount.h SavingsAccount.h bank.h -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out
