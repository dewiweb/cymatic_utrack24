// rea decompile_all
// name: FUN_00693b10
// address: 0x693b10
// body: available
// range: 0x693b10-0x693e16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00693b10(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721cab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)*param_1 != '\0') {
    if (param_5 != 0) {
      if ((((*(char *)(param_5 + 0x48) == '\0') &&
           (uVar7 = *(int *)(param_5 + 0x44) - 1, uVar7 < *(uint *)(param_5 + 0x24))) &&
          (iVar1 = *(int *)(*(int *)(param_5 + 0x1c) + uVar7 * 4), iVar1 != 0)) &&
         (100 < *(int *)(iVar1 + 8))) {
        FUN_00697280();
      }
      operator_new(0x20);
      uVar3 = FUN_004a1f20(in_ECX,param_1,param_2,param_3,param_4,*(undefined4 *)(in_ECX + 0x110),
                           param_6);
      FUN_0063ba90(uVar3);
      ExceptionList = local_10;
      return;
    }
    iVar4 = FUN_00693140(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar5 = param_2;
    if (param_2 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_00696620(param_2,iVar5);
    iVar5 = 0;
    iVar4 = 0;
    param_2 = 0;
    if (0 < *(int *)(in_ECX + 0x11c)) {
      do {
        iVar5 = FUN_004a07b0();
        iVar5 = iVar5 + param_2;
        if (iVar1 == param_2) {
          piVar6 = operator_new(0x14);
          uVar3 = *(undefined4 *)(in_ECX + 0x128);
          iVar2 = *param_3;
          *piVar6 = iVar2;
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          piVar6[1] = param_4;
          piVar6[2] = 0;
          piVar6[3] = 0;
          piVar6[4] = 0;
          local_8 = 2;
          FUN_004a0920(param_1,uVar3);
          local_8 = 0xffffffff;
          FUN_00411110(iVar4,piVar6);
          break;
        }
        if ((param_2 < iVar1) && (iVar1 < iVar5)) {
          uVar3 = FUN_004a01f0(iVar1 - param_2,*(undefined4 *)(in_ECX + 0x128));
          FUN_00411110(iVar4 + 1,uVar3);
          operator_new(0x14);
          local_8 = 3;
          uVar3 = FUN_0049ff40(param_1,param_3,param_4,*(undefined4 *)(in_ECX + 0x128));
          local_8 = 0xffffffff;
          FUN_00411110(iVar4 + 1,uVar3);
          break;
        }
        iVar4 = iVar4 + 1;
        param_2 = iVar5;
      } while (iVar4 < *(int *)(in_ECX + 0x11c));
    }
    if (iVar5 == iVar1) {
      piVar6 = operator_new(0x14);
      uVar3 = *(undefined4 *)(in_ECX + 0x128);
      iVar5 = *param_3;
      *piVar6 = iVar5;
      if (iVar5 != 0) {
        LOCK();
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        UNLOCK();
      }
      piVar6[1] = param_4;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      local_8 = 6;
      FUN_004a0920(param_1,uVar3);
      local_8 = 0xffffffff;
      iVar5 = *(int *)(in_ECX + 0x11c) + 1;
      if (*(int *)(in_ECX + 0x118) < iVar5) {
        FUN_00409cf0(iVar5 / 2 + *(int *)(in_ECX + 0x11c) + 9 & 0xfffffff8);
      }
      iVar5 = *(int *)(in_ECX + 0x11c);
      *(int *)(in_ECX + 0x11c) = iVar5 + 1;
      *(int **)(*(int *)(in_ECX + 0x114) + iVar5 * 4) = piVar6;
    }
    FUN_00692ac0();
    *(undefined4 *)(in_ECX + 0x10c) = 0xffffffff;
    *(undefined1 *)(in_ECX + 0xa0) = 1;
    FUN_00696340();
    FUN_00696020(param_6,0);
    iVar4 = FUN_00693140();
    iVar5 = iVar1;
    if (iVar1 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_00696620(iVar1,iVar5);
  }
  ExceptionList = local_10;
  return;
}

