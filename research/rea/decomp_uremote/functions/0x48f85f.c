// rea decompile_all
// name: FUN_0048f85f
// address: 0x48f85f
// body: available
// range: 0x48f85f-0x48fb62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0048f85f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *unaff_EDI;
  if (iVar1 < 0) {
    return true;
  }
  if (100000 < iVar1) {
    return true;
  }
  iVar2 = unaff_EDI[1];
  if (iVar2 < 0) {
    return true;
  }
  if (100000 - iVar1 < iVar2) {
    return true;
  }
  iVar1 = unaff_EDI[2];
  if (iVar1 < 0) {
    return true;
  }
  if (100000 < iVar1) {
    return true;
  }
  if (unaff_EDI[3] < 0) {
    return true;
  }
  if (100000 - iVar1 < unaff_EDI[3]) {
    return true;
  }
  iVar3 = unaff_EDI[4];
  if (iVar3 < 0) {
    return true;
  }
  if (100000 < iVar3) {
    return true;
  }
  if (unaff_EDI[5] < 0) {
    return true;
  }
  if (100000 - iVar3 < unaff_EDI[5]) {
    return true;
  }
  iVar3 = unaff_EDI[6];
  if (iVar3 < 0) {
    return true;
  }
  if (100000 < iVar3) {
    return true;
  }
  if (unaff_EDI[7] < 0) {
    return true;
  }
  if (unaff_EDI[7] <= 100000 - iVar3) {
    iVar1 = FUN_00490972(iVar1 - unaff_EDI[4],iVar2 - unaff_EDI[5],7);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_00490972(unaff_EDI[3] - unaff_EDI[5],*unaff_EDI - unaff_EDI[4],7), iVar1 != 0))
    {
      iVar1 = FUN_00490972(unaff_EDI[2] - unaff_EDI[4],unaff_EDI[7] - unaff_EDI[5],7);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00490972(unaff_EDI[3] - unaff_EDI[5],unaff_EDI[6] - unaff_EDI[4],7),
         iVar1 != 0)) {
        iVar1 = FUN_00490972(unaff_EDI[7],local_8 - local_c,local_8 - local_c);
        if ((iVar1 != 0) && (unaff_EDI[7] < local_10)) {
          iVar1 = FUN_00490972(unaff_EDI[1] - unaff_EDI[5],unaff_EDI[6] - unaff_EDI[4],7);
          if (iVar1 == 0) {
            return 2;
          }
          iVar1 = FUN_00490972(*unaff_EDI - unaff_EDI[4],unaff_EDI[7] - unaff_EDI[5],7);
          if (iVar1 == 0) {
            return 2;
          }
          iVar1 = FUN_00490972(unaff_EDI[7],local_8 - local_c,local_8 - local_c);
          if ((iVar1 != 0) && (unaff_EDI[7] < local_c)) {
            iVar1 = FUN_004909d1(unaff_EDI[7]);
            iVar2 = FUN_004909d1(local_10);
            iVar3 = FUN_004909d1(local_c);
            iVar3 = (iVar1 - iVar2) - iVar3;
            if ((((0 < iVar3) &&
                 ((((iVar1 = FUN_00490972(*unaff_EDI,100000,local_10), iVar1 != 0 &&
                    (iVar1 = FUN_00490972(unaff_EDI[1],100000,local_10), iVar1 != 0)) &&
                   (iVar1 = FUN_00490972((100000 - *unaff_EDI) - unaff_EDI[1],100000,local_10),
                   iVar1 != 0)) &&
                  ((iVar1 = FUN_00490972(unaff_EDI[2],100000,local_c), iVar1 != 0 &&
                   (iVar1 = FUN_00490972(unaff_EDI[3],100000,local_c), iVar1 != 0)))))) &&
                (iVar1 = FUN_00490972((100000 - unaff_EDI[3]) - unaff_EDI[2],100000,local_c),
                iVar1 != 0)) &&
               ((iVar1 = FUN_00490972(unaff_EDI[4],iVar3,100000), iVar1 != 0 &&
                (iVar1 = FUN_00490972(unaff_EDI[5],iVar3,100000), iVar1 != 0)))) {
              iVar1 = FUN_00490972((100000 - unaff_EDI[5]) - unaff_EDI[4],iVar3,100000);
              return iVar1 == 0;
            }
          }
        }
        return true;
      }
    }
    return 2;
  }
  return true;
}

