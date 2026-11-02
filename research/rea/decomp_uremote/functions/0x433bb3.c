// rea decompile_all
// name: FUN_00433bb3
// address: 0x433bb3
// body: available
// range: 0x433bb3-0x433d94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00433bb3(void)

{
  undefined4 uVar1;
  char *_Str1;
  char *_Str2;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  undefined4 local_f4;
  int local_e0;
  int local_d8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a0;
  undefined4 local_84;
  int local_78;
  undefined4 local_6c;
  undefined4 local_68;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 100);
  FUN_004350b3();
  uVar2 = FUN_00411912(0xc,&local_8);
  *(undefined4 *)(unaff_EDI + 0x1ec) = uVar2;
  if (((local_8 == 0) && (local_8 = FUN_004343e8(uVar1), local_8 == 0)) &&
     (local_8 = FUN_00434f44(), local_8 == 0)) {
    if (*(char *)(unaff_EDI + 0x1b1) == '*') {
      *(undefined4 *)(unaff_EDI + 0x1a0) = local_bc;
      if (local_78 == 0) {
        local_8 = 3;
      }
      *(undefined4 *)(unaff_EDI + 0x18c) = local_84;
      *(undefined4 *)(unaff_EDI + 0x1a8) = local_6c;
      *(undefined4 *)(unaff_EDI + 0x1ac) = local_68;
      *(undefined4 *)(unaff_EDI + 400) = local_b8;
      *(undefined4 *)(unaff_EDI + 0x1a4) = local_a0;
      if (*(int *)(unaff_EDI + 0x170) == 1) {
        iVar4 = 0;
        local_10 = 0;
        local_c = 0;
        if (0 < local_e0) {
          do {
            iVar5 = 0;
            *(undefined2 *)(*(int *)(unaff_EDI + 0x180) + iVar4 * 2) = 0;
            *(char **)(*(int *)(unaff_EDI + 0x184) + iVar4 * 4) = ".notdef";
            _Str1 = *(char **)(local_d8 + iVar4 * 4);
            if ((_Str1 != (char *)0x0) && (0 < *(int *)(unaff_EDI + 0x1a0))) {
              do {
                _Str2 = *(char **)(*(int *)(unaff_EDI + 0x1a4) + iVar5 * 4);
                iVar3 = _strcmp(_Str1,_Str2);
                if (iVar3 == 0) {
                  *(short *)(*(int *)(unaff_EDI + 0x180) + iVar4 * 2) = (short)iVar5;
                  *(char **)(*(int *)(unaff_EDI + 0x184) + iVar4 * 4) = _Str2;
                  iVar5 = _strcmp(".notdef",_Str2);
                  if (iVar5 != 0) {
                    if (iVar4 < local_10) {
                      local_10 = iVar4;
                    }
                    if (local_c <= iVar4) {
                      local_c = iVar4 + 1;
                    }
                  }
                  break;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(unaff_EDI + 0x1a0));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_e0);
        }
        *(int *)(unaff_EDI + 0x178) = local_10;
        *(int *)(unaff_EDI + 0x17c) = local_c;
        *(undefined4 *)(unaff_EDI + 0x174) = local_f4;
      }
    }
    else {
      local_8 = 2;
    }
  }
  FUN_004350df();
  return local_8;
}

