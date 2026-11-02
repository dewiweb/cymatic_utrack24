// rea decompile_all
// name: FUN_00662560
// address: 0x662560
// body: available
// range: 0x662560-0x662644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662560(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x114) <= *(int *)(iVar1 + 0x5c)) {
    iVar2 = *(int *)(param_1 + 0xc4);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      piVar4 = (int *)(iVar1 + 100);
      do {
        (*(code *)piVar4[-0xc])
                  (param_1,iVar2,*(int *)(param_2 + iVar5 * 4) + *param_3 * *piVar4 * 4,
                   piVar4 + -0x16);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x54;
        piVar4 = piVar4 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x24));
    }
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  uVar3 = *(int *)(param_1 + 0x114) - *(int *)(iVar1 + 0x5c);
  if (*(uint *)(iVar1 + 0x60) < uVar3) {
    uVar3 = *(uint *)(iVar1 + 0x60);
  }
  uVar6 = param_7 - *param_6;
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1a4) + 4))
            (param_1,iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x5c),param_5 + *param_6 * 4,uVar6);
  *param_6 = *param_6 + uVar6;
  *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) - uVar6;
  *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + uVar6;
  if (*(int *)(param_1 + 0x114) <= *(int *)(iVar1 + 0x5c)) {
    *param_3 = *param_3 + 1;
  }
  return;
}

