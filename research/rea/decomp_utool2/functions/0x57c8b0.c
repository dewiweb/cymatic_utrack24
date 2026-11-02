// rea decompile_all
// name: FUN_0057c8b0
// address: 0x57c8b0
// body: available
// range: 0x57c8b0-0x57ca50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c8b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *_Memory;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712319;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e6400();
  FUN_00684c50();
  FUN_00472db0((float)local_14 - 1.0);
  FUN_00683310();
  FUN_0045c990();
  local_8 = 0;
  FUN_0057f430();
  FUN_00684c50();
  local_8 = 0xffffffff;
  _Memory = (int *)(param_2 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  iVar2 = 1;
  iVar1 = FUN_006d78e0();
  if (1 < iVar1) {
    fVar3 = (float)(local_1c + local_14 + -0x18) + 4.0;
    fVar5 = (float)(local_1c + local_14) - 4.0;
    fVar4 = fVar3;
    fVar6 = fVar5;
    do {
      FUN_006d7870();
      if (fVar4 < fVar6) {
        (**(code **)(*(int *)*param_1 + 0x50))();
        fVar4 = fVar3;
        fVar6 = fVar5;
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_006d78e0();
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_10;
  return;
}

