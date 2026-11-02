// rea decompile_all
// name: FUN_006b2a30
// address: 0x6b2a30
// body: available
// range: 0x6b2a30-0x6b2ae0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2a30(int *param_1,char param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_2 == '\0') {
    FUN_006b43a0(in_ECX);
  }
  local_c = *(undefined4 *)(in_ECX + 0x18);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    local_8 = 0;
    do {
      local_20 = 0;
      local_14 = *(int *)(local_8 + *param_1);
      local_18 = local_c;
      local_1c = iVar2;
      local_10 = local_14;
      if (param_2 == '\0') {
        FUN_006e9790(0,iVar2,local_c,local_14);
      }
      else {
        FUN_006e6060(*(undefined4 *)(*(int *)(in_ECX + 0x74) + iVar1 * 4),&local_20,0x96,0,0,
                     0x3ff00000,0,0x3ff00000);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + local_10;
      local_8 = local_8 + 0xc;
    } while (iVar1 < *(int *)(in_ECX + 0x7c));
  }
  return;
}

