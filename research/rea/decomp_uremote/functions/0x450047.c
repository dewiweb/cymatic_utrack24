// rea decompile_all
// name: FUN_00450047
// address: 0x450047
// body: available
// range: 0x450047-0x45014a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00450047(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x450053;
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x268);
  if (iVar1 == 0) {
    if (*(char *)(in_ECX + 0x60fc) != '\0') {
      return;
    }
    FUN_0043c289();
    return;
  }
  if (iVar1 == 1) {
    *(undefined1 *)(in_ECX + 0x60fc) = 0;
    FUN_0046537e(local_14);
    local_8 = 0;
    FUN_0043c29d(0);
    local_8 = 0xffffffff;
    FUN_004652d6();
    uVar2 = 3600000;
  }
  else {
    if (iVar1 == 2) {
      if ((*(byte *)(in_ECX + 0x5f2c) & 2) == 0) {
        return;
      }
      *(undefined1 *)(in_ECX + 0x60fc) = 1;
      FUN_0046537e(local_14);
      local_8 = 1;
      uVar2 = 2;
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      if ((*(byte *)(in_ECX + 0x5f2c) & 2) == 0) {
        return;
      }
      *(undefined1 *)(in_ECX + 0x60fc) = 1;
      FUN_0046537e(local_14);
      local_8 = 2;
      uVar2 = 1;
    }
    FUN_0043c29d(uVar2);
    local_8 = 0xffffffff;
    FUN_004652d6();
    uVar2 = 3000;
  }
  FUN_0043c256(uVar2);
  return;
}

