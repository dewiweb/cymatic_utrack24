// rea decompile_all
// name: FUN_00666be0
// address: 0x666be0
// body: available
// range: 0x666be0-0x666dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00666be0(void)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  if ((0xffdc < in_ECX[8]) || (0xffdc < in_ECX[7])) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x29;
    *(undefined4 *)(*in_ECX + 0x18) = 0xffdc;
    (**(code **)*in_ECX)();
  }
  if (in_ECX[0x30] != 8) {
    *(undefined4 *)(*in_ECX + 0x14) = 0xf;
    *(int *)(*in_ECX + 0x18) = in_ECX[0x30];
    (**(code **)*in_ECX)();
  }
  if (10 < in_ECX[9]) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x1a;
    *(int *)(*in_ECX + 0x18) = in_ECX[9];
    *(undefined4 *)(*in_ECX + 0x1c) = 10;
    (**(code **)*in_ECX)();
  }
  iVar2 = 0;
  in_ECX[0x44] = 1;
  in_ECX[0x45] = 1;
  if (0 < in_ECX[9]) {
    piVar3 = (int *)(in_ECX[0x31] + 0xc);
    do {
      if ((((piVar3[-1] < 1) || (4 < piVar3[-1])) || (*piVar3 < 1)) || (4 < *piVar3)) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x12;
        (**(code **)*in_ECX)();
      }
      iVar1 = piVar3[-1];
      if (piVar3[-1] < in_ECX[0x44]) {
        iVar1 = in_ECX[0x44];
      }
      in_ECX[0x44] = iVar1;
      iVar1 = *piVar3;
      if (*piVar3 < in_ECX[0x45]) {
        iVar1 = in_ECX[0x45];
      }
      iVar2 = iVar2 + 1;
      in_ECX[0x45] = iVar1;
      piVar3 = piVar3 + 0x15;
    } while (iVar2 < in_ECX[9]);
  }
  in_ECX[0x46] = 8;
  local_c = 0;
  if (0 < in_ECX[9]) {
    piVar3 = (int *)(in_ECX[0x31] + 0x1c);
    do {
      piVar3[2] = 8;
      *piVar3 = (in_ECX[7] * piVar3[-5] + -1 + in_ECX[0x44] * 8) / (in_ECX[0x44] * 8);
      piVar3[1] = (in_ECX[8] * piVar3[-4] + -1 + in_ECX[0x45] * 8) / (in_ECX[0x45] * 8);
      piVar3[3] = (in_ECX[7] * piVar3[-5] + -1 + in_ECX[0x44]) / in_ECX[0x44];
      iVar2 = in_ECX[8];
      iVar1 = in_ECX[0x45];
      *(undefined1 *)(piVar3 + 5) = 1;
      piVar3[0xc] = 0;
      piVar3[4] = (iVar2 * piVar3[-4] + -1 + iVar1) / iVar1;
      piVar3 = piVar3 + 0x15;
      local_c = local_c + 1;
    } while (local_c < in_ECX[9]);
  }
  in_ECX[0x47] = (in_ECX[8] + -1 + in_ECX[0x45] * 8) / (in_ECX[0x45] * 8);
  if ((in_ECX[9] <= in_ECX[0x49]) && ((char)in_ECX[0x32] == '\0')) {
    *(undefined1 *)(in_ECX[100] + 0x10) = 0;
    return;
  }
  *(undefined1 *)(in_ECX[100] + 0x10) = 1;
  return;
}

