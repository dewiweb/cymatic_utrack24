// rea decompile_all
// name: FUN_0040fbad
// address: 0x40fbad
// body: available
// range: 0x40fbad-0x40fc3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040fbad(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_ESI;
  int local_8;
  
  uVar1 = *(undefined4 *)unaff_ESI[1];
  iVar4 = FUN_00411912(0xc,&local_8);
  if (local_8 == 0) {
    iVar2 = *unaff_ESI;
    unaff_ESI[3] = iVar2;
    unaff_ESI[4] = *(int *)(iVar2 + 0x24);
    if ((*(int *)(iVar2 + 0x24) == 0x6f75746c) &&
       (pcVar3 = *(code **)(*(int *)(iVar2 + 0x38) + 4), pcVar3 != (code *)0x0)) {
      local_8 = (*pcVar3)(uVar1,unaff_ESI + 0xd);
      if (local_8 != 0) {
        FUN_00411a5c(iVar4);
        return local_8;
      }
      unaff_ESI[0xe] = *(int *)(*(int *)(iVar2 + 0x38) + 0x10);
      unaff_ESI[0xf] = *(int *)(iVar2 + 0x28);
      local_8 = 0;
    }
    *(int **)(iVar4 + 8) = unaff_ESI;
    FUN_00411b09();
    FUN_0040fb95();
  }
  return local_8;
}

