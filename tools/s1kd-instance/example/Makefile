SRC=DMC-S1000DBIKE-AAA-D00-00-00-00AA-258A-A_009-00_en-US.XML

MK9=DME-B6865-MK9-S1000DBIKE-AAA-D00-00-00-00AA-258A-A_009-00_EN-US.XML
MK1=DME-B6865-MK1-S1000DBIKE-AAA-D00-00-00-00AA-258A-A_009-00_EN-US.XML

all: $(MK9) $(MK1)

$(MK9): $(SRC)
	s1kd-instance -e B6865-MK9 -O . \
		-s "type:prodattr=Mountain bicycle" \
		-s "model:prodattr=Brook trekker" \
		-s "version:prodattr=Mk9" \
		$(SRC)

$(MK1): $(SRC)
	s1kd-instance -e B6865-MK1 -O . \
		-s "type:prodattr=Mountain bicycle" \
		-s "model:prodattr=Mountain storm" \
		-s "version:prodattr=Mk1" \
		$(SRC)

clean:
	rm -f $(MK9) $(MK1)
