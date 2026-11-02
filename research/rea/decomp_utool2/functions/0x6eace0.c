// rea decompile_all
// name: FUN_006eace0
// address: 0x6eace0
// body: available
// range: 0x6eace0-0x6ead72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eace0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_18 = 0x114;
  uStack_14 = 0;
  uStack_10 = 0xc0;
  uStack_c = 0x46000000;
  if ((*(int *)(in_ECX + 0x70) != 0) &&
     (puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x70) + 0x3c), puVar1 != (undefined4 *)0x0)) {
    iVar3 = (**(code **)*puVar1)(puVar1,&local_18,&local_20);
    piVar2 = local_20;
    if (-1 < iVar3) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))(local_20,&local_1c);
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

