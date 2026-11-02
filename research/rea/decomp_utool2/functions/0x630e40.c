// rea decompile_all
// name: FUN_00630e40
// address: 0x630e40
// body: available
// range: 0x630e40-0x630f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00630e40(undefined4 param_1)

{
  int iVar1;
  int *_Memory;
  int in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0061d670();
  local_8 = 0;
  if (*(int *)(in_ECX + 4) < 0) {
    __alldiv();
  }
  else {
    __alldiv();
  }
  FUN_0061d7a0();
  FUN_0061d810();
  FUN_0061d870();
  FUN_0062ecc0();
  FUN_0062ed60();
  FUN_0062edc0();
  FUN_0045c990("%04d-%02d-%02dT%02d:%02d:%06.03f");
  FUN_00633930(&stack0xffffffd0);
  FUN_00637730();
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

