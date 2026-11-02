// rea decompile_all
// name: FUN_004a0690
// address: 0x4a0690
// body: available
// range: 0x4a0690-0x4a07a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0690(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int *_Memory;
  int iVar8;
  int iVar9;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007031f8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  iVar9 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      local_18 = *(int *)(*(int *)(in_ECX + 8) + iVar9 * 4);
      iVar4 = *(int *)(local_18 + 8);
      iVar1 = iVar4 + local_14;
      if (param_2 < iVar1) {
        if (param_3 <= local_14) {
          ExceptionList = local_10;
          return;
        }
        iVar7 = 0;
        if (0 < iVar4) {
          iVar7 = iVar4;
        }
        iVar8 = param_2 - local_14;
        iVar4 = iVar8;
        if (iVar8 < param_3 - local_14) {
          iVar4 = param_3 - local_14;
        }
        if (iVar7 < iVar4) {
          iVar4 = iVar7;
        }
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar7 = iVar8;
        if (iVar8 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar8 != iVar7) {
          local_14 = iVar1;
          puVar5 = (undefined4 *)FUN_006379a0(&local_1c,iVar8,iVar7);
          local_8 = 0;
          uVar2 = *puVar5;
          uVar6 = FUN_0045d1e0(uVar2,uVar3);
          (**(code **)(*param_1 + 0x10))(uVar2,uVar6);
          local_8 = 0xffffffff;
          _Memory = (int *)(local_1c + -8);
          iVar1 = local_14;
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            iVar4 = *_Memory;
            *_Memory = *_Memory + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(_Memory);
              iVar1 = local_14;
            }
          }
        }
      }
      local_14 = iVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x10));
  }
  ExceptionList = local_10;
  return;
}

