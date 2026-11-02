// rea decompile_all
// name: FUN_004289e9
// address: 0x4289e9
// body: available
// range: 0x4289e9-0x428a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004289e9(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint local_1c;
  uint local_18;
  char local_10 [4];
  int local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  uVar1 = *(uint *)(in_ECX + 0x2dc);
  local_1c = 0;
  local_18 = 0;
  if (uVar1 != 0) {
    do {
      FUN_0042660a();
      if ((local_c != 0) && (local_18 = local_18 + 1, local_1c = uVar3, 1 < local_18))
      goto LAB_00428a72;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    if ((local_18 == 1) && (local_1c != 0)) {
      iVar2 = FUN_0040fa57();
      if ((iVar2 == 0) && (local_10[0] == '.')) {
        _strncmp(local_10,".notdef",8);
      }
    }
  }
LAB_00428a72:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

