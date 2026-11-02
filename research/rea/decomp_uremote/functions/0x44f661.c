// rea decompile_all
// name: FUN_0044f661
// address: 0x44f661
// body: available
// range: 0x44f661-0x44fcbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044f661(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  float10 fVar8;
  undefined8 **ppuVar9;
  float local_54;
  undefined8 *local_50;
  uint uStack_4c;
  undefined1 local_2c [4];
  undefined8 local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e24f2;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  local_54 = *(float *)(in_ECX + 0x18);
  if (local_54 == 0.0) {
    return;
  }
  local_50 = *(undefined8 **)(in_ECX + 0x1c);
  if (local_50 == (undefined8 *)0x0) {
    return;
  }
  ExceptionList = &local_14;
  FUN_0044bfc5();
  FUN_0044cfd6();
  local_50 = (undefined8 *)0x44f6b8;
  iVar5 = FUN_0044bfc5();
  fVar3 = (float)*(int *)(iVar5 + 4);
  local_50 = (undefined8 *)0x44f6c4;
  iVar5 = FUN_0044bfc5();
  fVar4 = (float)*(int *)(iVar5 + 0xc);
  local_50 = (undefined8 *)0x44f6d0;
  iVar5 = FUN_0044bfc5();
  fVar1 = *(float *)(iVar5 + 0x30);
  fVar2 = *(float *)(iVar5 + 0x28);
  *(undefined4 *)(in_ECX + 0x434) = 0;
  *(undefined4 *)(in_ECX + 0x438) = 0;
  *(float *)(in_ECX + 0x43c) = fVar1 + fVar2;
  *(float *)(in_ECX + 0x440) = fVar3;
  local_50 = (undefined8 *)
             ((float)*(int *)(in_ECX + 0x18) * 0.7 -
             (*(float *)(in_ECX + 0x43c) + *(float *)(in_ECX + 0x434)));
  local_54 = fVar3 * 4.0;
  FUN_0043bcfe();
  local_50 = (undefined8 *)0x44f75a;
  puVar6 = (undefined8 *)FUN_005b3fb0();
  local_54 = 6.333575e-39;
  local_50 = puVar6;
  FUN_005b3fb0();
  local_54 = 0.0;
  uVar7 = FUN_005b3fb0();
  FUN_004c09cc(uVar7);
  local_50 = (undefined8 *)local_2c;
  local_54 = 6.33365e-39;
  FUN_0046537e();
  local_c = 0;
  local_28 = (double)CONCAT44(local_28._4_4_,*(int *)(in_ECX + 0x98) + *(int *)(in_ECX + 0x90));
  local_54 = 6.333725e-39;
  local_50 = puVar6;
  local_54 = (float)FUN_005b3fb0();
  iVar5 = FUN_0044bfc5();
  FUN_0043a9db(local_2c,*(undefined4 *)(iVar5 + 0xd4));
  local_50 = (undefined8 *)0x44f803;
  FUN_0049f5e8();
  local_50 = (undefined8 *)0x44f80c;
  FUN_004c4d7a();
  local_50 = (undefined8 *)0x44f813;
  fVar8 = (float10)FUN_0049fa3d();
  if (fVar3 * 0.3 <= (float)fVar8) {
    local_28 = (double)(float)fVar8;
    local_50 = (undefined8 *)0x44f83b;
    FUN_0044bfc5();
    local_50 = (undefined8 *)0x44f843;
    fVar8 = (float10)FUN_0049fa3d();
    if ((float10)local_28 <= fVar8) goto LAB_0044f85d;
  }
  local_50 = (undefined8 *)0x44f853;
  FUN_0044bfc5();
  local_50 = (undefined8 *)0x44f85d;
  FUN_0049f5e8();
