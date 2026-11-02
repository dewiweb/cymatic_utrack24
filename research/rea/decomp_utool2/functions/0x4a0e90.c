// rea decompile_all
// name: FUN_004a0e90
// address: 0x4a0e90
// body: available
// range: 0x4a0e90-0x4a1441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004a0fd6) */
/* WARNING: Removing unreachable block (ram,0x004a0ff0) */
/* WARNING: Removing unreachable block (ram,0x004a1007) */
/* WARNING: Removing unreachable block (ram,0x004a100f) */
/* WARNING: Removing unreachable block (ram,0x004a1013) */
/* WARNING: Removing unreachable block (ram,0x004a1018) */
/* WARNING: Removing unreachable block (ram,0x004a1072) */
/* WARNING: Removing unreachable block (ram,0x004a1075) */
/* WARNING: Removing unreachable block (ram,0x004a107b) */
/* WARNING: Removing unreachable block (ram,0x004a1085) */
/* WARNING: Removing unreachable block (ram,0x004a108b) */
/* WARNING: Removing unreachable block (ram,0x004a1093) */

undefined4 FUN_004a0e90(void)

{
  int *_Memory;
  undefined4 *puVar1;
  wint_t wVar2;
  _locale_t _Locale;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  int *extraout_ECX;
  char cVar8;
  float fVar9;
  float fVar10;
  float local_24;
  int local_20;
  int *local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703290;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  piVar7 = in_ECX + 0xd;
  local_1c = in_ECX;
  if ((int *)in_ECX[6] == piVar7) {
    local_20 = FUN_0044ec90();
    local_20 = local_20 - in_ECX[0xf];
    if (0 < local_20) {
      piVar3 = (int *)FUN_00637a90(&local_24,in_ECX[0xf]);
      iVar5 = *piVar7;
      *piVar7 = *piVar3;
      *piVar3 = iVar5;
      piVar7 = (int *)((int)local_24 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
          piVar7 = extraout_ECX;
        }
      }
      in_ECX[4] = 0;
      if (0 < in_ECX[0xf]) {
        in_ECX[1] = (int)((float)in_ECX[2] + (float)in_ECX[1]);
      }
      *in_ECX = *in_ECX + in_ECX[0xf];
      FUN_00419e50(200,piVar7);
      local_8 = 0;
      uVar4 = FUN_0049fd60(&local_24,in_ECX[0xc]);
      local_8._0_1_ = 1;
      FUN_00642ff0(in_ECX[7],uVar4,0,0x501502f9,0);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar7 = (int *)((int)local_24 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8 = 0xffffffff;
      FID_conflict__free((void *)0x0);
    }
  }
  piVar7 = (int *)in_ECX[8];
  local_11 = '\0';
  if (piVar7[2] <= in_ECX[9]) {
    if (in_ECX[6] != 0) {
      in_ECX[4] = in_ECX[5];
      uVar4 = *(undefined4 *)in_ECX[6];
      local_1c = (int *)uVar4;
      FUN_0044ebd0(0);
      iVar5 = FUN_00426f70();
      if (iVar5 != 0xd) {
        local_1c = (int *)uVar4;
        FUN_0044ebd0(0);
        iVar5 = FUN_00426f70();
        if (iVar5 != 10) {
          ExceptionList = local_10;
          return 0;
        }
      }
      in_ECX[4] = 0;
      in_ECX[1] = (int)((float)in_ECX[2] + (float)in_ECX[1]);
    }
    ExceptionList = local_10;
    return 0;
  }
  iVar5 = in_ECX[10];
  cVar8 = local_11;
  if (*(int *)(in_ECX[7] + 0x10) + -1 <= iVar5) {
    if (iVar5 < *(int *)(in_ECX[7] + 0x10)) {
      puVar1 = *(undefined4 **)(*(int *)(in_ECX[7] + 8) + iVar5 * 4);
      local_1c = (int *)*puVar1;
      FUN_0044ebd0(0);
      wVar2 = FUN_00426f70();
      iVar5 = FID_conflict___iswspace_l(wVar2,_Locale);
      cVar8 = local_11;
      if (iVar5 == 0) {
        local_18 = (float)puVar1[1] + (float)in_ECX[5];
        iVar5 = in_ECX[9] + 1;
        local_1c = (int *)in_ECX[2];
        local_24 = (float)in_ECX[3];
        if (iVar5 < *(int *)(in_ECX[8] + 8)) {
          while (piVar7 = *(int **)(*(int *)in_ECX[8] + iVar5 * 4), cVar8 = local_11, piVar7[4] != 0
                ) {
            piVar3 = *(int **)piVar7[2];
            local_20 = *piVar3;
            FUN_0044ebd0(0);
            wVar2 = FUN_00426f70();
            iVar6 = FID_conflict___iswspace_l(wVar2,_Locale);
            cVar8 = local_11;
            if (iVar6 != 0) break;
            local_18 = (float)piVar3[1] + local_18;
            piVar3 = *(int **)(*piVar7 + 0x14);
            if ((float)piVar3 <= (float)local_1c) {
              piVar3 = local_1c;
            }
            fVar9 = *(float *)(*piVar7 + 0x14);
            fVar10 = fVar9;
            local_1c = piVar3;
            FUN_006823f0();
            fVar9 = fVar9 - fVar10;
            if (fVar9 <= local_24) {
              fVar9 = local_24;
            }
            if ((float)in_ECX[0xb] <= local_18 - 0.0001) {
              in_ECX[2] = (int)local_1c;
              in_ECX[3] = (int)fVar9;
              cVar8 = '\x01';
              break;
            }
            cVar8 = local_11;
            if ((1 < piVar7[4]) ||
               (iVar5 = iVar5 + 1, local_24 = fVar9, *(int *)(in_ECX[8] + 8) <= iVar5)) break;
          }
        }
      }
    }
    else {
      iVar5 = in_ECX[9] + 1;
      in_ECX[9] = iVar5;
      if (piVar7[2] <= iVar5) {
        FUN_004a1eb0();
        ExceptionList = local_10;
        return 0;
      }
      in_ECX[10] = 0;
      in_ECX[7] = *(int *)(*piVar7 + iVar5 * 4);
    }
  }
  if (in_ECX[6] != 0) {
    in_ECX[4] = in_ECX[5];
    *in_ECX = *in_ECX + *(int *)(in_ECX[6] + 8);
    fVar9 = *(float *)in_ECX[6];
    local_24 = fVar9;
    FUN_0044ebd0(0);
    iVar5 = FUN_00426f70();
    if (iVar5 != 0xd) {
      local_24 = fVar9;
      FUN_0044ebd0(0);
      iVar5 = FUN_00426f70();
      if (iVar5 != 10) goto LAB_004a11c3;
    }
    FUN_004a1450();
  }
LAB_004a11c3:
  iVar5 = *(int *)(*(int *)(in_ECX[7] + 8) + in_ECX[10] * 4);
  in_ECX[6] = iVar5;
  fVar9 = *(float *)(iVar5 + 4) + (float)in_ECX[4];
  in_ECX[10] = in_ECX[10] + 1;
  in_ECX[5] = (int)fVar9;
  if (((float)in_ECX[0xb] <= fVar9 - 0.0001) || (cVar8 != '\0')) {
    local_24 = *(float *)in_ECX[6];
    FUN_0044ebd0(0);
    wVar2 = FUN_00426f70();
    iVar5 = FID_conflict___iswspace_l(wVar2,_Locale);
    if (iVar5 != 0) {
      fVar9 = (float)in_ECX[0xb];
      if ((float)in_ECX[5] <= (float)in_ECX[0xb]) {
        fVar9 = (float)in_ECX[5];
      }
      in_ECX[5] = (int)fVar9;
      ExceptionList = local_10;
      return 1;
    }
    piVar7 = (int *)in_ECX[6];
    fVar9 = (float)piVar7[1];
    in_ECX[5] = (int)fVar9;
    if ((float)in_ECX[0xb] <= fVar9 - 0.0001) {
      piVar3 = (int *)(*piVar7 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      piVar3 = in_ECX + 0xd;
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar7;
      UNLOCK();
      _Memory = (int *)(iVar5 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar5 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      in_ECX[0xe] = piVar7[1];
      in_ECX[0xf] = piVar7[2];
      in_ECX[0xe] = 0;
      in_ECX[0xf] = 0;
      in_ECX[6] = (int)piVar3;
      if (0.0 < (float)in_ECX[4]) {
        FUN_004a1450();
      }
      uVar4 = FUN_004a0e90();
      ExceptionList = local_10;
      return uVar4;
    }
    FUN_004a1450();
  }
  ExceptionList = local_10;
  return 1;
}

