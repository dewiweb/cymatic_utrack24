// rea decompile_all
// name: FUN_0066b300
// address: 0x66b300
// body: available
// range: 0x66b300-0x66b3ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066b300(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x15c);
  FUN_0066bbb0();
  iVar2 = *(int *)(iVar3 + 300);
  param_1 = 0;
  local_8 = 0;
  if (0 < *(int *)(iVar3 + 0xe4)) {
    piVar4 = (int *)(iVar3 + 0xe8);
    do {
      if (iVar2 == 0) {
        if (*(int *)(iVar3 + 0x134) == 0) {
          iVar7 = *(int *)(*piVar4 + 0x14);
          goto LAB_0066b35c;
        }
      }
      else {
        iVar7 = *(int *)(*piVar4 + 0x18);
LAB_0066b35c:
        if (*(char *)((int)&param_1 + iVar7) == '\0') {
          iVar6 = iVar3 + 0x58;
          if (iVar2 != 0) {
            iVar6 = iVar3 + 0x68;
          }
          if (*(int *)(iVar6 + iVar7 * 4) == 0) {
            iVar5 = (*(code *)**(undefined4 **)(iVar3 + 4))(iVar3,0,0x112);
            *(undefined1 *)(iVar5 + 0x111) = 0;
            *(int *)(iVar6 + iVar7 * 4) = iVar5;
          }
          FUN_0066e9b0(*(undefined4 *)(iVar1 + 0x5c + iVar7 * 4));
          *(undefined1 *)((int)&param_1 + iVar7) = 1;
        }
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(int *)(iVar3 + 0xe4));
  }
  return;
}

