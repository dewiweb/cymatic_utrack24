// rea decompile_all
// name: FUN_004e85f8
// address: 0x4e85f8
// body: available
// range: 0x4e85f8-0x4e8948 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e85f8(void)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  uint uVar7;
  float10 fVar8;
  float10 extraout_ST0;
  undefined1 local_34 [8];
  int local_2c;
  int local_28;
  float local_20;
  float local_1c;
  float local_18;
  char local_11;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4e8604;
  if ((int *)in_ECX[6] == in_ECX + 0xd) {
    iVar5 = in_ECX[0xf];
    iVar4 = thunk_FUN_0046087d();
    local_1c = (float)(iVar4 - iVar5);
    if (0 < (int)local_1c) {
      FUN_004664c4(iVar5);
      FUN_00465317(in_ECX + 0xd);
      FUN_004652d6();
      in_ECX[4] = 0;
      if (0 < in_ECX[0xf]) {
        in_ECX[1] = (int)((float)in_ECX[2] + (float)in_ECX[1]);
      }
      *in_ECX = *in_ECX + in_ECX[0xf];
      FUN_0049fe5a(local_34);
      local_8 = 0;
      FUN_004e7e2d(in_ECX[6]);
      local_8._0_1_ = 1;
      FUN_0049fec9(in_ECX[7],0,0);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004652d6();
      uVar7 = 0;
      if (0 < local_2c) {
        do {
          iVar5 = FUN_0049feb2();
          local_20 = *(float *)(iVar5 + 0x14) + *(float *)(iVar5 + 0xc);
          cVar3 = FUN_004e8fe5(local_20);
          if (cVar3 != '\0') break;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < local_2c);
        if ((0 < (int)uVar7) && ((int)uVar7 <= (int)local_1c)) {
          in_ECX[0xf] = uVar7 & 0xffff;
          iVar5 = FUN_0049feb2();
          local_20 = *(float *)(iVar5 + 0x14) + *(float *)(iVar5 + 0xc);
          in_ECX[0xe] = (int)local_20;
          in_ECX[5] = (int)(local_20 + (float)in_ECX[4]);
          FUN_0049fea0();
          return 1;
        }
      }
      local_8 = 0xffffffff;
      FUN_0049fea0();
    }
  }
  piVar2 = (int *)in_ECX[8];
  local_11 = '\0';
  if (piVar2[2] <= in_ECX[9]) {
LAB_004e8729:
    FUN_004e8fbf();
    return 0;
  }
  iVar5 = in_ECX[7];
  iVar4 = in_ECX[10];
  if (*(int *)(iVar5 + 0x10) + -1 <= iVar4) {
    if (iVar4 < *(int *)(iVar5 + 0x10)) {
      iVar5 = *(int *)(*(int *)(iVar5 + 8) + iVar4 * 4);
      uVar6 = thunk_FUN_0046085c(0);
      cVar3 = FUN_00464f6b(uVar6);
      if (cVar3 == '\0') {
        iVar4 = in_ECX[9];
        local_18 = *(float *)(iVar5 + 4) + (float)in_ECX[5];
        local_1c = (float)in_ECX[2];
        local_20 = (float)in_ECX[3];
        do {
          iVar4 = iVar4 + 1;
          if ((*(int *)(in_ECX[8] + 8) <= iVar4) ||
             (iVar5 = *(int *)(*(int *)in_ECX[8] + iVar4 * 4), *(int *)(iVar5 + 0x10) == 0)) break;
          local_28 = **(int **)(iVar5 + 8);
          uVar6 = thunk_FUN_0046085c(0);
          cVar3 = FUN_00464f6b(uVar6);
          if (cVar3 != '\0') break;
          local_18 = *(float *)(local_28 + 4) + local_18;
          fVar8 = (float10)FUN_0049fa3d();
          fVar8 = (float10)FUN_0043bcfe(local_1c,(float)fVar8);
          local_1c = (float)fVar8;
          fVar8 = (float10)FUN_0049fa43();
          fVar8 = (float10)FUN_0043bcfe(local_20,(float)fVar8);
          local_20 = (float)fVar8;
          cVar3 = FUN_004e8fe5(local_18);
          if (cVar3 != '\0') {
            local_11 = '\x01';
            in_ECX[2] = (int)local_1c;
            in_ECX[3] = (int)local_20;
            break;
          }
        } while (*(int *)(iVar5 + 0x10) < 2);
      }
    }
    else {
      iVar5 = in_ECX[9] + 1;
      in_ECX[9] = iVar5;
      if (piVar2[2] <= iVar5) goto LAB_004e8729;
      in_ECX[10] = 0;
      in_ECX[7] = *(int *)(*piVar2 + iVar5 * 4);
    }
  }
  if (in_ECX[6] != 0) {
    in_ECX[4] = in_ECX[5];
    *in_ECX = *in_ECX + *(int *)(in_ECX[6] + 8);
    cVar3 = FUN_004e7e03(in_ECX[6]);
    if (cVar3 != '\0') {
      FUN_004e8949();
    }
  }
  iVar5 = *(int *)(*(int *)(in_ECX[7] + 8) + in_ECX[10] * 4);
  in_ECX[6] = iVar5;
  fVar1 = *(float *)(iVar5 + 4);
  in_ECX[10] = in_ECX[10] + 1;
  in_ECX[5] = (int)(fVar1 + (float)in_ECX[4]);
  cVar3 = FUN_004e8fe5(in_ECX[5]);
  if ((cVar3 != '\0') || (local_11 != '\0')) {
    uVar6 = thunk_FUN_0046085c(0);
    cVar3 = FUN_00464f6b(uVar6);
    if (cVar3 == '\0') {
      local_20 = *(float *)(in_ECX[6] + 4);
      in_ECX[5] = (int)local_20;
      cVar3 = FUN_004e8fe5(local_20);
      if (cVar3 != '\0') {
        iVar5 = in_ECX[6];
        FUN_00465317(in_ECX + 0xd);
        in_ECX[0xe] = *(int *)(iVar5 + 4);
        in_ECX[0xf] = *(int *)(iVar5 + 8);
        in_ECX[0xf] = 0;
        in_ECX[0xe] = 0;
        in_ECX[6] = (int)(in_ECX + 0xd);
        if (0.0 < (float)in_ECX[4]) {
          FUN_004e8949();
        }
        uVar6 = FUN_004e85f8();
        return uVar6;
      }
      FUN_004e8949();
    }
    else {
      FUN_0043d2e1(in_ECX[5],in_ECX[0xb]);
      in_ECX[5] = (int)(float)extraout_ST0;
    }
  }
  return 1;
}

