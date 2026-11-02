// rea decompile_all
// name: FUN_004a4100
// address: 0x4a4100
// body: available
// range: 0x4a4100-0x4a43b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4100(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  int local_20;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  code *pcVar4;
  
  puStack_c = &LAB_0070362c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = *(int *)(param_3 + 0x14);
  in_ECX[1] = *(int *)(param_3 + 0x18);
  local_8 = 0;
  puVar9 = &local_3c;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  iVar3 = FUN_006e1ae0(local_1c,param_1,0,*(undefined4 *)(param_3 + 0x18));
  iVar3 = FUN_004a37e0(*(undefined4 *)(iVar3 + 4),puVar9);
  local_8 = 0xffffffff;
  in_ECX[2] = iVar3;
  in_ECX[3] = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if (iVar3 == 0) {
      ExceptionList = local_10;
      return;
    }
    in_ECX[2] = iVar3;
    in_ECX[3] = *(int *)(iVar3 + 0x14);
    piVar6 = (int *)FUN_00690520(local_5c,1);
    iVar3 = piVar6[3];
    iVar5 = piVar6[1];
    *in_ECX = *piVar6;
    in_ECX[1] = iVar3 + iVar5;
    local_8 = 1;
    iVar3 = *(int *)(param_1 + 0xa8);
    if (iVar3 < 0) {
      iVar3 = FUN_006e9580(uVar2);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x14) + 0xc))(param_1);
    }
    *in_ECX = *in_ECX + iVar3;
    ExceptionList = local_10;
    return;
  }
  FUN_00690520(&local_2c,1);
  piVar6 = (int *)in_ECX[2];
  iVar3 = piVar6[2];
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    piVar7 = *(int **)(iVar3 + 0xc);
    for (piVar8 = piVar7; piVar8 != piVar7 + *(int *)(iVar3 + 0x14); piVar8 = piVar8 + 1) {
      if (piVar6 == (int *)*piVar8) {
        iVar3 = (int)piVar8 - (int)piVar7 >> 2;
        goto LAB_004a41de;
      }
    }
    iVar3 = -1;
  }
LAB_004a41de:
  iVar5 = in_ECX[1];
  in_ECX[3] = iVar3;
  in_ECX[1] = local_28;
  if (piVar6[5] != 0) {
    if ((piVar6[0xd] & 3U) == 0) {
      if (piVar6[1] == 0) goto LAB_004a421e;
      cVar1 = *(char *)(piVar6[1] + 0xac);
    }
    else {
      cVar1 = (piVar6[0xd] & 3U) == 2;
    }
    if (cVar1 != '\0') goto LAB_004a4287;
  }
LAB_004a421e:
  if (*(int *)(param_2 + 8) < 1) {
    pcVar4 = *(code **)(*piVar6 + 0x50);
  }
  else {
    pcVar4 = *(code **)(*piVar6 + 0x48);
    param_3 = param_2;
    if (pcVar4 == FUN_006dfa00) goto LAB_004a4287;
  }
  cVar1 = (*pcVar4)(param_3);
  if (((cVar1 != '\0') &&
      (iVar3 = (int)(local_20 + (local_20 >> 0x1f & 3U)) >> 2, iVar3 + local_28 < iVar5)) &&
     (iVar5 < (local_28 - iVar3) + local_20)) {
    in_ECX[3] = 0;
    iVar3 = FUN_006911b0();
    *in_ECX = iVar3 + local_2c;
    in_ECX[1] = local_20 + local_28;
    ExceptionList = local_10;
    return;
  }
LAB_004a4287:
  if (iVar5 <= local_20 / 2 + local_28) {
    *in_ECX = local_2c;
    in_ECX[2] = *(int *)(in_ECX[2] + 8);
    ExceptionList = local_10;
    return;
  }
  iVar3 = (**(code **)(*(int *)in_ECX[2] + 0x14))();
  in_ECX[1] = in_ECX[1] + iVar3;
LAB_004a42a5:
  do {
    iVar3 = in_ECX[2];
    iVar5 = *(int *)(iVar3 + 8);
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x14) < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + -4 + *(int *)(iVar5 + 0x14) * 4);
      }
      if (iVar5 != iVar3) {
LAB_004a4330:
        in_ECX[3] = in_ECX[3] + 1;
        *in_ECX = local_2c;
        in_ECX[2] = *(int *)(in_ECX[2] + 8);
        ExceptionList = local_10;
        return;
      }
    }
    if (((*(int *)(iVar3 + 8) == 0) || (*(int *)(*(int *)(iVar3 + 8) + 8) == 0)) ||
       (local_2c < *in_ECX)) goto LAB_004a4330;
    in_ECX[2] = *(int *)(iVar3 + 8);
    piVar6 = (int *)FUN_00690520(local_4c,1);
    local_2c = *piVar6;
    iVar3 = *(int *)(in_ECX[2] + 8);
    if (iVar3 == 0) {
      in_ECX[3] = 0;
    }
    else {
      piVar6 = *(int **)(iVar3 + 0xc);
      for (piVar7 = piVar6; piVar7 != piVar6 + *(int *)(iVar3 + 0x14); piVar7 = piVar7 + 1) {
        if (in_ECX[2] == *piVar7) {
          in_ECX[3] = (int)piVar7 - (int)piVar6 >> 2;
          goto LAB_004a42a5;
        }
      }
      in_ECX[3] = -1;
    }
  } while( true );
}

