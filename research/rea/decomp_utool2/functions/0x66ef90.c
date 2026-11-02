// rea decompile_all
// name: FUN_0066ef90
// address: 0x66ef90
// body: available
// range: 0x66ef90-0x66f047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0066ef90(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  char in_DL;
  int *piVar4;
  
  uVar1 = FUN_0066f220(7);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)*in_ECX = 0xff;
  *in_ECX = *in_ECX + 1;
  piVar4 = in_ECX + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    piVar4 = *(int **)(in_ECX[8] + 0x18);
    uVar1 = (*(code *)piVar4[3])(in_ECX[8]);
    if ((char)uVar1 == '\0') goto LAB_0066f03d;
    *in_ECX = *piVar4;
    in_ECX[1] = piVar4[1];
  }
  *(char *)*in_ECX = in_DL + -0x30;
  *in_ECX = *in_ECX + 1;
  piVar4 = in_ECX + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    piVar4 = *(int **)(in_ECX[8] + 0x18);
    uVar1 = (*(code *)piVar4[3])(in_ECX[8]);
    if ((char)uVar1 == '\0') {
LAB_0066f03d:
      return uVar1 & 0xffffff00;
    }
    *in_ECX = *piVar4;
    in_ECX[1] = piVar4[1];
  }
  iVar2 = in_ECX[8];
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0xe4)) {
    piVar4 = in_ECX + 4;
    do {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
      iVar2 = in_ECX[8];
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0xe4));
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