LAB_0044f85d:
  local_50 = (undefined8 *)0x44f864;
  FUN_00440206();
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  local_28._0_4_ = (undefined8 **)(*(int *)(in_ECX + 0x98) + *(int *)(in_ECX + 0x90));
  local_54 = 6.333995e-39;
  local_50 = puVar6;
  FUN_005b3fb0();
  local_54 = 0.0;
  FUN_004c09cc(*(int *)(in_ECX + 0x98) + *(int *)(in_ECX + 0x90));
  local_50 = (undefined8 *)0x44f8b7;
  fVar8 = (float10)FUN_0049fa3d();
  local_28._0_4_ = &local_50;
  ppuVar9 = &local_50;
  local_54 = (float)fVar8;
  FUN_0044bfc5(&local_50);
  FUN_0049f81a(ppuVar9);
  local_28._0_4_ = (undefined8 **)&local_54;
  FUN_0049f50b();
  FUN_0045a524();
  local_50 = (undefined8 *)0x44f8f5;
  local_50 = (undefined8 *)FUN_005b3fb0();
  local_54 = 6.33416e-39;
  local_54 = (float)FUN_005b3fb0();
  FUN_004c09cc(0);
  local_54 = 6.334214e-39;
  local_50 = puVar6;
  local_54 = (float)FUN_005b3fb0();
  uVar7 = FUN_005b3fb0();
  FUN_004c09cc(uVar7);
  local_28._0_4_ = (undefined8 **)(*(int *)(in_ECX + 0x2260) + *(int *)(in_ECX + 0x2258));
  local_54 = *(float *)(in_ECX + 0x225c);
  local_50 = puVar6;
  uVar7 = FUN_005b3fb0();
  FUN_004c09cc(uVar7);
  local_50 = *(undefined8 **)(in_ECX + 0x2264);
  local_54 = 6.334343e-39;
  FUN_005b3fb0();
  local_54 = *(float *)(in_ECX + 0x225c);
  uVar7 = FUN_005b3fb0();
  FUN_004c09cc(uVar7);
  local_28._0_4_ = (undefined8 **)(*(int *)(in_ECX + 0x3c4) + *(int *)(in_ECX + 0x3bc));
  local_54 = *(float *)(in_ECX + 0x3c0);
  local_50 = puVar6;
  uVar7 = FUN_005b3fb0();
  FUN_004c09cc(uVar7);
  local_50 = (undefined8 *)0x44f9ed;
  fVar8 = (float10)FUN_0044230b();
  local_50 = *(undefined8 **)(in_ECX + 0x2264);
  local_28._0_4_ =
       (undefined8 **)
       ((*(int *)(in_ECX + 0x3bc) - *(int *)(in_ECX + 0x2c88)) - *(int *)(in_ECX + 0x2c80));
  if ((float)fVar8 <= (float)(int)(undefined8 **)local_28 - (fVar4 + fVar4)) {
    local_54 = 6.334615e-39;
    FUN_005b3fb0();
    local_54 = *(float *)(in_ECX + 0x225c);
    local_28._0_4_ = (undefined8 **)(((float)*(int *)(in_ECX + 0x18) - (float)fVar8) * 0.5);
    FUN_0043bcfe((undefined8 **)local_28,
                 (float)(*(int *)(in_ECX + 0x2c88) + *(int *)(in_ECX + 0x2c80)) + fVar4);
    iVar5 = FUN_005b3fb0();
  }
  else {
    local_54 = *(float *)(in_ECX + 0x225c);
    iVar5 = *(int *)(in_ECX + 0x2c88) + *(int *)(in_ECX + 0x2c80);
  }
  FUN_004c09cc(iVar5);
  local_28 = (double)CONCAT44(local_28._4_4_,(float)*(int *)(in_ECX + 0x2dfc) - fVar3 * 0.2);
  local_50 = (undefined8 *)0x44fae5;
  local_50 = (undefined8 *)FUN_005b3fb0();
  local_54 = 6.334832e-39;
  local_54 = (float)FUN_005b3fb0();
  FUN_004c09cc(0);
  local_50 = (undefined8 *)0x44fb13;
  FUN_004c0c1f();
  local_50 = (undefined8 *)0x44fb20;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.334917e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fb37;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.33495e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fb4e;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.334982e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fb65;
  FUN_004c0c1f();
  local_50 = (undefined8 *)0x44fb6c;
  thunk_FUN_00450a2e();
  local_50 = &local_28;
  local_54 = 6.335024e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fb83;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335056e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fb9a;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335088e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fbb1;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.33512e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fbc8;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335153e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fbdf;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335185e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fbf6;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335217e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fc0d;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.33525e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fc24;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335282e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fc3b;
  FUN_004c0c1f();
  local_50 = &local_28;
  local_54 = 6.335314e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fc52;
  FUN_004c0c1f();
  local_50 = (undefined8 *)0x44fc61;
  local_50 = (undefined8 *)FUN_005b3fb0();
  local_54 = 6.33537e-39;
  FUN_004c0be5();
  local_50 = (undefined8 *)0x44fc8c;
  FUN_004c0c51();
  local_50 = &local_28;
  local_54 = 6.335427e-39;
  FUN_004c2047();
  local_50 = (undefined8 *)0x44fca3;
  FUN_004c0c1f();
  local_50 = (undefined8 *)0x44fcac;
  FUN_004652d6();
  ExceptionList = local_14;
  return;
}

