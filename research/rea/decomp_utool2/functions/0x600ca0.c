// rea decompile_all
// name: FUN_00600ca0
// address: 0x600ca0
// body: available
// range: 0x600ca0-0x600f0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00600ca0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_EDX;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *in_stack_ffffff7c;
  int *piVar8;
  int *piVar9;
  int *local_5c;
  char *local_50;
  int local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  uint local_24;
  undefined4 *local_20;
  char *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071ba63;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_30 = 0;
  local_50 = (char *)0x0;
  local_4c = 0;
  local_8 = 0;
  (**(code **)(*in_EDX + 0x5c))(4,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  piVar8 = (int *)0x600d06;
  (**(code **)(*in_EDX + 0x50))(&local_50,param_1 + -4);
  local_14 = (int *)0x0;
  local_5c = (int *)0x0;
  local_24 = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar4 = local_50 + local_4c;
  pcVar7 = local_50;
  local_1c = pcVar4;
  if (local_50 < pcVar4) {
    do {
      param_1._3_1_ = '\0';
      piVar8 = (int *)0x600d3c;
      cVar1 = FUN_00600f70();
      if (cVar1 != '\0') {
        local_38 = pcVar7;
        local_34 = pcVar4;
        if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
          puVar6 = (undefined4 *)&DAT_00bfe12c;
          local_28 = pcVar7;
        }
        else {
          piVar8 = (int *)(pcVar4 + -(int)pcVar7);
          local_28 = pcVar7;
          puVar2 = (undefined4 *)FUN_004bfe22(((uint)(piVar8 + 1) & 0xfffffffc) + 0xb);
          puVar2[1] = (uint)(piVar8 + 1) & 0xfffffffc;
          puVar6 = puVar2 + 2;
          *puVar2 = 0;
          in_stack_ffffff7c = piVar8;
          FUN_004c2c30(puVar6,pcVar7,piVar8);
          *(undefined1 *)((int)puVar6 + (int)piVar8) = 0;
        }
        piVar8 = (int *)0x600d97;
        local_20 = puVar6;
        param_1._3_1_ = FUN_00600f10();
        local_28 = (char *)(local_18 + 1);
        if ((int)local_24 < (int)local_28) {
          iVar3 = (int)local_28;
          if ((int)local_28 < 0) {
            iVar3 = local_18 + 2;
          }
          uVar5 = local_18 + 9 + (iVar3 >> 1) & 0xfffffff8;
          if (local_24 != uVar5) {
            if ((int)uVar5 < 1) {
              in_stack_ffffff7c = (int *)0x600def;
              FID_conflict__free(local_14);
              local_5c = (int *)0x0;
              piVar8 = local_14;
              local_24 = uVar5;
              local_14 = local_5c;
            }
            else {
              piVar8 = (int *)(uVar5 * 4);
              if (local_14 == (int *)0x0) {
                in_stack_ffffff7c = (int *)0x600dd7;
                local_5c = (int *)FUN_004c554b();
                local_24 = uVar5;
                local_14 = local_5c;
              }
              else {
                local_5c = (int *)FUN_004c553b(local_14,piVar8);
                in_stack_ffffff7c = local_14;
                local_24 = uVar5;
                local_14 = local_5c;
              }
            }
          }
        }
        if (local_14 + local_18 != (int *)0x0) {
          local_14[local_18] = (int)puVar6;
          piVar9 = puVar6 + -2;
          local_40 = puVar6;
          local_3c = puVar6;
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            *piVar9 = *piVar9 + 1;
            UNLOCK();
          }
        }
        piVar9 = puVar6 + -2;
        pcVar4 = local_1c;
        local_48 = puVar6;
        local_44 = puVar6;
        local_18 = (int)local_28;
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            in_stack_ffffff7c = (int *)0x600e51;
            FID_conflict__free(piVar9);
            pcVar4 = local_1c;
            piVar8 = piVar9;
          }
        }
      }
      iVar3 = 0x32;
      if (param_1._3_1_ != '\0') {
        iVar3 = 0x76;
      }
      pcVar7 = pcVar7 + iVar3;
      if (pcVar4 <= pcVar7) break;
      if (*pcVar7 == '\0') {
        if (pcVar7 + 0x34 < pcVar4) {
          piVar8 = (int *)0x600e82;
          cVar1 = FUN_00600f70();
          if (cVar1 != '\0') {
            pcVar7 = pcVar7 + 0x32;
            goto LAB_00600ebf;
          }
        }
        if (pcVar7 + 0x78 < pcVar4) {
          piVar8 = (int *)0x600e9a;
          cVar1 = FUN_00600f70();
          if (cVar1 != '\0') {
            pcVar7 = pcVar7 + 0x76;
            goto LAB_00600ebf;
          }
        }
        if (pcVar7 + 0xaa < pcVar4) {
          piVar8 = (int *)0x600eba;
          cVar1 = FUN_00600f70();
          if (cVar1 != '\0') {
            pcVar7 = pcVar7 + 0xa8;
          }
        }
      }
LAB_00600ebf:
    } while (pcVar7 < pcVar4);
  }
  FUN_00636260(local_2c,&DAT_00a91a80,in_stack_ffffff7c,piVar8);
  FUN_0040f7f0();
  FID_conflict__free(local_5c);
  FID_conflict__free(local_50);
  ExceptionList = local_10;
  return local_2c;
}

