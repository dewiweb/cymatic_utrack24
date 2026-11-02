// rea decompile_all
// name: FUN_006563b0
// address: 0x6563b0
// body: available
// range: 0x6563b0-0x656421 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006563b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  char *in_EDX;
  
  iVar1 = 0;
  if (in_ECX != 0) {
    if (*in_EDX == '#') {
      iVar1 = 1;
      do {
        if (in_EDX[iVar1] == ' ') break;
        if (in_EDX[iVar1 + 1] == ' ') {
          iVar1 = iVar1 + 1;
          break;
        }
        iVar1 = iVar1 + 2;
      } while (iVar1 < 0xf);
    }
    if (*(code **)(in_ECX + 4) != (code *)0x0) {
      (**(code **)(in_ECX + 4))();
      return;
    }
  }
  uVar2 = ___acrt_iob_func(2,"libpng warning: %s",in_EDX + iVar1);
  FUN_004364c0(uVar2);
  uVar2 = ___acrt_iob_func(2,&DAT_00c030c8);
  FUN_004364c0(uVar2);
  return;
}

