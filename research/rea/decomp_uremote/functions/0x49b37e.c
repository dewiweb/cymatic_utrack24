// rea decompile_all
// name: FUN_0049b37e
// address: 0x49b37e
// body: available
// range: 0x49b37e-0x49b471 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b37e(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  byte *in_ECX;
  byte bVar3;
  uint local_10c;
  undefined1 local_90 [136];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_90;
  bVar3 = 0;
  bVar1 = true;
  local_10c = 0;
  if (in_ECX == (byte *)0x0) {
    *param_1 = 0;
  }
  else {
    bVar2 = *in_ECX;
    if (bVar2 != 0) {
      do {
        if (0x4e < local_10c) break;
        in_ECX = in_ECX + 1;
        if (((bVar2 < 0x21) || (0x7e < bVar2)) && (bVar2 < 0xa1)) {
          if (bVar1) {
            if (bVar3 == 0) goto LAB_0049b3f9;
          }
          else {
            *param_1 = 0x20;
            param_1 = param_1 + 1;
            local_10c = local_10c + 1;
            bVar1 = true;
            if (bVar2 != 0x20) {
LAB_0049b3f9:
              bVar3 = bVar2;
            }
          }
        }
        else {
          *param_1 = bVar2;
          param_1 = param_1 + 1;
          local_10c = local_10c + 1;
          bVar1 = false;
        }
        bVar2 = *in_ECX;
      } while (bVar2 != 0);
      if ((local_10c != 0) && (bVar1)) {
        local_10c = local_10c - 1;
        param_1 = param_1 + -1;
        if (bVar3 == 0) {
          bVar3 = 0x20;
        }
      }
    }
    *param_1 = 0;
    if (local_10c != 0) {
      if (*in_ECX == 0) {
        if (bVar3 != 0) {
          FUN_00491248();
          FUN_0049125c();
          FUN_004912ac();
        }
      }
      else {
        FUN_00491216();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_90);
  return;
}

