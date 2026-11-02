// rea decompile_all
// name: FUN_00506670
// address: 0x506670
// body: available
// range: 0x506670-0x5067a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506670(void)

{
  int in_ECX;
  char local_a0 [132];
  uint local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ce41f;
  local_10 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 4) == 7) {
    _sprintf(local_a0,"[MAC %02X:%02X:%02X:%02X:%02X:%02X F:%02x]",(uint)*(byte *)(in_ECX + 9),
             (uint)*(byte *)(in_ECX + 10),(uint)*(byte *)(in_ECX + 0xb),
             (uint)*(byte *)(in_ECX + 0xc),(uint)*(byte *)(in_ECX + 0xd),
             (uint)*(byte *)(in_ECX + 0xe),(uint)*(byte *)(in_ECX + 8),local_1c);
  }
  else {
    _sprintf(local_a0,"Unknown[%d]",*(undefined4 *)(in_ECX + 4));
  }
  FUN_00501870(local_a0);
  local_8 = 1;
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

