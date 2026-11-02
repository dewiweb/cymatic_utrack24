// rea decompile_all
// name: FUN_006d1980
// address: 0x6d1980
// body: available
// range: 0x6d1980-0x6d1a12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1980(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iStack_30;
  
  iStack_30 = 0x6d1990;
  iVar4 = FUN_006e9580();
  iVar1 = *(int *)(in_ECX + 0x1c);
  uVar5 = *(undefined4 *)(in_ECX + 0x18);
  pcVar2 = *(code **)(*(int *)(iVar4 + 0x40) + 8);
  if (pcVar2 == FUN_006d80f0) {
    iStack_30 = iVar1;
    FUN_006e8e70(&iStack_30,0x1008300,0);
    FUN_00684c50();
    iStack_30 = 0;
    iVar3 = *(int *)*param_1;
    uVar5 = FUN_00472d90(0,uVar5,iVar1 + -1);
    (**(code **)(iVar3 + 0x54))(uVar5);
  }
  else {
    iStack_30 = in_ECX;
    (*pcVar2)(param_1,uVar5,iVar1);
  }
  (**(code **)(*(int *)(iVar4 + 0x40) + 0xc))
            (param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
  return;
}

