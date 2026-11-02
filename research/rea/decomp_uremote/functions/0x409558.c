// rea decompile_all
// name: FUN_00409558
// address: 0x409558
// body: available
// range: 0x409558-0x409810 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00409558(int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint in_ECX;
  int iVar8;
  uint *unaff_EBX;
  short *psVar9;
  undefined *_Src;
  uint local_14;
  uint local_c;
  int local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 3;
  }
  puVar3 = unaff_EBX + 0x83;
  iVar8 = 0x100;
  do {
    *(undefined2 *)(puVar3 + -0x80) = 0;
    *(undefined2 *)puVar3 = 0;
    puVar3 = (uint *)((int)puVar3 + 2);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (in_ECX < 2) {
    if (in_ECX == 0) {
      _Src = &DAT_008faf90;
    }
    else {
      if (in_ECX != 1) {
        return 3;
      }
      _Src = &DAT_008fb190;
    }
    _memcpy(unaff_EBX + 3,_Src,0x200);
    unaff_EBX[2] = 0;
    local_8 = FUN_0040920c(param_2,*(undefined4 *)(param_3 + 0x1c));
    if (local_8 == 0) {
      uVar4 = 0;
      puVar3 = unaff_EBX + 3;
      do {
        if (((short)*puVar3 == 0) || (iVar8 = FUN_00409282(), iVar8 == 0)) {
          *(undefined2 *)(puVar3 + 0x80) = 0;
          *(undefined2 *)puVar3 = 0;
        }
        else {
          *(short *)(puVar3 + 0x80) = (short)iVar8;
          unaff_EBX[2] = uVar4 + 1;
        }
        uVar4 = uVar4 + 1;
        puVar3 = (uint *)((int)puVar3 + 2);
      } while (uVar4 < 0x100);
    }
  }
  else {
    unaff_EBX[1] = param_4 + in_ECX;
    iVar8 = FUN_0041106d();
    if (iVar8 != 0) {
      return iVar8;
    }
    uVar4 = FUN_00411330();
    *unaff_EBX = uVar4 & 0xff;
    uVar4 = FUN_00411330();
    uVar4 = uVar4 & 0xff;
    if ((*unaff_EBX & 0x7f) == 0) {
      unaff_EBX[2] = uVar4 + 1;
      iVar8 = FUN_004111b5();
      if (iVar8 != 0) {
        return iVar8;
      }
      pbVar7 = *(byte **)(param_3 + 0x20);
      uVar6 = 1;
      if (uVar4 != 0) {
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          if (uVar6 < param_2) {
            *(short *)((int)unaff_EBX + (uint)bVar1 * 2 + 0x20c) = (short)uVar6;
            *(undefined2 *)((int)unaff_EBX + (uint)bVar1 * 2 + 0xc) =
                 *(undefined2 *)(*(int *)(param_1 + 8) + uVar6 * 2);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar4);
      }
      FUN_00411249();
    }
    else {
      if ((*unaff_EBX & 0x7f) != 1) {
        return 3;
      }
      local_14 = 1;
      unaff_EBX[2] = 0;
      local_c = 0;
      if (uVar4 != 0) {
        do {
          uVar5 = FUN_00411330();
          uVar6 = FUN_00411330();
          uVar6 = (uVar6 & 0xff) + 1;
          if (unaff_EBX[2] < uVar6) {
            unaff_EBX[2] = uVar6;
          }
          uVar6 = uVar6 + local_14;
          if (local_14 < uVar6) {
            pbVar7 = (byte *)((int)unaff_EBX + (uVar5 & 0xff) * 2 + 0xc);
            iVar8 = (uVar5 & 0xff) - local_14;
            do {
              if ((local_14 < param_2) && (iVar8 + local_14 < 0x100)) {
                *(short *)(pbVar7 + 0x200) = (short)local_14;
                *(undefined2 *)pbVar7 = *(undefined2 *)(*(int *)(param_1 + 8) + local_14 * 2);
              }
              local_14 = local_14 + 1;
              pbVar7 = pbVar7 + 2;
            } while (local_14 < uVar6);
          }
          local_c = local_c + 1;
          local_14 = uVar6;
        } while (local_c < uVar4);
      }
      if (0x100 < unaff_EBX[2]) {
        unaff_EBX[2] = 0x100;
      }
    }
    local_8 = 0;
    if ((*unaff_EBX & 0x80) != 0) {
      uVar4 = FUN_00411330();
      local_c = 0;
      if ((uVar4 & 0xff) != 0) {
        do {
          uVar6 = FUN_00411330();
          sVar2 = FUN_00411377();
          uVar5 = 0;
          *(short *)((int)unaff_EBX + (uVar6 & 0xff) * 2 + 0xc) = sVar2;
          if (param_2 != 0) {
            psVar9 = *(short **)(param_1 + 8);
            do {
              if (*psVar9 == sVar2) {
                *(short *)((int)unaff_EBX + (uVar6 & 0xff) * 2 + 0x20c) = (short)uVar5;
                break;
              }
              uVar5 = uVar5 + 1;
              psVar9 = psVar9 + 1;
            } while (uVar5 < param_2);
          }
          local_c = local_c + 1;
        } while (local_c < (uVar4 & 0xff));
      }
    }
  }
  return local_8;
}

