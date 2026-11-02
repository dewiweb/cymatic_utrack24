// rea decompile_all
// name: FUN_004587ac
// address: 0x4587ac
// body: available
// range: 0x4587ac-0x4589c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004587ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  float *local_38 [5];
  undefined8 local_24;
  int local_1c;
  float local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4587b8;
  local_38[0] = (float *)0x4587bf;
  iVar1 = FUN_0044bfc5();
  local_24._4_4_ = *(int *)(iVar1 + 0x10);
  local_38[0] = (float *)0x4587ca;
  iVar1 = FUN_0044bfc5();
  local_1c = *(int *)(in_ECX + 0x18) + *(int *)(iVar1 + 0xc) * -2;
  *(float *)(in_ECX + 0x8c) = (float)*(int *)(iVar1 + 0xc);
  *(float *)(in_ECX + 0x90) = (float)*(int *)(in_ECX + 0x1c) * 0.5;
  *(float *)(in_ECX + 0x94) = (float)local_1c;
  *(float *)(in_ECX + 0x98) = (float)local_24._4_4_;
  local_14 = (float)local_24._4_4_ * 2.5;
  *(float *)(in_ECX + 0xa4) = local_14;
  local_24 = (double)local_14;
  local_38[0] = (float *)0x458830;
  iVar1 = FUN_0044bfc5();
  *(float *)(in_ECX + 0xa8) = (float)local_24 / *(float *)(iVar1 + 0x9c);
  local_38[0] = (float *)0x458844;
  iVar1 = FUN_0044bfc5();
  *(float *)(in_ECX + 0xac) = *(float *)(iVar1 + 0x98) * *(float *)(in_ECX + 0xa8);
  local_14 = *(float *)(in_ECX + 0xa8) * 0.5 + *(float *)(in_ECX + 0x8c);
  *(float *)(in_ECX + 0x9c) = local_14;
  local_24 = (double)CONCAT44(*(int *)(in_ECX + 0xd4),(undefined4)local_24);
  local_18 = *(float *)(in_ECX + 0x94) - *(float *)(in_ECX + 0xa8);
  *(float *)(in_ECX + 0xa0) = local_18;
  if (*(int *)(in_ECX + 0xd4) == 0) {
    local_38[0] = (float *)0x4588ad;
    uVar2 = FUN_005b3fb0();
  }
  else {
    local_38[0] = (float *)0x4588c3;
    uVar2 = FUN_005b3fb0();
  }
  *(undefined4 *)(in_ECX + 0xb0) = uVar2;
  local_38[0] = (float *)0x4588ce;
  FUN_00459001();
  local_38[0] = (float *)0x4588d9;
  iVar1 = FUN_0044bfc5();
  local_38[0] = *(float **)(iVar1 + 4);
  FUN_0044bfc5();
  FUN_004c0be5();
  local_24 = (double)CONCAT44(local_38,(undefined4)local_24);
  FUN_004652e4(in_ECX + 0xbc);
  FUN_00457ae9(in_ECX,(float)*(int *)(in_ECX + 0xb0));
  local_24 = (double)CONCAT44(*(float *)(in_ECX + 0x98) + *(float *)(in_ECX + 0x90),
                              SUB84(local_24,0));
  local_38[0] = (float *)0x458930;
  iVar3 = FUN_005b3fb0();
  iVar1 = (int)&local_24 + 4;
  local_38[0] = (float *)((float)iVar3 * 0.8);
  local_24 = (double)CONCAT44(local_38[0],(undefined4)local_24);
  FUN_0044bfc5(iVar1);
  FUN_0049f81a(iVar1);
  local_38[0] = (float *)0x458967;
  FUN_0049f5e8();
  local_38[0] = (float *)0x45896f;
  FUN_004c4d7a();
  local_38[0] = &local_18;
  FUN_0046537e();
  local_8 = 0;
  local_38[0] = &local_18;
  iVar1 = FUN_0049fa60();
  local_8 = 0xffffffff;
  *(int *)(in_ECX + 0xdc) = iVar1;
  local_38[0] = (float *)0x4589a0;
  FUN_004652d6();
  local_24 = (double)CONCAT44(*(int *)(in_ECX + 0xdc) * 2,(undefined4)local_24);
  local_38[0] = (float *)0x4589b5;
  uVar2 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0xe8) = uVar2;
  local_38[0] = (float *)0x4589c3;
  (**(code **)(*(int *)(in_ECX + 0x70) + 8))();
  return;
}

