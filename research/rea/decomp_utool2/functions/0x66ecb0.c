// rea decompile_all
// name: FUN_0066ecb0
// address: 0x66ecb0
// body: available
// range: 0x66ecb0-0x66ed9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066ecb0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  short *in_EDX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1 = *in_EDX - param_1;
  iVar6 = -param_1;
  if (-1 < param_1) {
    iVar6 = param_1;
  }
  iVar4 = 0;
  if (iVar6 != 0) {
    do {
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 >> 1;
    } while (iVar6 != 0);
    if (0xb < iVar4) {
      *(undefined4 *)(*in_ECX + 0x14) = 6;
      (**(code **)*in_ECX)();
    }
  }
  piVar3 = &DAT_00c02144;
  piVar1 = (int *)(param_2 + iVar4 * 4);
  *piVar1 = *piVar1 + 1;
  iVar6 = 0;
  do {
    iVar4 = (int)in_EDX[*piVar3];
    if (iVar4 == 0) {
      iVar6 = iVar6 + 1;
    }
    else {
      if (0xf < iVar6) {
        iVar2 = (iVar6 - 0x10U >> 4) + 1;
        iVar6 = iVar6 + iVar2 * -0x10;
        param_3[0xf0] = param_3[0xf0] + iVar2;
      }
      iVar5 = 1;
      iVar2 = -iVar4;
      if (-1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar2 = iVar2 >> 1;
      if (iVar2 != 0) {
        do {
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 >> 1;
        } while (iVar2 != 0);
        if (10 < iVar5) {
          *(undefined4 *)(*in_ECX + 0x14) = 6;
          (**(code **)*in_ECX)(in_ECX);
        }
      }
      param_3[iVar6 * 0x10 + iVar5] = param_3[iVar6 * 0x10 + iVar5] + 1;
      iVar6 = 0;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0xc02240);
  if (0 < iVar6) {
    *param_3 = *param_3 + 1;
  }
  return;
}

