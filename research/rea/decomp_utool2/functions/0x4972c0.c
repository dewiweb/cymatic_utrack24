// rea decompile_all
// name: FUN_004972c0
// address: 0x4972c0
// body: available
// range: 0x4972c0-0x4973ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004972c0(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = FUN_006e9580();
  if (*(int *)(in_ECX + 0xb0) != 0) {
    local_18 = 2;
    uStack_14 = 2;
    uStack_10 = 2;
    uStack_c = 2;
    (**(code **)(*(int *)(iVar1 + 0x30) + 8))
              (param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c),&local_18);
  }
  if (*(int *)(in_ECX + 0xd4) == 0) {
    if (*(char *)(in_ECX + 0xc5) == '\0') {
      return;
    }
    if (*(char *)(in_ECX + 0xc5) == '\0') goto LAB_00497341;
  }
  if (0 < *(int *)(in_ECX + 0xd4)) {
    (**(code **)(*(int *)(iVar1 + 0x20) + 0x14))(param_1,*(undefined4 *)(in_ECX + 0x18),0x18,1);
  }
LAB_00497341:
  if (((*(int *)(in_ECX + 0xd4) != 0) || (*(char *)(in_ECX + 0xc5) != '\0')) &&
     (*(int *)(in_ECX + 0xd4) < *(int *)(in_ECX + 0xd0) - *(int *)(in_ECX + 0xc0))) {
    iVar1 = *(int *)(in_ECX + 0x1c);
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 8))(0,iVar1 + -0x18);
    (**(code **)(*(int *)(unaff_ESI + 0x20) + 0x14))(param_1,*(undefined4 *)(in_ECX + 0x18),0x18,0);
  }
  return;
}

