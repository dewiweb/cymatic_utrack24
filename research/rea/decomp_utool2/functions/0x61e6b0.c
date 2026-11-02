// rea decompile_all
// name: FUN_0061e6b0
// address: 0x61e6b0
// body: available
// range: 0x61e6b0-0x61e748 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061e6b0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  int local_44;
  undefined4 local_40;
  char *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d070;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)*in_ECX != '\0') {
    FUN_0062aec0(in_ECX,0x4000);
    local_8 = 0;
    if (*local_34 == '\0') {
      uVar3 = *in_EDX;
      uVar2 = FUN_0045d1e0(uVar3,uVar1);
      (**(code **)(local_44 + 0x10))(uVar3,uVar2);
      uVar3 = FUN_0045d1e0(local_40);
      (**(code **)(local_44 + 0x10))(local_40,uVar3);
    }
    FUN_0062ade0();
  }
  ExceptionList = local_10;
  return;
}

