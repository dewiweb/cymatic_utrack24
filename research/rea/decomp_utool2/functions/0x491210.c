// rea decompile_all
// name: FUN_00491210
// address: 0x491210
// body: available
// range: 0x491210-0x4912b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00491210(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007020b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00637f30(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (*(int *)(&DAT_00c8ab28 + in_ECX * 4) == 0) {
    puVar2 = operator_new(0x10);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = FUN_006862d0();
    *puVar2 = uVar3;
    puVar2[1] = 1;
    puVar2[2] = in_ECX;
    *(undefined1 *)(puVar2 + 3) = 1;
    *(undefined4 **)(&DAT_00c8ab28 + in_ECX * 4) = puVar2;
  }
  else {
    LOCK();
    piVar1 = (int *)(*(int *)(&DAT_00c8ab28 + in_ECX * 4) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  DAT_00c8a9b8 = 0;
  UNLOCK();
  ExceptionList = local_10;
  return *(undefined4 *)(&DAT_00c8ab28 + in_ECX * 4);
}

