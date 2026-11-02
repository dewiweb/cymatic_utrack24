// rea decompile_all
// name: FUN_0043ac31
// address: 0x43ac31
// body: available
// range: 0x43ac31-0x43aebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0043ac31(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  float10 extraout_ST0;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x43ac3d;
  local_14 = 0x3f19999a;
  iVar1 = FUN_0044bfc5();
  if (*(int *)(iVar1 + 0x78) == 0) {
    local_14 = 0x3f666666;
  }
  local_1c = *(float *)(in_ECX + 0x18);
  iVar2 = FUN_005b3fb0();
  local_24 = *(float *)(in_ECX + 0x1c);
  iVar1 = (int)(iVar2 * 9 + (iVar2 * 9 >> 0x1f & 0xfU)) >> 4;
  local_20 = (int)local_24;
  local_1c = (float)iVar1;
  local_18 = (float)iVar2;
  iVar3 = FUN_005b3fb0();
  if (iVar3 < iVar1) {
    iVar2 = iVar3 / 9 << 4;
    iVar1 = iVar3;
    local_1c = (float)iVar3;
    local_18 = (float)iVar2;
  }
  local_20 = (*(int *)(in_ECX + 0x18) - iVar2) / 2;
  *(float *)(in_ECX + 0x74) = (float)local_20;
  *(float *)(in_ECX + 0x78) = (float)(((int)local_24 - iVar1) / 2);
  *(float *)(in_ECX + 0x7c) = (float)(int)local_18;
  *(float *)(in_ECX + 0x80) = (float)(int)local_1c;
  local_24 = *(float *)(in_ECX + 0x7c);
  local_18 = local_24 * 0.05;
  local_1c = (float)(int)local_1c - (local_18 + local_18);
  iVar1 = FUN_005b3fb0();
  *(float *)(in_ECX + 0x1f0) = local_1c * 0.5;
  local_20 = *(undefined4 *)(in_ECX + 0x78);
  local_14 = *(undefined4 *)(in_ECX + 0x7c);
  local_28 = *(float *)(in_ECX + 0x78);
  local_2c = *(float *)(in_ECX + 0x74);
  local_1c = (float)iVar1;
  local_24 = *(float *)(in_ECX + 0x80) + *(float *)(in_ECX + 0x78);
  uVar4 = FUN_005b3fb0();
  FUN_005b3fb0();
  uVar5 = FUN_005b3fb0();
  uVar6 = FUN_005b3fb0();
  FUN_004c09cc(uVar6,uVar5,uVar4);
  local_2c = *(float *)(in_ECX + 0x74);
  local_24 = (float)FUN_005b3fb0();
  local_2c = *(float *)(in_ECX + 0x78);
  iVar1 = FUN_005b3fb0();
  local_28 = (float)(*(int *)(in_ECX + 0x14c) - iVar1) * 0.4;
  local_2c = (float)(((((float10)*(float *)(in_ECX + 0x7c) - (float10)*(float *)(in_ECX + 0x1f0)) -
                      extraout_ST0) - extraout_ST0) - extraout_ST0);
  uVar4 = FUN_005b3fb0();
  FUN_005b3fb0();
  FUN_004c09cc(local_24,iVar1,uVar4);
  piVar7 = (int *)FUN_004f03e7();
  uVar4 = (**(code **)(*piVar7 + 8))(&local_28);
  local_8 = 0;
  FUN_00465bec(&local_2c,uVar4);
  FUN_00465317(in_ECX + 500);
  FUN_004652d6();
  local_8 = 0xffffffff;
  FUN_004652d6();
  local_2c = ((float)*(int *)(in_ECX + 0x14c) -
             (float)(*(int *)(in_ECX + 0xa0) + *(int *)(in_ECX + 0x98))) / 3.0;
  uVar4 = FUN_005b3fb0();
  FUN_0043a9ae(in_ECX + 500,*(undefined4 *)(in_ECX + 0x9c),uVar4);
  FUN_0049f5e8();
  FUN_004c4d7a();
  return;
}

