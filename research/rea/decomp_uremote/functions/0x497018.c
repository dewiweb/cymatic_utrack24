// rea decompile_all
// name: FUN_00497018
// address: 0x497018
// body: available
// range: 0x497018-0x497112 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49703f to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497018(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  int unaff_ESI;
  uint uVar3;
  byte local_20c;
  byte local_20b;
  short local_208 [60];
  undefined1 local_190 [392];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_190;
  uVar3 = *(uint *)(unaff_ESI + 0x28);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if (((uVar3 & 4) == 0) && ((uVar3 & 2) != 0)) {
    if ((in_EDX == 0) || ((*(byte *)(in_EDX + 8) & 0x40) == 0)) {
      uVar3 = in_ECX >> 1;
      if ((uVar3 == *(ushort *)(unaff_ESI + 0xfc)) && (uVar3 < 0x101)) {
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            FUN_00495a35(&local_20c,2);
            local_208[uVar2] = (ushort)local_20c * 0x100 + (ushort)local_20b;
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        iVar1 = FUN_00495a5d();
        if (iVar1 == 0) {
          FUN_00498ceb(local_208);
        }
        goto LAB_004970fc;
      }
      FUN_00495a5d();
    }
    else {
      FUN_00495a5d();
    }
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
LAB_004970fc:
  __security_check_cookie(local_8 ^ (uint)local_190);
  return;
}

