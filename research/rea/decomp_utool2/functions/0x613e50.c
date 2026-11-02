// rea decompile_all
// name: FUN_00613e50
// address: 0x613e50
// body: available
// range: 0x613e50-0x613eea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00613e50(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  
  if ((0 < param_2) && (*(char *)(in_ECX + 0x1c) == '\0')) {
    iVar8 = 0;
    cVar3 = *(char *)(*(int *)(in_ECX + 0x3c) + 2);
    while (cVar3 == '\0') {
      uVar6 = FUN_004560c0(param_1,param_2);
      puVar1 = (uint *)(in_ECX + 0x30);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      *(int *)(in_ECX + 0x34) =
           *(int *)(in_ECX + 0x34) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar2,uVar6);
      if (uVar6 == 0) {
        pcVar4 = *(char **)(in_ECX + 0x3c);
        if ((*pcVar4 != '\0') || (pcVar4[1] != '\0')) {
LAB_00613ede:
          *(undefined1 *)(in_ECX + 0x1c) = 1;
          return iVar8;
        }
        if (*(int *)(pcVar4 + 0x40) == 0) {
          iVar7 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(*(undefined4 *)(in_ECX + 0x38),0x8000)
          ;
          *(int *)(in_ECX + 0x20) = iVar7;
          if (iVar7 < 1) goto LAB_00613ede;
          iVar5 = *(int *)(in_ECX + 0x3c);
          *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(in_ECX + 0x38);
          *(int *)(iVar5 + 0x40) = iVar7;
        }
      }
      else {
        param_1 = param_1 + uVar6;
        param_2 = param_2 - uVar6;
        iVar8 = iVar8 + uVar6;
        if (param_2 < 1) {
          return iVar8;
        }
      }
      cVar3 = *(char *)(*(int *)(in_ECX + 0x3c) + 2);
    }
  }
  return 0;
}

