// rea decompile_all
// name: FUN_006e0750
// address: 0x6e0750
// body: available
// range: 0x6e0750-0x6e086f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e0750(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x9c) != 0) {
    iVar1 = *param_1;
    if ((iVar1 == 0x10026) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690f80(0xffffffff);
      return 1;
    }
    if ((iVar1 == 0x10028) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690f80(1);
      return 1;
    }
    if ((iVar1 == 0x10024) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690f80(0xc0000001);
      return 1;
    }
    if ((iVar1 == 0x10023) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690f80(0x3fffffff);
      return 1;
    }
    if ((iVar1 == 0x10021) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690cf0(0xffffffff);
      return 1;
    }
    if ((iVar1 == 0x10022) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690cf0(1);
      return 1;
    }
    if ((iVar1 == 0xd) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      uVar2 = FUN_00690f00();
      return uVar2;
    }
    if ((iVar1 == 0x10025) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690e60();
      return 1;
    }
    if ((iVar1 == 0x10027) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      FUN_00690dc0();
      return 1;
    }
  }
  return 0;
}

