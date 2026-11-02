// rea decompile_all
// name: FUN_006dffc0
// address: 0x6dffc0
// body: available
// range: 0x6dffc0-0x6e003f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dffc0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  bool bVar2;
  bool bVar3;
  
  uVar1 = in_ECX[0xd];
  if ((uVar1 & 3) == 0) {
    if ((in_ECX[1] == 0) || (*(char *)(in_ECX[1] + 0xac) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = (uVar1 & 3) == 2;
  }
  uVar1 = (uVar1 ^ param_1) & 3 ^ uVar1;
  in_ECX[0xd] = uVar1;
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    if ((in_ECX[1] == 0) || (*(char *)(in_ECX[1] + 0xac) == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = uVar1 == 2;
  }
  if (bVar3 != bVar2) {
    if (in_ECX[1] != 0) {
      FUN_00690c60();
    }
    (**(code **)(*in_ECX + 0xc))(bVar3);
  }
  return;
}

