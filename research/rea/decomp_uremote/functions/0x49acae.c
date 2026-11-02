// rea decompile_all
// name: FUN_0049acae
// address: 0x49acae
// body: available
// range: 0x49acae-0x49ad1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049acae(void)

{
  uint uVar1;
  int unaff_ESI;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar1 = (uint)*(byte *)(unaff_ESI + 0x111);
  local_10[0] = 0x89;
  local_10[1] = 0x50;
  local_10[2] = 0x4e;
  local_10[3] = 0x47;
  local_10[4] = 0xd;
  local_10[5] = 10;
  local_10[6] = 0x1a;
  local_10[7] = 10;
  *(undefined4 *)(unaff_ESI + 0x26c) = 0x12;
  FUN_00499c84(local_10 + uVar1,8 - uVar1);
  if (*(byte *)(unaff_ESI + 0x111) < 3) {
    *(uint *)(unaff_ESI + 0x28) = *(uint *)(unaff_ESI + 0x28) | 0x1000;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

