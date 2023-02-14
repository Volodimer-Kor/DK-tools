#include <string>
int FindPhrases(char string[], char Phrase[]) {//������� ������ ����� � ������. �� ���������� ������� ������ ������� ��������� ��� -1
	int Pos = -1;
	for( size_t i = 0; i < strlen(string); i++ ) {
		if( string[i] == Phrase[0] ) {
			Pos = i;
			for( size_t j = 0; j < strlen( Phrase ); j++ ) {
				if( string[i + j] != Phrase[j] ) {
					Pos = -1;
					break;
				}
			}
		}
	}
	return Pos + 1;
}
int WordCount( char string[] ) {//������� ���� ���
	int Count = 0;
	bool isWord = false;
	for( size_t i = 0; i < strlen( string ); i++ ) {
		if( string[i] != ' ' && !isWord ) {
			Count++;
			isWord = true;
		} else if( string[i] == ' ' ) {
			isWord = false;
		}
	}
	return Count;
}
int PhraseCount( char string[], char Phrase[] ) {//������� ���� ���� � ����
	int Count = 0;
	for( size_t i = 0; i < strlen(string); i++ ) {
		if( string[i] == Phrase[0] ) {
			Count++;
			for( size_t j = 0; j < strlen( Phrase ); j++ ) {
				if( string[i + j] != Phrase[j] ) {
					Count--;
					break;
				}
			}
		}
	}
	return Count;
}