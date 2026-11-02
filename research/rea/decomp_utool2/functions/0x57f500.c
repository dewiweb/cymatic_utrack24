// rea decompile_all
// name: FUN_0057f500
// address: 0x57f500
// body: available
// range: 0x57f500-0x57fa8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057f500(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  int local_2c [2];
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00712666;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_1;
  local_18 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  uStack_7 = 0;
  local_24 = (undefined4 *)0x0;
  puVar4 = param_1;
  puVar6 = DAT_00c7ebbc;
  local_20 = in_ECX;
  puVar10 = DAT_00c7ebbc;
  if (param_2 != DAT_00c8a948) {
    puVar6 = param_2;
    puVar10 = param_2;
  }
LAB_0057f570:
  puVar11 = local_24;
  pbVar7 = (byte *)*local_20;
  iVar9 = 0;
LAB_0057f574:
  do {
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    if ((char)bVar2 < '\0') {
      if ((*pbVar7 & 0xc0) == 0x80) {
        do {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        iVar9 = iVar9 + 1;
        goto LAB_0057f574;
      }
    }
    else if (bVar2 == 0) break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (iVar9 <= (int)local_24) {
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar8 = puVar4 + 1;
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)*puVar4)(1,uVar3);
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar8 = param_1 + 1;
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)*param_1)(1);
      }
    }
    ExceptionList = local_10;
    return;
  }
  local_24 = (undefined4 *)FUN_006325e0(local_24,&DAT_0073fd94);
  if ((int)local_24 < 0) {
    local_8 = 2;
    local_24 = puVar6;
    puVar4 = (undefined4 *)FUN_00637a90(local_2c,puVar11);
    local_8 = 4;
    FUN_00636ec0(puVar4);
    pbVar7 = (byte *)*puVar4;
    do {
      while( true ) {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar7;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
      }
    } while (bVar2 != 0);
    FUN_00644f50(&local_18,&local_24);
    local_8 = 1;
    piVar8 = (int *)(local_2c[0] + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    local_24 = (undefined4 *)0x0;
    pbVar7 = (byte *)*local_20;
LAB_0057f651:
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      if ((char)bVar2 < '\0') {
        if ((*pbVar7 & 0xc0) == 0x80) {
          do {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
          } while ((*pbVar1 & 0xc0) == 0x80);
          local_24 = (undefined4 *)((int)local_24 + 1);
          goto LAB_0057f651;
        }
      }
      else if (bVar2 == 0) goto LAB_0057f675;
      local_24 = (undefined4 *)((int)local_24 + 1);
    } while( true );
  }
  puVar4 = local_14;
  if ((int)puVar11 < (int)local_24) {
    local_8 = 5;
    local_14 = puVar6;
    puVar4 = (undefined4 *)FUN_006379a0(&local_30,puVar11,local_24);
    local_8 = 7;
    FUN_00636ec0(puVar4);
    pbVar7 = (byte *)*puVar4;
    do {
      while( true ) {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar7;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
      }
    } while (bVar2 != 0);
    FUN_00644f50(&local_18,&local_14);
    local_8 = 1;
    piVar8 = (int *)(local_30 + -8);
    puVar4 = local_18;
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      puVar4 = local_18;
      if (iVar9 == 0) {
        FID_conflict__free(piVar8);
        puVar4 = local_18;
      }
    }
  }
  local_14 = puVar4;
  puVar4 = (undefined4 *)((int)local_24 + 5);
  puVar11 = local_24;
  local_24 = puVar4;
  FUN_006379a0(&local_1c,puVar11,puVar4);
  _local_8 = CONCAT31(uStack_7,8);
  local_38 = "{#F1}";
  local_34 = (char *)local_1c;
  do {
    iVar9 = FUN_00443260();
    iVar5 = FUN_00443260();
    puVar4 = local_14;
    if ((iVar9 - iVar5 != 0) && ((iVar9 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff))
    goto LAB_0057f7b5;
  } while (iVar9 != 0);
  if (local_14 != param_1) {
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    local_14 = param_1;
    local_18 = param_1;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar8 = puVar4 + 1;
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)*puVar4)(1);
      }
    }
  }
LAB_0057f7b5:
  local_34 = "{#FD}";
  local_38 = (char *)local_1c;
  do {
    local_3c = (undefined4 *)FUN_00443260();
    iVar9 = FUN_00443260();
    puVar4 = local_14;
    if (((int)local_3c - iVar9 != 0) &&
       (((int)local_3c - iVar9 >> 0x1f & 0xfffffffeU) != 0xffffffff)) goto LAB_0057f828;
  } while (local_3c != (undefined4 *)0x0);
  if (local_14 != param_1) {
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    local_14 = param_1;
    local_18 = param_1;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar8 = puVar4 + 1;
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)*puVar4)(1);
      }
    }
  }
LAB_0057f828:
  local_38 = "{#FI}";
  local_3c = local_1c;
  do {
    local_34 = (char *)FUN_00443260();
    iVar9 = FUN_00443260();
    puVar11 = puVar6;
    if (((int)local_34 - iVar9 != 0) &&
       (((int)local_34 - iVar9 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
      local_38 = "{#F2}";
      local_3c = local_1c;
      goto LAB_0057f8b0;
    }
  } while (local_34 != (char *)0x0);
  puVar6 = (undefined4 *)FUN_00680a50(&local_44);
  puVar4 = (undefined4 *)*puVar6;
  *puVar6 = local_14;
  local_18 = puVar4;
  local_14 = puVar4;
  if (local_44 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = local_44 + 1;
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*local_44)(1);
    }
  }
  goto LAB_0057f937;
LAB_0057f675:
  local_14 = local_18;
  puVar4 = local_18;
  goto LAB_0057f570;
  while (local_34 != (char *)0x0) {
LAB_0057f8b0:
    local_34 = (char *)FUN_00443260();
    iVar9 = FUN_00443260();
    if (((int)local_34 - iVar9 != 0) &&
       (((int)local_34 - iVar9 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
      iVar9 = FUN_00448730(local_1c,"{#CD}");
      puVar4 = local_14;
      puVar11 = puVar10;
      if ((iVar9 != 0) &&
         ((iVar9 = FUN_00448730(local_1c,"{#CR}"), puVar4 = local_14, puVar11 = DAT_00c7ef8c,
          iVar9 != 0 &&
          (iVar9 = FUN_00448730(local_1c,"{#CG}"), puVar4 = local_14, puVar11 = puVar6, iVar9 == 0))
         )) {
        puVar11 = DAT_00c7ef84;
      }
      goto LAB_0057f937;
    }
  }
  local_3c = (undefined4 *)((float)param_1[5] - 2.0);
  operator_new(0x28);
  puVar6 = (undefined4 *)FUN_00468a40(0);
  if (puVar6 != (undefined4 *)0x0) {
    LOCK();
    puVar6[1] = puVar6[1] + 1;
    UNLOCK();
  }
  _local_8 = CONCAT31(uStack_7,9);
  local_3c = puVar6;
  puVar4 = (undefined4 *)FUN_00681f20(&local_40,2);
  local_18 = (undefined4 *)*puVar4;
  *puVar4 = local_14;
  local_14 = local_18;
  if (local_40 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = local_40 + 1;
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*local_40)(1);
    }
  }
  puVar4 = local_14;
  if (puVar6 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = puVar6 + 1;
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*puVar6)(1);
      puVar4 = local_14;
    }
  }
LAB_0057f937:
  local_8 = 1;
  piVar8 = local_1c + -2;
  puVar6 = puVar11;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  goto LAB_0057f570;
}

