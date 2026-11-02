// rea decompile_all
// name: FUN_004a0920
// address: 0x4a0920
// body: available
// range: 0x4a0920-0x4a0d48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0920(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  float fVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *in_ECX;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  byte bVar13;
  byte *pbVar14;
  float fVar15;
  float10 fVar16;
  undefined4 **ppuVar17;
  int local_28;
  undefined4 *local_24;
  int local_20;
  byte *local_1c;
  float local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703228;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  bVar13 = **(byte **)param_1;
  ppvVar4 = &local_10;
  pbVar14 = *(byte **)param_1;
  local_14 = in_ECX;
  local_10 = ExceptionList;
joined_r0x004a0957:
  ExceptionList = ppvVar4;
  if (bVar13 == 0) {
    ExceptionList = local_10;
    return;
  }
  local_18 = 0.0;
  param_1 = pbVar14;
  if ((((bVar13 == 0x20) || (((char)bVar13 < '\x0e' && ('\b' < (char)bVar13)))) &&
      (iVar6 = FUN_00426f70(uVar5), iVar6 != 0xd)) && (iVar6 != 10)) {
    do {
      param_1 = param_1 + 1;
      if ((char)bVar13 < '\0') {
        uVar7 = 0x40;
        if ((bVar13 & 0x40) != 0) {
          do {
            if (uVar7 < 9) break;
            param_1 = param_1 + 1;
            uVar7 = uVar7 >> 1;
          } while ((uVar7 & (int)(char)bVar13) != 0);
        }
      }
      bVar13 = *param_1;
      local_18 = (float)((int)local_18 + 1);
    } while ((((bVar13 == 0x20) || ((byte)(bVar13 - 9) < 5)) &&
             (iVar6 = FUN_00426f70(uVar5), iVar6 != 0xd)) && (iVar6 != 10));
  }
  else {
    iVar6 = FUN_00426f70(uVar5);
    if (iVar6 == 0xd) {
      local_1c = pbVar14 + 1;
      param_1 = local_1c;
      if ((char)bVar13 < '\0') {
        uVar7 = 0x40;
        if ((bVar13 & 0x40) != 0) {
          do {
            if (uVar7 < 9) break;
            param_1 = param_1 + 1;
            uVar7 = uVar7 >> 1;
          } while ((uVar7 & (int)(char)bVar13) != 0);
        }
      }
      local_18 = 1.4013e-45;
      iVar6 = FUN_00426f70(uVar5);
      if (iVar6 == 10) {
        bVar13 = *pbVar14;
        pbVar14 = local_1c;
        if ((char)bVar13 < '\0') {
          uVar7 = 0x40;
          if ((bVar13 & 0x40) != 0) {
            do {
              if (uVar7 < 9) break;
              uVar7 = uVar7 >> 1;
              pbVar14 = pbVar14 + 1;
            } while ((uVar7 & (int)(char)bVar13) != 0);
          }
        }
        bVar13 = *param_1;
        param_1 = param_1 + 1;
        if ((char)bVar13 < '\0') {
          uVar7 = 0x40;
          if ((bVar13 & 0x40) != 0) {
            do {
              if (uVar7 < 9) break;
              param_1 = param_1 + 1;
              uVar7 = uVar7 >> 1;
            } while ((uVar7 & (int)(char)bVar13) != 0);
          }
        }
      }
    }
    else if (iVar6 == 10) {
      param_1 = pbVar14 + 1;
      if ((char)bVar13 < '\0') {
        uVar7 = 0x40;
        if ((bVar13 & 0x40) != 0) {
          do {
            if (uVar7 < 9) break;
            param_1 = param_1 + 1;
            uVar7 = uVar7 >> 1;
          } while ((uVar7 & (int)(char)bVar13) != 0);
        }
      }
      local_18 = 1.4013e-45;
    }
    else {
      while (((bVar13 != 0 && (bVar13 != 0x20)) && (('\r' < (char)bVar13 || ((char)bVar13 < '\t'))))
            ) {
        param_1 = param_1 + 1;
        if ((char)bVar13 < '\0') {
          uVar7 = 0x40;
          if ((bVar13 & 0x40) != 0) {
            do {
              if (uVar7 < 9) break;
              param_1 = param_1 + 1;
              uVar7 = uVar7 >> 1;
            } while ((uVar7 & (int)(char)bVar13) != 0);
          }
        }
        local_18 = (float)((int)local_18 + 1);
        bVar13 = *param_1;
      }
    }
  }
  local_1c = operator_new(0xc);
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[10] = 0;
  local_1c[0xb] = 0;
  *(undefined1 **)local_1c = &DAT_00bfe12c;
  iVar6 = local_14[4];
  iVar10 = iVar6 + 1;
  if (local_14[3] < iVar10) {
    if (iVar10 < 0) {
      iVar10 = iVar6 + 2;
    }
    uVar7 = iVar6 + 9 + (iVar10 >> 1) & 0xfffffff8;
    if (local_14[3] != uVar7) {
      if ((int)uVar7 < 1) {
        FID_conflict__free((void *)local_14[2]);
        local_14[2] = 0;
        local_14[3] = uVar7;
      }
      else if (local_14[2] == 0) {
        iVar6 = FUN_004c554b();
        local_14[2] = iVar6;
        local_14[3] = uVar7;
      }
      else {
        iVar6 = FUN_004c553b(local_14[2],uVar7 * 4);
        local_14[2] = iVar6;
        local_14[3] = uVar7;
      }
    }
  }
  fVar15 = local_18;
  pbVar11 = local_1c;
  iVar6 = local_14[4];
  local_14[4] = iVar6 + 1;
  *(byte **)(local_14[2] + iVar6 * 4) = local_1c;
  FUN_0045cc40(pbVar14);
  iVar6 = *(int *)pbVar11;
  *(int *)pbVar11 = local_20;
  piVar12 = (int *)(iVar6 + -8);
  local_20 = iVar6;
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  puVar8 = (undefined4 *)FUN_0049fd60(&local_28,param_2);
  local_8 = 0;
  if (*(int *)(*local_14 + 8) == 0) {
    ppuVar17 = &local_24;
    piVar12 = local_14;
    FUN_004681b0(ppuVar17,local_14);
    puVar9 = (undefined4 *)FUN_004682f0(ppuVar17,piVar12);
    uVar2 = *(undefined4 *)(*local_14 + 8);
    *(undefined4 *)(*local_14 + 8) = *puVar9;
    *puVar9 = uVar2;
    fVar15 = local_18;
    if (local_24 != (undefined4 *)0x0) {
      LOCK();
      piVar12 = local_24 + 1;
      iVar6 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*local_24)(1);
        fVar15 = local_18;
      }
    }
  }
  fVar16 = (float10)(**(code **)(**(int **)(*local_14 + 8) + 0x14))(puVar8);
  pbVar14 = local_1c;
  local_18 = (float)fVar16;
  iVar6 = *local_14;
  fVar3 = local_18;
  if (*(float *)(iVar6 + 0x1c) != 0.0) {
    pbVar11 = (byte *)*puVar8;
    iVar10 = 0;
LAB_004a0ca3:
    do {
      bVar13 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      if ((char)bVar13 < '\0') {
        if ((*pbVar11 & 0xc0) == 0x80) {
          do {
            pbVar1 = pbVar11 + 1;
            pbVar11 = pbVar11 + 1;
          } while ((*pbVar1 & 0xc0) == 0x80);
          iVar10 = iVar10 + 1;
          goto LAB_004a0ca3;
        }
      }
      else if (bVar13 == 0) goto LAB_004a0cc7;
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_004a0ce4;
LAB_004a0cc7:
  iVar6 = *local_14;
  fVar3 = (float)iVar10 * *(float *)(iVar6 + 0x1c) + local_18;
LAB_004a0ce4:
  local_8 = 0xffffffff;
  piVar12 = (int *)(local_28 + -8);
  *(float *)(local_1c + 4) = *(float *)(iVar6 + 0x14) * fVar3 * *(float *)(iVar6 + 0x18);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  *(uint *)(pbVar14 + 8) = (uint)fVar15 & 0xffff;
  bVar13 = *param_1;
  ppvVar4 = ExceptionList;
  pbVar14 = param_1;
  goto joined_r0x004a0957;
}

