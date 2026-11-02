// rea decompile_all
// name: FUN_0042d116
// address: 0x42d116
// body: available
// range: 0x42d116-0x42d1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042d116(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 0;
  local_8 = FUN_00411976(2,0,&local_c);
  if (local_c == 0) {
    if (param_2 != 0) {
      do {
        uVar3 = FUN_00411266();
        uVar5 = 0;
        if ((char)uVar3 < '\0') {
          do {
            if (param_2 <= uVar4) break;
            *(undefined2 *)(local_8 + uVar4 * 2) = 0;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= (uVar3 & 0x3f));
        }
        else if ((uVar3 & 0x40) == 0) {
          do {
            if (param_2 <= uVar4) break;
            cVar1 = FUN_00411266();
            *(short *)(local_8 + uVar4 * 2) = (short)cVar1;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= (uVar3 & 0x3f));
        }
        else {
          do {
            if (param_2 <= uVar4) break;
            uVar2 = FUN_00411277();
            *(undefined2 *)(local_8 + uVar4 * 2) = uVar2;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= (uVar3 & 0x3f));
        }
        if (uVar5 <= (uVar3 & 0x3f)) {
          FUN_00411a5c(local_8);
          return 0;
        }
      } while (uVar4 < param_2);
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

