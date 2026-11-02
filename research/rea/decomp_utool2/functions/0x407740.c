// rea decompile_all
// name: FUN_00407740
// address: 0x407740
// body: available
// range: 0x407740-0x4077d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407740(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = in_ECX;
  if (0 < (int)in_ECX[9]) {
    do {
      (**(code **)(*(int *)puVar2[1] + 0x14))();
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)in_ECX[9]);
  }
  piVar1 = (int *)in_ECX[10];
  if (piVar1 != (int *)0x0) {
    if ((undefined **)*piVar1 != r8b::CDSPFracInterpolator<24,673>::vftable) {
                    /* WARNING: Could not recover jumptable at 0x004077d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((undefined **)*piVar1)[5])();
      return;
    }
    piVar1[0x408] = 0;
    piVar1[0x409] = 0;
    piVar1[0x40a] = 0xf5;
    _memset(piVar1 + 0x1ec,0,0x58);
    piVar1[0x40b] = 0;
    piVar1[0x40c] = 0;
    *(undefined8 *)(piVar1 + 0x40e) = *(undefined8 *)(piVar1 + 0x406);
    *(undefined8 *)(piVar1 + 0x410) = *(undefined8 *)(piVar1 + 0x406);
  }
  return;
}

