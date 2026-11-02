// rea decompile_all
// name: FUN_004b4b80
// address: 0x4b4b80
// body: available
// range: 0x4b4b80-0x4b4cb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4b80(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703ea8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *param_1;
  iVar6 = param_1[3];
  local_1c = param_1[1];
  local_20 = param_1[2];
  local_14 = iVar6;
  iVar2 = FUN_0044ec90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar3 = (**(code **)(*param_2 + 4))(param_1);
  iVar4 = param_1[3];
  param_1 = (undefined4 *)uVar3;
  if (iVar6 < iVar4) {
    do {
      iVar4 = iVar4 - local_24;
      if (0 < iVar4) {
        iVar5 = 0;
        if (0 < iVar6 - local_24) {
          iVar5 = iVar6 - local_24;
        }
        FUN_006379a0(local_2c,iVar5,iVar4);
        local_8 = 0;
        FUN_004b4ec0(iVar4 - iVar5,param_1);
        local_8 = 0xffffffff;
        _Memory = (int *)(local_2c[0] + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar6 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(_Memory);
          }
        }
        iVar6 = local_14;
        if (iVar2 <= iVar4) break;
      }
      local_18 = *puVar1;
      iVar6 = puVar1[3];
      local_1c = puVar1[1];
      local_20 = puVar1[2];
      local_14 = iVar6;
      param_1 = (undefined4 *)(**(code **)(*param_2 + 4))(puVar1);
      iVar4 = puVar1[3];
    } while (iVar6 < iVar4);
  }
  *puVar1 = local_18;
  puVar1[1] = local_1c;
  puVar1[2] = local_20;
  puVar1[3] = iVar6;
  ExceptionList = local_10;
  return;
}

