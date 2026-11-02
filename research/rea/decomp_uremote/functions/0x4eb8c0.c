// rea decompile_all
// name: FUN_004eb8c0
// address: 0x4eb8c0
// body: available
// range: 0x4eb8c0-0x4eb932 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb8c0(void **param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  void *pvVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  ppvVar2 = (void **)(in_ECX + 0xd0);
  if (ppvVar2 != param_1) {
    FUN_004f6772(&local_10);
    if (ppvVar2 != &local_10) {
      pvVar3 = *ppvVar2;
      *ppvVar2 = local_10;
      local_10 = pvVar3;
    }
    puVar1 = (undefined4 *)(in_ECX + 0xd4);
    if (puVar1 != &local_c) {
      uVar4 = *puVar1;
      *puVar1 = local_c;
      local_c = uVar4;
    }
    puVar1 = (undefined4 *)(in_ECX + 0xd8);
    if (puVar1 != &local_8) {
      uVar4 = *puVar1;
      *puVar1 = local_8;
      local_8 = uVar4;
    }
    _free(local_10);
  }
  FUN_004c1613(in_ECX + -0x70);
  return;
}

