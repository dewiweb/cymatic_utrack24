// rea decompile_all
// name: FUN_006c98b0
// address: 0x6c98b0
// body: available
// range: 0x6c98b0-0x6c998b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c98b0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  double dVar4;
  undefined1 local_80 [124];
  
  iVar2 = FUN_006cff90(local_80,*(undefined4 *)(in_ECX + 0x18));
  iVar1 = *(int *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 8);
  if (*(char *)(in_ECX + 0x38) == '\0') {
    if ((param_2 == '\0') && (*(char *)(*(int *)(param_1 + 0x30) + 0xc) != '\0')) {
      dVar4 = __hypot((double)(iVar2 - *(int *)(in_ECX + 0x28)),
                      (double)(iVar1 - *(int *)(in_ECX + 0x2c)));
      if ((int)dVar4 <= *(int *)(in_ECX + 0x34)) goto LAB_006c9965;
    }
    if (*(char *)(in_ECX + 0x38) != '\x01') {
      *(undefined1 *)(in_ECX + 0x38) = 1;
      iVar3 = *(int *)(in_ECX + 0x24);
      while (0 < iVar3) {
        iVar3 = iVar3 + -1;
        if ((*(int *)(in_ECX + 0x24) <= iVar3) && (iVar3 = *(int *)(in_ECX + 0x24) + -1, iVar3 < 0))
        break;
        FUN_00410536();
      }
    }
  }
LAB_006c9965:
  if ((*(int *)(in_ECX + 0x28) != iVar2) || (*(int *)(in_ECX + 0x2c) != iVar1)) {
    *(int *)(in_ECX + 0x28) = iVar2;
    *(int *)(in_ECX + 0x2c) = iVar1;
    FUN_0063eb10();
  }
  return;
}

