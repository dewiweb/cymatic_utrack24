// rea decompile_all
// name: FUN_00517bc0
// address: 0x517bc0
// body: available
// range: 0x517bc0-0x517cb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00517bc0(void)

{
  int iVar1;
  int in_ECX;
  int *_Memory;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007096e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_40 = &stack0xffffffcc;
  if (*(int *)(*(int *)(in_ECX + 0x9c) + 0x14) == 0) {
    local_38 = 0x517c0a;
    FUN_00684c50();
    local_38 = 0x517c1b;
    FUN_0045c990();
    local_8 = 0;
    local_38 = 0x517c30;
    FUN_006e6400();
    local_38 = 0x24;
    FUN_0040e4d0(auStack_48);
    FUN_006830c0(&local_14);
    _Memory = (int *)(local_14 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_38 = 0x517c74;
        FID_conflict__free(_Memory);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else {
    local_38 = 0;
    uStack_3c = 0x1000500;
    uStack_44 = 0x517c98;
    FUN_006e8e70();
    local_38 = 0x517ca0;
    FUN_00684a80();
  }
  ExceptionList = local_10;
  return;
}

