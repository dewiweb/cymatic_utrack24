// rea decompile_all
// name: FUN_00469cd0
// address: 0x469cd0
// body: available
// range: 0x469cd0-0x469db2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469cd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *_Memory;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070138d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar3 = 0x40;
  if (0x40 < iVar4) {
    iVar3 = iVar4;
  }
  if (*(int *)(in_ECX + 4) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + 8 + iVar3 & 0xfffffff8);
  }
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar3);
      uVar6 = puVar5[3];
      local_8 = 0;
      uVar2 = FUN_006379a0(local_18,*puVar5,puVar5[1]);
      local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
      FUN_00469900(uVar2,puVar5 + 2,uVar6);
      local_8 = 0xffffffff;
      _Memory = (int *)(local_18[0] + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ExceptionList = local_10;
  return;
}

