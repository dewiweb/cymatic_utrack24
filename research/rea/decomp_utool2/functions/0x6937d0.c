// rea decompile_all
// name: FUN_006937d0
// address: 0x6937d0
// body: available
// range: 0x6937d0-0x693b04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006937d0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721c3d;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = 0;
  iVar7 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0x11c)) {
    do {
      iVar6 = FUN_004a07b0(uVar4);
      iVar6 = local_14 + iVar6;
      if (param_1 == local_14) {
        iVar1 = param_2[2];
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
          uVar9 = 0x14;
          uVar8 = 0x693a07;
          piVar5 = operator_new(0x14);
          piVar3 = *(int **)(*param_2 + iVar1 * 4);
          iVar2 = *piVar3;
          *piVar5 = iVar2;
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          piVar5[1] = piVar3[1];
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          local_8 = 2;
          FUN_004b1fb0(piVar3 + 2,uVar8,uVar9);
          local_8 = 0xffffffff;
          FUN_00411110(iVar7,piVar5);
        }
        break;
      }
      if ((local_14 < param_1) && (param_1 < iVar6)) {
        uVar8 = FUN_004a01f0(param_1 - local_14,*(undefined4 *)(in_ECX + 0x128));
        FUN_00411110(iVar7 + 1,uVar8);
        iVar1 = param_2[2];
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
          uVar9 = 0x14;
          uVar8 = 0x69389f;
          piVar5 = operator_new(0x14);
          piVar3 = *(int **)(*param_2 + iVar1 * 4);
          iVar2 = *piVar3;
          *piVar5 = iVar2;
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          piVar5[1] = piVar3[1];
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          local_8 = 5;
          FUN_004b1fb0(piVar3 + 2,uVar8,uVar9);
          local_8 = 0xffffffff;
          FUN_00411110(iVar7 + 1,piVar5);
        }
        break;
      }
      iVar7 = iVar7 + 1;
      local_14 = iVar6;
    } while (iVar7 < *(int *)(in_ECX + 0x11c));
  }
  if ((iVar6 == param_1) && (param_1 = 0, 0 < param_2[2])) {
    do {
      uVar9 = 0x14;
      uVar8 = 0x69392d;
      piVar5 = operator_new(0x14);
      piVar3 = *(int **)(*param_2 + param_1 * 4);
      iVar6 = *piVar3;
      *piVar5 = iVar6;
      if (iVar6 != 0) {
        LOCK();
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
        UNLOCK();
      }
      piVar5[1] = piVar3[1];
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      local_8 = 8;
      FUN_004b1fb0(piVar3 + 2,uVar8,uVar9);
      local_8 = 0xffffffff;
      iVar6 = *(int *)(in_ECX + 0x11c);
      iVar7 = iVar6 + 1;
      if ((int)*(uint *)(in_ECX + 0x118) < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar6 + 2;
        }
        uVar4 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x118) != uVar4) {
          if ((int)uVar4 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x114));
            *(undefined4 *)(in_ECX + 0x114) = 0;
          }
          else if (*(int *)(in_ECX + 0x114) == 0) {
            uVar8 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x114) = uVar8;
          }
          else {
            uVar8 = FUN_004c553b(*(int *)(in_ECX + 0x114),uVar4 * 4);
            *(undefined4 *)(in_ECX + 0x114) = uVar8;
          }
          *(uint *)(in_ECX + 0x118) = uVar4;
        }
      }
      iVar6 = *(int *)(in_ECX + 0x11c);
      param_1 = param_1 + 1;
      *(int *)(in_ECX + 0x11c) = iVar6 + 1;
      *(int **)(*(int *)(in_ECX + 0x114) + iVar6 * 4) = piVar5;
    } while (param_1 < param_2[2]);
  }
  FUN_00692ac0();
  *(undefined4 *)(in_ECX + 0x10c) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0xa0) = 1;
  ExceptionList = local_10;
  return;
}

