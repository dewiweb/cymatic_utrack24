// rea decompile_all
// name: FUN_00699c50
// address: 0x699c50
// body: available
// range: 0x699c50-0x699d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00699c50(int param_1,uint param_2,char param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  
  cVar2 = *(char *)(in_ECX + 0x9c);
  if (cVar2 != '\0') {
    if (((param_2 >> 1 & 1) != 0) || (*(char *)(in_ECX + 0x9d) != '\0')) {
      FUN_006e39e0(param_1);
      return;
    }
    if (((cVar2 != '\0') && ((param_2 & 1) != 0)) && (iVar1 = *(int *)(in_ECX + 0x98), -1 < iVar1))
    {
      FUN_00699d20(iVar1,param_1,iVar1);
      return;
    }
  }
  if ((param_2 >> 5 & 1) != 0) {
    uVar3 = 0;
    if (0 < *(int *)(in_ECX + 0xa8)) {
      piVar5 = *(int **)(in_ECX + 0xa0);
      do {
        if (param_1 < *piVar5) {
          if ((uVar3 & 1) != 0) {
            return;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 1;
      } while ((int)uVar3 < *(int *)(in_ECX + 0xa8));
    }
  }
  if (((cVar2 == '\0') || (param_3 != '\0')) || (cVar2 = FUN_006e38e0(param_1), cVar2 == '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_00699dd0(param_1,0,uVar4,1);
  return;
}

