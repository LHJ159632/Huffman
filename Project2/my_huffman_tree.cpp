#include "utility.h"
#include "my_huffman_compress.h"

int main(void)
{
	try
	{
		HuffmanCompress obj;
		int select = 0;
		while (select != 3)
		{
			cout << endl << "1.Huffman compress.";
			cout << endl << "2.Huffman decompress.";
			cout << endl << "3.Exit";
			cout << endl << "Please select:";
			cin >> select;
			while (cin.get() != '\n');	

			switch (select)
			{
			case 1:
				obj.Compress();
				break;
			case 2:
				obj.DeCompress();
			}
		}
	}
	catch (Error err)
	{
		err.Show();
	}
	return 0;
}