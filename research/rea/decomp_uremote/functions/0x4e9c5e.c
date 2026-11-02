// rea decompile_all
// name: FUN_004e9c5e
// address: 0x4e9c5e
// body: available
// range: 0x4e9c5e-0x4e9cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e9c5e(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4e9c6a;
  FUN_004e9f79();
  if (0 < *(int *)(in_ECX + 0x13c)) {
    FUN_004c2154(0x10003001);
  }
  piVar3 = (int *)(*(int *)(in_ECX + 0x11c) + 4);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (1 < iVar1) {
    *(byte *)(in_ECX + 0x95) = *(byte *)(in_ECX + 0x95) & 0xf7;
    uVar2 = FUN_004ebf83(local_14);
    local_8 = 0;
    FUN_00461693(uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004718fd(local_24);
    FUN_004615f7();
    FUN_004652d6();
  }
  return;
}

