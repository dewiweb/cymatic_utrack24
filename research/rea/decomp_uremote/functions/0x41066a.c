// rea decompile_all
// name: FUN_0041066a
// address: 0x41066a
// body: available
// range: 0x41066a-0x4106be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041066a(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  if ((in_ECX == 0) || (in_EAX == (undefined4 *)0x0)) {
    uVar1 = 6;
  }
  else {
    if ((*(byte *)(in_EAX + 4) & 1) != 0) {
      FUN_00411a5c(in_EAX[1]);
      in_EAX[1] = 0;
      FUN_00411a5c(in_EAX[2]);
      in_EAX[2] = 0;
      FUN_00411a5c(in_EAX[3]);
      in_EAX[3] = 0;
    }
    puVar3 = &DAT_008faecc;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_EAX = *puVar3;
      puVar3 = puVar3 + 1;
      in_EAX = in_EAX + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

