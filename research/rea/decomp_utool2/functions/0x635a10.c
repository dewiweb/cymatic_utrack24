// rea decompile_all
// name: FUN_00635a10
// address: 0x635a10
// body: available
// range: 0x635a10-0x635d66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00635a10(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  byte *pbVar8;
  bool bVar9;
  int local_1c;
  byte *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ec0e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_2;
  local_18 = param_2;
  iVar3 = FUN_00426f70(uVar2);
  if (iVar3 == 0x5c) {
LAB_00635d0a:
    FUN_0045cb50(param_2);
    local_8 = 0;
    FUN_00627bf0();
    pbVar8 = local_18 + -8;
    if (pbVar8 == (byte *)&DAT_00bfe124) {
      ExceptionList = local_10;
      return param_1;
    }
    LOCK();
    iVar3 = *(int *)pbVar8;
    *(int *)pbVar8 = *(int *)pbVar8 + -1;
    UNLOCK();
    bVar9 = iVar3 == 0;
  }
  else {
    if (iVar3 != 0) {
      local_18 = param_2;
      FUN_0044ebd0(1);
      iVar3 = FUN_00426f70(uVar2);
      if (iVar3 == 0x3a) goto LAB_00635d0a;
    }
    iVar3 = FUN_0045c230(param_2);
    if (iVar3 < 0) {
      iVar3 = *in_ECX;
      piVar7 = (int *)(iVar3 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      local_8 = 3;
      local_18 = (byte *)iVar3;
      iVar5 = FUN_00426f70(uVar2);
      while (iVar5 == 0x2e) {
        bVar1 = *param_2;
        local_14 = param_2 + 1;
        if ((char)bVar1 < '\0') {
          uVar2 = 0x40;
          if ((bVar1 & 0x40) != 0) {
            do {
              if (uVar2 < 9) break;
              local_14 = local_14 + 1;
              uVar2 = uVar2 >> 1;
            } while (((int)(char)bVar1 & uVar2) != 0);
          }
        }
        pbVar8 = local_14;
        iVar5 = FUN_00426f70();
        if (iVar5 == 0x2e) {
          bVar1 = *pbVar8;
          local_14 = pbVar8 + 1;
          if ((char)bVar1 < '\0') {
            uVar2 = 0x40;
            if ((bVar1 & 0x40) != 0) {
              do {
                if (uVar2 < 9) break;
                local_14 = local_14 + 1;
                uVar2 = uVar2 >> 1;
              } while (((int)(char)bVar1 & uVar2) != 0);
            }
          }
          pbVar8 = local_14;
          iVar5 = FUN_00426f70();
          if ((iVar5 != 0x5c) && (iVar5 != 0)) break;
          iVar6 = FUN_006215b0(0x5c);
          iVar5 = iVar3;
          if (-1 < iVar6) {
            piVar7 = (int *)FUN_006379a0(&local_1c,0,iVar6);
            iVar5 = *piVar7;
            *piVar7 = iVar3;
            piVar7 = (int *)(local_1c + -8);
            local_18 = (byte *)iVar5;
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar7);
              }
            }
          }
          iVar6 = FUN_00426f70();
          while (iVar3 = iVar5, iVar6 == 0x5c) {
            bVar1 = *pbVar8;
            local_14 = pbVar8 + 1;
            if ((char)bVar1 < '\0') {
              uVar2 = 0x40;
              if ((bVar1 & 0x40) != 0) {
                do {
                  if (uVar2 < 9) break;
                  local_14 = local_14 + 1;
                  uVar2 = uVar2 >> 1;
                } while (((int)(char)bVar1 & uVar2) != 0);
              }
            }
            pbVar8 = local_14;
            iVar6 = FUN_00426f70();
          }
        }
        else if (iVar5 == 0x5c) {
          do {
            bVar1 = *pbVar8;
            local_14 = pbVar8 + 1;
            if ((char)bVar1 < '\0') {
              uVar2 = 0x40;
              if ((bVar1 & 0x40) != 0) {
                do {
                  if (uVar2 < 9) break;
                  local_14 = local_14 + 1;
                  uVar2 = uVar2 >> 1;
                } while (((int)(char)bVar1 & uVar2) != 0);
              }
            }
            pbVar8 = local_14;
            iVar5 = FUN_00426f70();
          } while (iVar5 == 0x5c);
        }
        else if (iVar5 != 0) break;
        iVar5 = FUN_00426f70();
        param_2 = pbVar8;
      }
      piVar7 = (int *)FUN_00634140();
      local_18 = (byte *)*piVar7;
      *piVar7 = iVar3;
      piVar7 = (int *)(local_1c + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00621830(param_2);
      FUN_00627bf0();
      pbVar8 = local_18 + -8;
      if (pbVar8 == (byte *)&DAT_00bfe124) {
        ExceptionList = local_10;
        return param_1;
      }
      LOCK();
      iVar3 = *(int *)pbVar8;
      *(int *)pbVar8 = *(int *)pbVar8 + -1;
      UNLOCK();
      bVar9 = iVar3 == 0;
    }
    else {
      FUN_0045cb50(param_2);
      local_8 = 1;
      puVar4 = (undefined4 *)FUN_00629d10(&local_14,0x2f,0x5c);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00635a10(param_1,*puVar4);
      pbVar8 = local_14 + -8;
      if (pbVar8 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar3 = *(int *)pbVar8;
        *(int *)pbVar8 = *(int *)pbVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(pbVar8);
        }
      }
      pbVar8 = local_18 + -8;
      if (pbVar8 == (byte *)&DAT_00bfe124) {
        ExceptionList = local_10;
        return param_1;
      }
      LOCK();
      iVar3 = *(int *)pbVar8;
      *(int *)pbVar8 = *(int *)pbVar8 + -1;
      UNLOCK();
      bVar9 = iVar3 == 0;
    }
  }
  if (bVar9) {
    FID_conflict__free(pbVar8);
  }
  ExceptionList = local_10;
  return param_1;
}

