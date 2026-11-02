// rea decompile_all
// name: FUN_0043ca8d
// address: 0x43ca8d
// body: available
// range: 0x43ca8d-0x43ced6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0043ca8d(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined1 *puVar12;
  float fVar13;
  int local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  undefined1 local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x43ca99;
  iVar2 = FUN_0044bfc5();
  local_18 = (float)*(int *)(iVar2 + 8);
  local_28 = *(int *)(in_ECX + 0x18);
  uVar9 = 0;
  *(float *)(in_ECX + 0x72c) = local_18;
  local_1c = (float)local_28 * 0.5;
  if (0 < *(int *)(in_ECX + 0x73c)) {
    uVar1 = *(uint *)(in_ECX + 0x73c);
    bVar10 = uVar1 != 0;
    do {
      if (bVar10) {
        puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x734) + uVar9 * 4);
      }
      else {
        puVar4 = (undefined4 *)0x0;
      }
      if (*(char *)*puVar4 != '\0') {
        local_1c = (float)local_28 * 0.6;
        uVar3 = FUN_005b3fb0();
        *(undefined4 *)(in_ECX + 0x740) = uVar3;
        goto LAB_0043caf5;
      }
      uVar9 = uVar9 + 1;
      bVar10 = uVar9 < uVar1;
    } while ((int)uVar9 < (int)uVar1);
  }
  *(undefined4 *)(in_ECX + 0x740) = 0;
LAB_0043caf5:
  fVar13 = local_18 * 0.8;
  puVar12 = local_14;
  local_24 = (double)CONCAT44(fVar13,(undefined4)local_24);
  FUN_0044bfc5(puVar12,fVar13);
  FUN_0049f81a(puVar12,fVar13);
  local_8 = 0;
  FUN_0049f5e8();
  FUN_0049f5e8();
  uVar9 = 0;
  if (0 < *(int *)(in_ECX + 0x73c)) {
    uVar3 = FUN_005b3fb0();
    bVar10 = *(int *)(in_ECX + 0x73c) != 0;
    do {
      if (bVar10) {
        puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x734) + uVar9 * 4);
      }
      else {
        puVar4 = (undefined4 *)0x0;
      }
      if (*(char *)*puVar4 != '\0') {
        if (uVar9 < *(uint *)(in_ECX + 0x73c)) {
          uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x734) + uVar9 * 4);
        }
        else {
          uVar6 = 0;
        }
        uVar5 = FUN_005b3fb0();
        FUN_0043a9ae(uVar6,*(int *)(in_ECX + 0x740) + -8,uVar5);
        FUN_0049fa3d();
        fVar11 = (float10)FUN_0049fa3d();
        if (extraout_ST1 < fVar11) {
          FUN_0049f5e8();
        }
        FUN_004c4d7a();
      }
      if (uVar9 < *(uint *)(in_ECX + 0x73c)) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x734) + uVar9 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar6 = FUN_005b3fb0(uVar3);
      FUN_0043a9ae(iVar2 + 4,uVar6);
      FUN_0049fa3d();
      fVar11 = (float10)FUN_0049fa3d();
      if (extraout_ST1_00 < fVar11) {
        FUN_0049f5e8();
      }
      FUN_004c4d7a();
      uVar9 = uVar9 + 1;
      bVar10 = uVar9 < *(uint *)(in_ECX + 0x73c);
    } while ((int)uVar9 < (int)*(uint *)(in_ECX + 0x73c));
  }
  local_24 = (double)(local_18 + local_18);
  FUN_005b3fb0();
  FUN_004e79ac();
  local_28 = *(int *)(in_ECX + 0x73c);
  FUN_0043d2e1((float)local_28 * (float)local_24 + (float)local_24,
               (float)*(int *)(in_ECX + 0x1c) * 0.6);
  local_18 = (float)FUN_005b3fb0();
  FUN_0046537e(&local_28);
  local_8._0_1_ = 1;
  FUN_0049fa7b(&local_28);
  iVar7 = FUN_005b3fb0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004652d6();
  FUN_00440206();
  FUN_004c0be5(local_18);
  FUN_00440206();
  FUN_004c0be5(local_18);
  local_28 = in_ECX + 0x380;
  FUN_00440206();
  FUN_004c0be5(local_18);
  local_24 = (double)CONCAT44(in_ECX + 0x4f8,(undefined4)local_24);
  FUN_00440206();
  FUN_004c0be5(local_18);
  uVar3 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x724) = uVar3;
  uVar3 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x728) = uVar3;
  *(int *)(in_ECX + 0x71c) = *(int *)(in_ECX + 0x18) / 2 - *(int *)(in_ECX + 0x724) / 2;
  *(int *)(in_ECX + 0x720) = *(int *)(in_ECX + 0x1c) / 2 - *(int *)(in_ECX + 0x728) / 2;
  uVar3 = FUN_005b3fb0();
  FUN_004c09cc(*(undefined4 *)(in_ECX + 0x71c),*(undefined4 *)(in_ECX + 0x720),uVar3);
  iVar8 = (*(int *)(in_ECX + 0x724) + iVar7 * -2) / 3;
  iVar2 = (*(int *)(in_ECX + 0x728) + *(int *)(in_ECX + 0x720)) - (int)local_18;
  FUN_004c0bf7(*(int *)(in_ECX + 0x71c) + iVar8,iVar2);
  FUN_004c0bf7(((*(int *)(in_ECX + 0x724) - iVar8) - iVar7) + *(int *)(in_ECX + 0x71c),iVar2);
  if ((*(int *)(in_ECX + 0x730) == 1) || (*(int *)(in_ECX + 0x730) == 3)) {
    iVar7 = (*(int *)(in_ECX + 0x724) / 2 - *(int *)(in_ECX + 0x398) / 2) + *(int *)(in_ECX + 0x71c)
    ;
  }
  else {
    FUN_004c0bf7(*(undefined4 *)(in_ECX + 0xa0),*(undefined4 *)(in_ECX + 0xa4));
    iVar2 = *(int *)(in_ECX + 0x21c);
    iVar7 = *(int *)(in_ECX + 0x218);
  }
  FUN_004c0bf7(iVar7,iVar2);
  FUN_004c4d7a();
  return;
}

