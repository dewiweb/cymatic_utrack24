// rea decompile_all
// name: FUN_004fcf40
// address: 0x4fcf40
// body: available
// range: 0x4fcf40-0x4fd088 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fcf40(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_006e9790(*(int *)(in_ECX + 0x18) + -0x78,0,0x32,0x14);
  FUN_006e9790(10,10,*(int *)(in_ECX + 0x18) + -0x14,0x78);
  iVar2 = (int)((float)*(int *)(in_ECX + 0x18) * 0.48);
  switch(*(undefined4 *)(in_ECX + 0x9c)) {
  case 1:
  case 3:
    (**(code **)(*(int *)(in_ECX + 0x1d00) + 0x28))(1);
    iVar1 = *(int *)(in_ECX + 0x1d1c);
    iVar3 = (*(int *)(in_ECX + 0x18) - iVar2) + -10;
    iVar4 = *(int *)(in_ECX + 0x1c) - iVar1;
    FUN_006e9790(10,0x87,iVar2,*(int *)(in_ECX + 0x1c) + -0x91);
    FUN_006e9790(iVar3,0x87,iVar2,iVar4 + -0x96);
    FUN_006e9790(iVar3,iVar4 + -10,iVar2,iVar1);
    return;
  default:
    (**(code **)(*(int *)(in_ECX + 0x1d00) + 0x28))(0);
    iVar3 = *(int *)(in_ECX + 0x1c) + -0x9b;
    iVar1 = *(int *)(in_ECX + 0x18);
    FUN_006e9790(10,0x91,iVar2,iVar3);
    FUN_006e9790((iVar1 - iVar2) + -10,0x91,iVar2,iVar3);
    return;
  }
}

