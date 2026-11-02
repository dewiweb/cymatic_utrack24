// rea decompile_all
// name: FUN_0052ac00
// address: 0x52ac00
// body: available
// range: 0x52ac00-0x52ac84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052ac00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
    FUN_00699dd0(*(undefined4 *)(in_ECX + 0x78),0,1,0);
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x78);
  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x74) + 0x53c);
  if (0 < iVar2) {
    piVar4 = *(int **)(*(int *)(in_ECX + 0x74) + 0x534);
    do {
      if (iVar1 < *piVar4) {
        if ((uVar3 & 1) != 0) {
          FUN_006df550(iVar1);
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < iVar2);
  }
  FUN_00699dd0(iVar1,0,0,0);
  return;
}

