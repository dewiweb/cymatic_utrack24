// rea decompile_all
// name: FUN_00442d1f
// address: 0x442d1f
// body: available
// range: 0x442d1f-0x442e02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442d1f(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int local_18;
  
  iVar4 = 0;
  if (*(int *)(in_ECX + 0x88) != 0) {
    iVar2 = FUN_0044bfc5();
    iVar2 = *(int *)(iVar2 + 4);
    iVar1 = *(int *)(in_ECX + 0x78);
    FUN_004c0902(*(undefined4 *)(in_ECX + 0x78),(float)*(int *)(iVar1 + 0x90),
                 (float)(*(int *)(iVar1 + 0x9c) + *(int *)(iVar1 + 0x94)));
    FUN_0044bfc5();
    uVar3 = FUN_005b3fb0();
    local_18 = FUN_005b3fb0();
    if (0 < *(int *)(in_ECX + 0x88)) {
      do {
        FUN_004c09cc(uVar3,local_18,iVar2);
        local_18 = local_18 + iVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x88));
    }
  }
  return;
}

