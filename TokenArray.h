#ifndef _EXCELFORMUAL_TOKEN_ARRAY_H__
#define _EXCELFORMUAL_TOKEN_ARRAY_H__

#include <vector>

using std::vector;

namespace ExcelFormula{

	class Token;


	class TokenArray{
		public:
			TokenArray();

			size_t size() {return m_tokens.size();}

			bool isBOF() {return (m_index <= 0)?true:false;}

			bool isEOF() {return (m_index >= m_tokens.size())?true:false;}

			Token* getCurrent();

			Token* getNext();

			Token* getPrevious();

			Token* add(Token*);

			bool moveNext();

			void Reset(){m_index = 0;}

		private:
			size_t m_index;
			vector<Token*> m_tokens;
	};
}

#endif

