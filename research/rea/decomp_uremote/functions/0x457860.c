// rea decompile_all
// name: FUN_00457860
// address: 0x457860
// body: available
// range: 0x457860-0x457abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00457860(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x45786c;
  iVar2 = FUN_0044bfc5();
  local_18 = *(int *)(in_ECX + 0x18);
  local_14 = ((float)local_18 - (float)*(int *)(iVar2 + 0xc) * 6.0) * 0.25;
  uVar3 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x88) = uVar3;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  uVar3 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x90) = uVar3;
  uVar4 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x94) = uVar4;
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(in_ECX + 0x88);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0xa8) = uVar4;
  *(undefined4 *)(in_ECX + 0xac) = uVar4;
  local_18 = *(int *)(in_ECX + 0x88);
  uVar3 = *(undefined4 *)(in_ECX + 0x8c);
  uVar5 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0xb0) = uVar5;
  *(undefined4 *)(in_ECX + 0xb4) = uVar3;
  *(undefined4 *)(in_ECX + 0xb8) = uVar4;
  *(undefined4 *)(in_ECX + 0xbc) = uVar4;
  local_18 = *(int *)(in_ECX + 0x88);
  uVar3 = *(undefined4 *)(in_ECX + 0x8c);
  uVar5 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0xc0) = uVar5;
  *(undefined4 *)(in_ECX + 0xc4) = uVar3;
  *(undefined4 *)(in_ECX + 200) = uVar4;
  *(undefined4 *)(in_ECX + 0xcc) = uVar4;
  FUN_0046537e(&local_18);
  local_8 = 0;
  FUN_0043a9ae(&local_18,uVar4,uVar4);
  FUN_0049f5e8();
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  FUN_004652d6();
  uVar3 = *(undefined4 *)(in_ECX + 0x8c);
  uVar5 = FUN_005b3fb0(uVar3,uVar4);
  FUN_004c09cc(uVar5,uVar3,uVar4);
  iVar2 = FUN_005b3fb0();
  *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x1c) - iVar2;
  FUN_00478990();
  FUN_00478b0d(0,0);
  FUN_00478ba1((float)*(int *)(in_ECX + 0x18),0);
  local_14 = (float)iVar2;
  FUN_00478ba1((float)*(int *)(in_ECX + 0x18),local_14);
  piVar1 = (int *)(in_ECX + 0x98);
  FUN_00478ba1((float)(*piVar1 + *(int *)(in_ECX + 0x9c)),local_14);
  FUN_00478ba1((float)*piVar1,(float)*(int *)(in_ECX + 0x1c));
  FUN_00478ba1((float)(*piVar1 - *(int *)(in_ECX + 0x9c)),local_14);
  FUN_00478ba1(0,local_14);
  FUN_00478e1f();
  return;
}

