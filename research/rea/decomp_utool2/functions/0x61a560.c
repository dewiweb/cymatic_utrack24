// rea decompile_all
// name: FUN_0061a560
// address: 0x61a560
// body: available
// range: 0x61a560-0x61a8ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061a560(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int iVar9;
  undefined1 *puStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 *puStack_3c;
  int local_28;
  int iStack_24;
  undefined4 *local_1c;
  
  if (-1 < param_2) {
    puStack_3c = (undefined4 *)param_2;
    piStack_40 = (int *)0x20;
    uStack_44 = 0x61a586;
    (**(code **)(*param_1 + 0x44))();
  }
  puVar1 = (undefined4 *)(in_ECX + 0xc);
  local_1c = puVar1;
  if (**(char **)(in_ECX + 0xc) == '\0') {
    puStack_3c = (undefined4 *)DAT_00c8a8ec;
    piStack_40 = (int *)0x61a85d;
    FUN_0061a410();
    puStack_3c = (undefined4 *)0x0;
    piStack_40 = (int *)0x61a872;
    FUN_0061a8c0();
    return;
  }
  pcVar2 = *(code **)(*param_1 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    puStack_3c = (undefined4 *)0x1;
    piStack_40 = &local_28;
    local_28 = CONCAT31(local_28._1_3_,0x3c);
    uStack_44 = 0x61a5ba;
    (**(code **)(*param_1 + 0x10))();
  }
  else {
    puStack_3c = (undefined4 *)0x3c;
    piStack_40 = (int *)0x61a882;
    (*pcVar2)();
  }
  uVar8 = *puVar1;
  uStack_48 = 0x61a5c6;
  uStack_44 = uVar8;
  uStack_44 = FUN_0045d1e0();
  piStack_4c = (int *)0x61a5d2;
  uStack_48 = uVar8;
  (**(code **)(*param_1 + 0x10))();
  piStack_4c = (int *)0x61a5db;
  iVar6 = FUN_0044ec90();
  local_28 = iVar6 + 1 + param_2;
  iVar9 = 0;
  iVar6 = *(int *)(unaff_EBX + 8);
  while (iVar6 != 0) {
    if ((param_3 < iVar9) && (-1 < param_2)) {
      puVar3 = (undefined1 *)param_1[1];
      puStack_50 = (undefined1 *)0x61a616;
      piStack_4c = (int *)puVar3;
      piStack_4c = (int *)FUN_0045d1e0();
      puStack_50 = puVar3;
      (**(code **)(*param_1 + 0x10))();
      (**(code **)(*param_1 + 0x44))(0x20,unaff_EBX);
      iVar9 = 0;
    }
    piStack_4c = (int *)0x61a63a;
    iStack_24 = (**(code **)(*param_1 + 0xc))();
    pcVar2 = *(code **)(*param_1 + 0x14);
    if (pcVar2 == FUN_0062c8e0) {
      piStack_4c = (int *)0x1;
      puStack_50 = &stack0xffffffc8;
      (**(code **)(*param_1 + 0x10))();
    }
    else {
      piStack_4c = (int *)0x20;
      puStack_50 = (undefined1 *)0x61a88b;
      (*pcVar2)();
    }
    uVar8 = puStack_3c[1];
    uVar7 = FUN_0045d1e0(uVar8);
    (**(code **)(*param_1 + 0x10))(uVar8,uVar7);
    (**(code **)(*param_1 + 0x10))(&DAT_00c0174c,2);
    piVar5 = piStack_4c;
    FUN_0061a8c0(1);
    pcVar2 = *(code **)(*param_1 + 0x14);
    if (pcVar2 == FUN_0062c8e0) {
      puStack_50 = (undefined1 *)CONCAT31(puStack_50._1_3_,0x22);
      (**(code **)(*param_1 + 0x10))(&puStack_50,1);
    }
    else {
      (*pcVar2)(0x22);
    }
    iVar6 = (**(code **)(*param_1 + 0xc))();
    iVar9 = iVar9 + (iVar6 - iStack_24);
    iVar6 = *piVar5;
  }
  if (*(int *)(unaff_EBX + 4) == 0) {
    piStack_4c = (int *)0x2;
    puStack_50 = &DAT_00c01754;
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  pcVar2 = *(code **)(*param_1 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    piStack_4c = (int *)0x1;
    puStack_50 = &stack0xffffffc8;
    (**(code **)(*param_1 + 0x10))();
  }
  else {
    piStack_4c = (int *)0x3e;
    puStack_50 = (undefined1 *)0x61a89d;
    (*pcVar2)();
  }
  puVar1 = *(undefined4 **)(unaff_EBX + 4);
  bVar4 = false;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if ((-1 < param_2) && (!bVar4)) {
        iVar6 = param_1[1];
        uVar8 = FUN_0045d1e0(iVar6);
        (**(code **)(*param_1 + 0x10))(iVar6,uVar8);
        (**(code **)(*param_1 + 0x44))(0x20,param_2);
      }
      (**(code **)(*param_1 + 0x10))(&DAT_00c01748,2);
      uVar8 = *puStack_3c;
      uVar7 = FUN_0045d1e0(uVar8);
      (**(code **)(*param_1 + 0x10))(uVar8,uVar7);
      pcVar2 = *(code **)(*param_1 + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        puStack_50 = (undefined1 *)CONCAT31(puStack_50._1_3_,0x3e);
        (**(code **)(*param_1 + 0x10))(&puStack_50,1);
        return;
      }
      (*pcVar2)(0x3e);
      return;
    }
    if (*(char *)puVar1[3] == '\0') {
      FUN_0061a410(DAT_00c8a8ec);
      FUN_0061a8c0(0);
      bVar4 = true;
    }
    else {
      if (param_2 < 0) {
        if (bVar4) goto LAB_0061a830;
LAB_0061a781:
        iVar6 = (param_2 >> 0x1f & 0xfffffffeU) + 2 + param_2;
      }
      else {
        if (!bVar4) {
          iVar6 = param_1[1];
          uVar8 = FUN_0045d1e0(iVar6);
          (**(code **)(*param_1 + 0x10))(iVar6,uVar8);
          goto LAB_0061a781;
        }
LAB_0061a830:
        iVar6 = 0;
      }
      FUN_0061a560(param_1,iVar6,param_3);
      bVar4 = false;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

