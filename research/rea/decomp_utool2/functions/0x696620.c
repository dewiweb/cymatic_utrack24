// rea decompile_all
// name: FUN_00696620
// address: 0x696620
// body: available
// range: 0x696620-0x696781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696620(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *_Memory;
  int iVar3;
  float fVar4;
  int local_28;
  undefined1 local_1c [4];
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721e81;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != param_2) {
    local_14 = 0.0;
    local_18 = *(float *)(*(int *)(in_ECX + 0x108) + 0x14);
    if (*(char *)(in_ECX + 0x97) == '\0') {
      fVar4 = 3.4028235e+38;
    }
    else {
      fVar4 = (float)((*(int *)(*(int *)(in_ECX + 0x7c) + 0xb8) - *(int *)(in_ECX + 0xfc)) + -3);
    }
    if (0.0 < fVar4) {
      FUN_004a0d50(in_ECX + 0x114,*(undefined4 *)(in_ECX + 0x128));
      local_8 = 0;
      FUN_004a1e40(param_1,local_1c,&local_14,&local_18);
      iVar3 = (int)local_14;
      iVar2 = FUN_00693140(uVar1);
      if (param_2 < iVar2) {
        FUN_004a1e40(param_2,local_1c,&local_14,&local_18);
        iVar2 = (int)(local_18 * 2.0 + local_14);
      }
      else {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x80) + 0x1c);
      }
      FUN_006ceb30(0,iVar3,*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x18),iVar2 - iVar3);
      _Memory = (int *)(local_28 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar2 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(_Memory);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

