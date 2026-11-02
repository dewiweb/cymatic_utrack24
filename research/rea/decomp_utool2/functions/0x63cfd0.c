// rea decompile_all
// name: FUN_0063cfd0
// address: 0x63cfd0
// body: available
// range: 0x63cfd0-0x63d0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0063cfd0(undefined4 *param_1)

{
  void *_Memory;
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined4 local_24;
  int local_20;
  void *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f73b;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = *(undefined4 *)(in_ECX + 0x2c);
  local_1c = (void *)0x0;
  local_20 = param_1[1];
  uVar4 = local_20 + 8;
  if (uVar4 == 0) {
    uVar4 = 0;
    local_18 = 0;
  }
  else {
    local_18 = uVar4;
    FID_conflict__free((void *)0x0);
    local_1c = (void *)FUN_004c554b(uVar4);
  }
  _Memory = local_1c;
  local_8 = 0;
  uVar2 = 8;
  if ((7 < uVar4) || (uVar2 = uVar4, uVar4 != 0)) {
    FUN_004c2c30(local_1c,&local_24,uVar2,uVar1);
  }
  iVar3 = param_1[1];
  if (uVar4 < iVar3 + 8U) {
    iVar3 = uVar4 - 8;
  }
  if (iVar3 != 0) {
    FUN_004c2c30((int)_Memory + 8,*param_1,iVar3,uVar1);
  }
  uVar1 = FUN_0063cf30(_Memory,uVar4);
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return uVar1 == uVar4;
}

