// rea decompile_all
// name: FUN_0066cee0
// address: 0x66cee0
// body: available
// range: 0x66cee0-0x66cfd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066cee0(void)

{
  int *in_ECX;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (in_ECX[0x2b] != 0) {
    iVar4 = 0;
    piVar5 = (int *)(in_ECX[0x2b] + *(int *)(in_ECX[0x4f] + 0x1c) * 0x24);
    in_ECX[0x39] = *piVar5;
    if (0 < *piVar5) {
      piVar1 = in_ECX + 0x3a;
      piVar2 = piVar5;
      do {
        piVar2 = piVar2 + 1;
        iVar4 = iVar4 + 1;
        *piVar1 = *piVar2 * 0x54 + in_ECX[0x11];
        piVar1 = piVar1 + 1;
      } while (iVar4 < *piVar5);
    }
    in_ECX[0x4b] = piVar5[5];
    in_ECX[0x4c] = piVar5[6];
    in_ECX[0x4d] = piVar5[7];
    in_ECX[0x4e] = piVar5[8];
    return;
  }
  if (4 < in_ECX[0xf]) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x1a;
    *(int *)(*in_ECX + 0x18) = in_ECX[0xf];
    *(undefined4 *)(*in_ECX + 0x1c) = 4;
    (**(code **)*in_ECX)();
  }
  iVar4 = 0;
  in_ECX[0x39] = in_ECX[0xf];
  if (0 < in_ECX[0xf]) {
    iVar3 = 0;
    piVar5 = in_ECX + 0x3a;
    do {
      iVar4 = iVar4 + 1;
      *piVar5 = in_ECX[0x11] + iVar3;
      iVar3 = iVar3 + 0x54;
      piVar5 = piVar5 + 1;
    } while (iVar4 < in_ECX[0xf]);
  }
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0x3f;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  return;
}

