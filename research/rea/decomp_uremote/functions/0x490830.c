// rea decompile_all
// name: FUN_00490830
// address: 0x490830
// body: available
// range: 0x490830-0x490935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00490830(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_14;
  
  uVar2 = *param_3;
  for (uVar4 = *param_4; uVar4 < param_2; uVar4 = uVar4 + 1) {
    cVar1 = *(char *)(uVar4 + param_1);
    if (cVar1 < '1') {
      if (cVar1 == '0') {
        uStack_14 = 8;
      }
      else if (cVar1 == '+') {
        uStack_14 = 4;
      }
      else if (cVar1 == '-') {
        uStack_14 = 0x84;
      }
      else {
        if (cVar1 != '.') break;
        uStack_14 = 0x10;
      }
    }
    else {
      if (cVar1 < '1') break;
      if (cVar1 < ':') {
        uStack_14 = 0x108;
      }
      else {
        if ((cVar1 != 'E') && (cVar1 != 'e')) break;
        uStack_14 = 0x20;
      }
    }
    uVar3 = (uStack_14 & 0x3c) + (uVar2 & 3);
    if (uVar3 < 0xb) {
      if (uVar3 == 10) {
        uVar2 = uVar2 | 0x48;
      }
      else {
        if (uVar3 == 4) {
          if ((uVar2 & 0x3c) != 0) break;
        }
        else {
          if (uVar3 == 6) {
            if ((uVar2 & 0x3c) == 0) {
              uVar2 = uVar2 | 4;
              goto LAB_00490917;
            }
            break;
          }
          if (uVar3 == 8) {
            if ((uVar2 & 0x10) != 0) {
              uVar2 = uVar2 & 0x1c0 | 0x11;
            }
          }
          else if (uVar3 != 9) break;
          uStack_14 = uStack_14 | 0x40;
        }
LAB_0049090c:
        uVar2 = uVar2 | uStack_14;
      }
    }
    else if (uVar3 == 0x10) {
      if ((uVar2 & 0x10) != 0) break;
      if ((uVar2 & 8) != 0) goto LAB_0049090c;
      uVar2 = uVar2 & 0x1c0 | uStack_14 | 1;
    }
    else {
      if (((uVar3 != 0x20) && (uVar3 != 0x21)) || ((uVar2 & 8) == 0)) break;
      uVar2 = uVar2 & 0x1c0 | 2;
    }
LAB_00490917:
  }
  *param_3 = uVar2;
  *param_4 = uVar4;
  return uVar2 >> 3 & 1;
}

