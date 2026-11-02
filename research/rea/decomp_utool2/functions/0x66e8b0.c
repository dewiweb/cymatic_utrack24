// rea decompile_all
// name: FUN_0066e8b0
// address: 0x66e8b0
// body: available
// range: 0x66e8b0-0x66e9a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066e8b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_c [4];
  int local_8;
  
  iVar2 = param_1;
  iVar6 = 0;
  param_1 = 0;
  local_c[0] = '\0';
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  local_8 = *(int *)(iVar2 + 0x15c);
  if (0 < *(int *)(iVar2 + 0xe4)) {
    piVar3 = (int *)(iVar2 + 0xe8);
    do {
      iVar5 = *(int *)(*piVar3 + 0x14);
      iVar1 = *(int *)(*piVar3 + 0x18);
      if (*(char *)((int)&param_1 + iVar5) == '\0') {
        if (*(int *)(iVar2 + 0x58 + iVar5 * 4) == 0) {
          iVar4 = (*(code *)**(undefined4 **)(iVar2 + 4))(iVar2,0,0x112);
          *(undefined1 *)(iVar4 + 0x111) = 0;
          *(int *)(iVar2 + 0x58 + iVar5 * 4) = iVar4;
        }
        FUN_0066e9b0(*(undefined4 *)(local_8 + 0x4c + iVar5 * 4));
        *(undefined1 *)((int)&param_1 + iVar5) = 1;
      }
      if (local_c[iVar1] == '\0') {
        if (*(int *)(iVar2 + 0x68 + iVar1 * 4) == 0) {
          iVar5 = (*(code *)**(undefined4 **)(iVar2 + 4))(iVar2,0,0x112);
          *(undefined1 *)(iVar5 + 0x111) = 0;
          *(int *)(iVar2 + 0x68 + iVar1 * 4) = iVar5;
        }
        FUN_0066e9b0(*(undefined4 *)(local_8 + 0x5c + iVar1 * 4));
        local_c[iVar1] = '\x01';
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < *(int *)(iVar2 + 0xe4));
  }
  return;
}

