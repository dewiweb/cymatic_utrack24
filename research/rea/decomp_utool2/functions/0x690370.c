// rea decompile_all
// name: FUN_00690370
// address: 0x690370
// body: available
// range: 0x690370-0x6903ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690370(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  local_10 = ExceptionList;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007218e2;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 4) = param_1;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0xc) + iVar1 * 4);
    FUN_00690370(param_1);
    pcVar3 = *(code **)(*piVar2 + 0x3c);
    if (pcVar3 != FUN_006dfa30) {
      (*pcVar3)(param_1,uVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

