// rea decompile_all
// name: FUN_0050ffd0
// address: 0x50ffd0
// body: available
// range: 0x50ffd0-0x5100c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ffd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float local_8;
  
  if (*(int *)(in_ECX + 0x80) != 0) {
    iVar1 = *(int *)(in_ECX + 0x88);
    local_8 = 0.0;
    iVar2 = *(int *)(in_ECX + 0x84);
    uVar4 = 0;
    fVar5 = (float)*(int *)(in_ECX + 0x18) / (float)iVar1;
    if (0 < *(int *)(in_ECX + 0x80)) {
      do {
        if (((int)uVar4 < iVar2) || (iVar1 + -1 + iVar2 < (int)uVar4)) {
          if (uVar4 < *(uint *)(in_ECX + 0x80)) {
            piVar3 = *(int **)(*(int *)(in_ECX + 0x78) + uVar4 * 4);
          }
          else {
            piVar3 = (int *)0x0;
          }
          (**(code **)(*piVar3 + 0x28))(0);
        }
        else {
          if (uVar4 < *(uint *)(in_ECX + 0x80)) {
            piVar3 = *(int **)(*(int *)(in_ECX + 0x78) + uVar4 * 4);
          }
          else {
            piVar3 = (int *)0x0;
          }
          (**(code **)(*piVar3 + 0x28))(1);
          FUN_006e9790((int)(local_8 + 2.0),0,(int)(fVar5 - 4.0),*(undefined4 *)(in_ECX + 0x1c));
          local_8 = fVar5 + local_8;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(in_ECX + 0x80));
    }
  }
  return;
}

