// rea decompile_all
// name: FUN_004e209a
// address: 0x4e209a
// body: available
// range: 0x4e209a-0x4e2125 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e209a(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  float10 fVar4;
  undefined4 local_8;
  
  if (*(int *)(unaff_ESI + 0x30) + 0x14U < param_1) {
    fVar4 = (float10)FUN_00470687(0x4010000000000000,*(double *)(unaff_ESI + 0x28) * 1.04);
    iVar1 = *(int *)(unaff_ESI + 0x14);
    *(double *)(unaff_ESI + 0x28) = (double)fVar4;
    iVar3 = 0;
    local_8 = 0;
    if (0 < *(int *)(iVar1 + 0xa0)) {
      do {
        if (iVar3 != 0) break;
        iVar2 = *(int *)(*(int *)(iVar1 + 0x98) + local_8 * 4);
        iVar3 = FUN_005b3fb0();
        iVar3 = iVar3 * *(int *)(iVar2 + 0x1c);
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(iVar1 + 0xa0));
    }
    FUN_004e166a();
    *(uint *)(unaff_ESI + 0x30) = param_1;
  }
  return 1;
}

