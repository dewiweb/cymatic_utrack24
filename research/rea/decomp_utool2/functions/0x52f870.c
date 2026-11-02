// rea decompile_all
// name: FUN_0052f870
// address: 0x52f870
// body: available
// range: 0x52f870-0x52fa8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f870(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *extraout_ECX;
  int *piVar4;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  int *piVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cba0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(uint *)(param_1 + 0x10) >> 5 & 1) != 0) {
    if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
      in_stack_ffffffd0 = 1;
      in_stack_ffffffcc = 1;
      in_stack_ffffffc8 = 0x52f8bf;
      FUN_006dff00(1,1,in_ECX);
    }
    piVar6 = in_ECX + 0x12;
    FUN_004b00e0(uVar2);
    if (in_ECX[0x13] != 0) {
      in_stack_ffffffd0 = 0x52f8d6;
      FID_conflict__free((void *)*piVar6);
      *piVar6 = 0;
      in_ECX[0x13] = 0;
    }
    in_ECX[0x14] = 0;
    piVar8 = (int *)0x52f8f4;
    uVar2 = FUN_005305f0();
    if ((uVar2 & 1) != 0) {
      in_stack_ffffffc8 = FUN_00530670();
      in_stack_ffffffd0 = 0;
      in_stack_ffffffcc = 1;
      in_stack_ffffffc4 = 1;
      local_8 = 0;
      piVar8 = extraout_ECX;
      FUN_006dfcb0(1,in_stack_ffffffc8,1,0,extraout_ECX);
      local_8 = 0xffffffff;
      piVar4 = (int *)(param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          in_stack_ffffffd0 = 0x52f941;
          FID_conflict__free(piVar4);
          piVar8 = piVar4;
        }
      }
    }
    if ((uVar2 & 2) != 0) {
      in_stack_ffffffc8 = FUN_00530670();
      in_stack_ffffffd0 = 0;
      in_stack_ffffffcc = 1;
      in_stack_ffffffc4 = 2;
      local_8 = 1;
      piVar8 = extraout_ECX_00;
      FUN_006dfcb0(2,in_stack_ffffffc8,1,0,extraout_ECX_00);
      local_8 = 0xffffffff;
      piVar4 = (int *)(param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          in_stack_ffffffd0 = 0x52f993;
          FID_conflict__free(piVar4);
          piVar8 = piVar4;
        }
      }
    }
    if ((uVar2 & 4) != 0) {
      in_stack_ffffffc8 = FUN_00530670();
      in_stack_ffffffd0 = 0;
      in_stack_ffffffcc = 1;
      in_stack_ffffffc4 = 4;
      local_8 = 2;
      piVar8 = extraout_ECX_01;
      FUN_006dfcb0(4,in_stack_ffffffc8,1,0,extraout_ECX_01);
      local_8 = 0xffffffff;
      piVar4 = (int *)(param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          in_stack_ffffffd0 = 0x52f9e5;
          FID_conflict__free(piVar4);
          piVar8 = piVar4;
        }
      }
    }
    if ((uVar2 & 8) != 0) {
      in_stack_ffffffc8 = FUN_00530670();
      in_stack_ffffffd0 = 0;
      in_stack_ffffffcc = 1;
      in_stack_ffffffc4 = 8;
      local_8 = 3;
      piVar8 = extraout_ECX_02;
      FUN_006dfcb0(8,in_stack_ffffffc8,1,0,extraout_ECX_02);
      local_8 = 0xffffffff;
      piVar4 = (int *)(local_14 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          in_stack_ffffffd0 = 0x52fa34;
          FID_conflict__free(piVar4);
          piVar8 = piVar4;
        }
      }
    }
    iVar5 = in_ECX[0x14] + -1;
    if (-1 < iVar5) {
      piVar6 = (int *)(*piVar6 + iVar5 * 4);
      iVar7 = 0;
      do {
        iVar1 = *piVar6;
        piVar6 = piVar6 + -1;
        iVar3 = iVar7 + 1;
        if (*(char *)(iVar1 + 0x26) != '\0') {
          iVar3 = iVar7;
        }
        iVar5 = iVar5 + -1;
        iVar7 = iVar3;
      } while (-1 < iVar5);
      if (0 < iVar3) {
        iVar5 = FUN_006dfc40(in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0
                             ,piVar8);
        if (iVar5 != 0) {
          (**(code **)(*in_ECX + 0x5c))(iVar5);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

