unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2); //res * 2 nin amacı her adımda res değerine yeni bir bit eklemektir.
		octet = octet / 2;  //bitlerin sağa doğru kaydırılması için
		i--;
	}
	return (bit);
}
