// rea decompile_all
// name: FUN_00440f1e
// address: 0x440f1e
// body: available
// range: 0x440f1e-0x440f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440f1e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  iVar1 = FUN_004c4910();
  if (iVar1 == 0) {
    uVar2 = FUN_00467ec4();
    *(undefined4 *)(in_ECX + 0xa4) = uVar2;
    puVar3 = (undefined4 *)FUN_004c6d53();
    uVar2 = *puVar3;
    *(undefined4 *)(in_ECX + 0x94) = uVar2;
    *(undefined4 *)(in_ECX + 0x98) = puVar3[1];
    *(undefined4 *)(in_ECX + 0x9c) = uVar2;
    *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(in_ECX + 0x98);
    FUN_0047479c();
  }
  return;
}

