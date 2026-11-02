// rea decompile_all
// name: FUN_0064c610
// address: 0x64c610
// body: available
// range: 0x64c610-0x64c6ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64c674 to 0x6563b0 FUN_006563b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x64c6aa to 0x6563b0 FUN_006563b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064c610(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  int in_EDX;
  
  if ((in_ECX != 0) && (in_EDX != 0)) {
    if ((*(ushort *)(in_EDX + 0x14) == 0) || (0x100 < *(ushort *)(in_EDX + 0x14))) {
      FUN_006563b0();
      return;
    }
    FUN_00659160(8,0);
    puVar2 = (undefined4 *)FUN_004c554b(0x200);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_006563b0();
      puVar2 = (undefined4 *)0x0;
    }
    *(undefined4 **)(in_EDX + 0xcc) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_006563b0();
      return;
    }
    uVar1 = *(ushort *)(in_EDX + 0x14);
    *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 8;
    if (uVar1 != 0) {
      for (uVar3 = (uint)(uVar1 >> 1); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = (uint)((uVar1 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)puVar2 = *(undefined2 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 2);
        puVar2 = (undefined4 *)((int)puVar2 + 2);
      }
    }
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x40;
  }
  return;
}

