// rea decompile_all
// name: FUN_0054b330
// address: 0x54b330
// body: available
// range: 0x54b330-0x54b4ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0054b330(undefined4 param_1,short *param_2)

{
  int in_ECX;
  bool bVar1;
  undefined2 *local_10;
  int local_c;
  undefined2 local_8;
  
  *param_2 = *(short *)(in_ECX + 0x92) + 0x16;
  local_8 = *(undefined2 *)(in_ECX + 0x78);
  local_c = FUN_00532410(*param_2,4,*(byte *)(in_ECX + 0x74) >> 1 & 1,*(byte *)(in_ECX + 0x74) & 1);
  bVar1 = local_c != 0;
  if (bVar1) {
    local_10 = *(undefined2 **)(local_c + 0x1c);
    *local_10 = local_8;
    local_10[1] = *(undefined2 *)(in_ECX + 0x7a);
    local_10[2] = *(undefined2 *)(in_ECX + 0x7c);
    local_10[3] = *(undefined2 *)(in_ECX + 0x7e);
    local_10[4] = *(undefined2 *)(in_ECX + 0x80);
    local_10[5] = *(undefined2 *)(in_ECX + 0x82);
    local_10[6] = *(undefined2 *)(in_ECX + 0x84);
    local_10[7] = *(undefined2 *)(in_ECX + 0x86);
    local_10[8] = *(undefined2 *)(in_ECX + 0x88);
    local_10[9] = *(undefined2 *)(in_ECX + 0x8a);
    local_10 = local_10 + 10;
    FUN_0054b9f0(&local_10,in_ECX + 0x8c);
  }
  return bVar1;
}

