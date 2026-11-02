// rea decompile_all
// name: FUN_0053bc20
// address: 0x53bc20
// body: available
// range: 0x53bc20-0x53bcd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0053bc20(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined8 local_10;
  
  iVar4 = 0;
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    local_1c = 0;
    local_20 = 0;
    do {
      piVar3 = (int *)FUN_0053f050(&local_18);
      local_14 = *(uint *)(*piVar3 + 0x14);
      uVar2 = *(uint *)(*piVar3 + 0x10);
      if (local_18 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_18 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_18)(1);
        }
      }
      if ((local_1c <= local_14) && ((local_1c < local_14 || (local_20 <= uVar2)))) {
        local_20 = uVar2;
        local_1c = local_14;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x5c));
    return CONCAT44(local_1c,local_20);
  }
  return 0;
}

