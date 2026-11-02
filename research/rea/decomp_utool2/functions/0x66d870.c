// rea decompile_all
// name: FUN_0066d870
// address: 0x66d870
// body: available
// range: 0x66d870-0x66d95d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066d870(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar3 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < param_1[0xf]) {
    do {
      iVar3 = FUN_0066e2d0();
      iVar4 = iVar4 + 1;
      iVar3 = local_8 + iVar3;
      local_8 = iVar3;
    } while (iVar4 < param_1[0xf]);
  }
  if (((*(char *)((int)param_1 + 0xb1) == '\0') && ((char)param_1[0x35] == '\0')) &&
     (param_1[0xe] == 8)) {
    iVar4 = param_1[0xf];
    bVar1 = true;
    if (0 < iVar4) {
      piVar2 = (int *)(param_1[0x11] + 0x18);
      do {
        if ((1 < piVar2[-1]) || (1 < *piVar2)) {
          bVar1 = false;
        }
        piVar2 = piVar2 + 0x15;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((iVar3 != 0) && (bVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x4b;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  if (*(char *)((int)param_1 + 0xb1) == '\0') {
    if ((char)param_1[0x35] == '\0') {
      FUN_0066dfb0();
      return;
    }
    FUN_0066dfb0();
    return;
  }
  FUN_0066dfb0();
  return;
}

