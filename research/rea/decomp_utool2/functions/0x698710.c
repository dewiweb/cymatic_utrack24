// rea decompile_all
// name: FUN_00698710
// address: 0x698710
// body: available
// range: 0x698710-0x69877f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00698710(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = 1;
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_24 = *(undefined4 *)(param_1 + 8);
  uStack_28 = 0x698736;
  cVar2 = FUN_006d01e0();
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 8);
    local_20 = 0x698745;
    uStack_1c = uVar1;
    iVar3 = FUN_00697ae0();
    if (iVar3 == 0) {
      local_20 = 0x698751;
      uStack_1c = uVar1;
      iVar3 = FUN_00698fa0();
      goto LAB_00698755;
    }
  }
  iVar3 = 0;
LAB_00698755:
  if (iVar3 != *(int *)(in_ECX + 0xa8)) {
    *(int *)(in_ECX + 0xa8) = iVar3;
    FUN_006e6400(&uStack_28);
    FUN_006ce9f0(1);
  }
  return;
}

