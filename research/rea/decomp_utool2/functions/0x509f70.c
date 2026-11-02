// rea decompile_all
// name: FUN_00509f70
// address: 0x509f70
// body: available
// range: 0x509f70-0x50a04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509f70(undefined4 *param_1)

{
  int iVar1;
  int *_Memory;
  undefined4 extraout_EDX;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 local_28 [20];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708378;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_3c = (undefined1 *)0x509faa;
  FUN_0045c990();
  local_8 = 0;
  puStack_3c = (undefined1 *)0x509fbb;
  FUN_0057f430();
  puStack_3c = (undefined1 *)0x509fc5;
  FUN_00684c50();
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_3c = (undefined1 *)0x509fed;
      FID_conflict__free(_Memory);
    }
  }
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  puStack_3c = (undefined1 *)0x50a00c;
  (**(code **)(*(int *)*param_1 + 0x68))();
  puStack_3c = local_28;
  uStack_40 = 0x50a017;
  FUN_006e6400();
  puStack_3c = (undefined1 *)0x1;
  uStack_40 = 0x24;
  FUN_0040e4d0(auStack_50);
  FUN_006830c0(extraout_EDX);
  ExceptionList = local_10;
  return;
}

