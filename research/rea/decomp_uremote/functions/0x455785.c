// rea decompile_all
// name: FUN_00455785
// address: 0x455785
// body: available
// range: 0x455785-0x455868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00455785(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_18 [4];
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x455791;
  iVar1 = FUN_0044bfc5();
  local_14 = (float)*(int *)(iVar1 + 8);
  iVar1 = FUN_0044bfc5();
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar2 = FUN_005b3fb0();
  uVar4 = 0;
  uVar5 = uVar2;
  uVar3 = FUN_005b3fb0(0,uVar2);
  FUN_004c09cc(uVar3,uVar4,uVar5);
  FUN_004c09cc(iVar1,*(int *)(in_ECX + 0x4ac) + *(int *)(in_ECX + 0x4a4) + iVar1,
               ((iVar1 * -2 - *(int *)(in_ECX + 0x4ac)) - *(int *)(in_ECX + 0x4a4)) +
               *(int *)(in_ECX + 0x1c));
  FUN_00440efe(3);
  FUN_0046537e(local_18);
  local_8 = 0;
  FUN_0043a9ae(local_18,*(undefined4 *)(in_ECX + 0x18),uVar2);
  FUN_0049f5e8();
  FUN_004c4d7a();
  FUN_004652d6();
  return;
}

