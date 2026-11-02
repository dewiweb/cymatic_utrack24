// rea decompile_all
// name: FUN_005c60f0
// address: 0x5c60f0
// body: available
// range: 0x5c60f0-0x5c6165 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c60f0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  piVar4 = (int *)(param_1[2] + (int)piVar5);
  for (; (piVar5 < piVar4 && (*piVar5 < 0));
      piVar5 = (int *)((int)piVar5 + (uint)(ushort)((short)piVar5[1] + 6))) {
  }
  while( true ) {
    if ((int *)(*param_1 + param_1[2]) <= piVar5) {
      return;
    }
    iVar3 = *piVar5;
    iVar1 = (int)piVar5 + 6;
    puVar2 = (ushort *)(piVar5 + 1);
    piVar5 = (int *)((int)piVar5 + *puVar2 + 6);
    if ((param_3 <= iVar3) && (-1 < param_3)) break;
    FUN_005c6170(iVar1,(uint)*puVar2,iVar3);
  }
  return;
}

