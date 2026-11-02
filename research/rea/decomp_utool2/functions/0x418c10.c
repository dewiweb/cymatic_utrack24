// rea decompile_all
// name: FUN_00418c10
// address: 0x418c10
// body: available
// range: 0x418c10-0x418ca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418c10(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = DAT_00c8a77c;
  uVar3 = FUN_0045cfe0(*param_2);
  piVar6 = *(int **)(DAT_00c8a774 + (uVar3 % uVar2) * 4);
  if (piVar6 != (int *)0x0) {
    iVar1 = *param_2;
    do {
      if (*piVar6 == iVar1) {
LAB_00418c77:
        *param_1 = piVar6[1];
        return;
      }
      while( true ) {
        iVar4 = FUN_00443260();
        iVar5 = FUN_00443260();
        if ((iVar4 - iVar5 != 0) && ((iVar4 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar4 == 0) goto LAB_00418c77;
      }
      piVar6 = (int *)piVar6[2];
    } while (piVar6 != (int *)0x0);
  }
  *param_1 = 0;
  return;
}

