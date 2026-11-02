// rea decompile_all
// name: FUN_00438bab
// address: 0x438bab
// body: available
// range: 0x438bab-0x438c51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00438bab(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  undefined1 local_18 [4];
  float local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x438bb7;
  FUN_0046537e(local_18);
  local_8 = 0;
  iVar1 = *(int *)(unaff_EDI + 0x15c);
  local_14[0] = (float)*(int *)(iVar1 + 0x40) /
                (float)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x38));
  FUN_0049e8c7(local_14[0],(byte)(*(uint *)(iVar1 + 0xc) >> 1) & 1,*(byte *)(iVar1 + 0xc) & 1);
  uVar2 = FUN_0040f9c6(local_14);
  while (local_14[0] != 0.0) {
    FUN_00438c52(unaff_EDI,local_14[0],uVar2);
    uVar2 = FUN_0040fa14(uVar2);
  }
  FUN_004652d6();
  return;
}

