/NONCE0/ s/0/[4]/; /NONCE[1-3]/ d;
/AESKEY0/ s/0/[8]/; /AESKEY[1-7]/ d;
/SHAH0/ s/0/[8]/; /SHAH[1-7]/ d;
/OSCDIFF/ s/uint8_t/int8_t/;
