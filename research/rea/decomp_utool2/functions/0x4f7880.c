// rea decompile_all
// name: FUN_004f7880
// address: 0x4f7880
// body: available
// range: 0x4f7880-0x4f7953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7880(int param_1)

{
  char cVar1;
  int *in_ECX;
  int iVar2;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  int *piStack_1c;
  
  iVar2 = *(int *)(param_1 + 0xc);
  in_ECX[0x43] = *(int *)(param_1 + 8);
  in_ECX[0x44] = iVar2;
  if ((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) {
    if (in_ECX[3] != 0) {
      piStack_1c = (int *)0x4f78b8;
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') {
        return;
      }
    }
    if ((undefined **)*in_ECX != PushButton::vftable) {
      piStack_1c = (int *)0x4f794f;
      (*(code *)((undefined **)*in_ECX)[0x2c])();
    }
    iVar2 = in_ECX[0x20];
    while (0 < iVar2) {
      iVar2 = iVar2 + -1;
      if ((in_ECX[0x20] <= iVar2) && (iVar2 = in_ECX[0x20] + -1, iVar2 < 0)) break;
      uStack_20 = 0x4f78fa;
      piStack_1c = in_ECX;
      FUN_00410548();
    }
    iVar2 = in_ECX[0x20];
    while (0 < iVar2) {
      iVar2 = iVar2 + -1;
      if ((in_ECX[0x20] <= iVar2) && (iVar2 = in_ECX[0x20] + -1, iVar2 < 0)) break;
      uStack_20 = 0x4f7929;
      piStack_1c = in_ECX;
      FUN_00410543();
    }
    FUN_006e6400(auStack_28);
    FUN_006ce9f0(1);
  }
  return;
}

