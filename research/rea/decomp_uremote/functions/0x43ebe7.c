// rea decompile_all
// name: FUN_0043ebe7
// address: 0x43ebe7
// body: available
// range: 0x43ebe7-0x43ecc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0043ebe7(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_18 [4];
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x43ebf3;
  local_14 = (float)*(int *)(in_ECX + 0x1c) * 0.8;
  uVar1 = FUN_005b3fb0();
  FUN_004c0be5(uVar1);
  iVar2 = FUN_005b3fb0();
  local_14 = *(float *)(in_ECX + 0x18);
  *(int *)(in_ECX + 0x84) = iVar2;
  iVar3 = FUN_005b3fb0();
  *(int *)(in_ECX + 0x88) = iVar3;
  *(int *)(in_ECX + 0x8c) = iVar3 - iVar2;
  iVar2 = FUN_0044bfc5();
  iVar2 = *(int *)(iVar2 + 0x10);
  iVar3 = *(int *)(in_ECX + 0x1c);
  FUN_0046537e(local_18);
  local_8 = 0;
  FUN_0043a9ae(local_18,1000,iVar3 - (iVar3 / 2 + iVar2 / 2));
  FUN_0049f5e8();
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  FUN_004652d6();
  FUN_0043ecf4();
  return;
}

