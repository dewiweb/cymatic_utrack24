// rea decompile_all
// name: FUN_004ff7e0
// address: 0x4ff7e0
// body: available
// range: 0x4ff7e0-0x4ff8ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff7e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  undefined1 local_24 [16];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007071b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = operator_new(0x67c);
  local_8 = 0;
  iVar1 = FUN_004ffa20(in_ECX);
  local_8 = 0xffffffff;
  puVar2 = (undefined4 *)FUN_006e6400(local_24);
  FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  FUN_006e9910(1);
  FUN_006e62c0();
  FUN_006e9e70(1);
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    local_8 = 1;
    DAT_00c8a67c = FUN_006cb960();
    local_8 = 0xffffffff;
  }
  FUN_006e6060(iVar1,iVar1 + 0x10,200,1,0,0x3ff00000,0,0x3ff00000);
  *(byte *)(iVar1 + 0x68) = *(byte *)(iVar1 + 0x68) | 0x20;
  FUN_006cc500(2,1);
  ExceptionList = local_10;
  return;
}

