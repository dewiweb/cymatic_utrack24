// rea decompile_all
// name: FUN_00690cf0
// address: 0x690cf0
// body: available
// range: 0x690cf0-0x690db0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690cf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined1 local_20 [4];
  int local_1c;
  int local_14;
  int local_c;
  
  if ((*(int *)(in_ECX + 0x9c) != 0) && (local_c = FUN_0068fb00(0), local_c != 0)) {
    FUN_00690520(local_20,0);
    iVar4 = (*(int *)(in_ECX + 0x1c) - local_14) * param_1 + local_1c;
    iVar1 = FUN_0068fa60();
    FUN_00690f80(param_1);
    iVar2 = FUN_006e0960(0);
    while (iVar2 != 0) {
      iVar2 = FUN_00690520(local_20,0);
      if ((param_1 < 0) && (*(int *)(iVar2 + 4) <= iVar4)) {
        return;
      }
      if ((0 < param_1) && (iVar4 <= *(int *)(iVar2 + 4))) {
        return;
      }
      iVar3 = FUN_0068fa60();
      if (iVar3 == iVar1) {
        return;
      }
      FUN_00690f80(param_1);
      iVar2 = FUN_006e0960(0);
      iVar1 = iVar3;
    }
  }
  return;
}

