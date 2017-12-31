#include "core.h"
#include "parser.h"
#include "util.h"
#include "unitTest.h"
#include "codeicvm\codeicvm.h"
#include "codeicvm\opcodes.h"
#include "CodeicVMParser.h"
#include "codeicvm\variable.h"

int main(int argc,char **argv)
{
	using namespace std;
	std::cout << "Codeic" << std::endl;
	//UnitTest_Variable::test();
	//UnitTest_CodeicVM::test();
	UnitTest_CodeicVMParser::test();
	return 0;
}