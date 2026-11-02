// rea decompile_all
// name: FUN_0066e170
// address: 0x66e170
// body: available
// range: 0x66e170-0x66e2ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066e170(char param_1)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  char cVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
  if (param_1 == '\0') {
    pbVar7 = (byte *)in_ECX[in_EDX + 0x16];
  }
  else {
    pbVar7 = (byte *)in_ECX[in_EDX + 0x1a];
    in_EDX = in_EDX + 0x10;
  }
  if (pbVar7 == (byte *)0x0) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x32;
    *(int *)(*in_ECX + 0x18) = in_EDX;
    (**(code **)*in_ECX)();
  }
  if (pbVar7[0x111] == 0) {
    FUN_0066e510();
    iVar6 = 0;
    iVar5 = 0;
    iVar8 = 8;
    pbVar3 = pbVar7;
    do {
      iVar6 = iVar6 + (uint)pbVar3[1];
      iVar5 = iVar5 + (uint)pbVar3[2];
      iVar8 = iVar8 + -1;
      pbVar3 = pbVar3 + 2;
    } while (iVar8 != 0);
    FUN_0066e4a0();
    piVar2 = (int *)in_ECX[6];
    *(char *)*piVar2 = (char)in_EDX;
    *piVar2 = *piVar2 + 1;
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (cVar4 = (*(code *)piVar2[3])(), cVar4 == '\0')) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
    iVar8 = 1;
    do {
      piVar2 = (int *)in_ECX[6];
      *(byte *)*piVar2 = pbVar7[iVar8];
      *piVar2 = *piVar2 + 1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (cVar4 = (*(code *)piVar2[3])(), cVar4 == '\0')) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x18;
        (**(code **)*in_ECX)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x11);
    iVar8 = 0;
    if (0 < iVar6 + iVar5) {
      do {
        piVar2 = (int *)in_ECX[6];
        *(byte *)*piVar2 = pbVar7[iVar8 + 0x11];
        *piVar2 = *piVar2 + 1;
        piVar1 = piVar2 + 1;
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (cVar4 = (*(code *)piVar2[3])(), cVar4 == '\0')) {
          *(undefined4 *)(*in_ECX + 0x14) = 0x18;
          (**(code **)*in_ECX)();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6 + iVar5);
    }
    pbVar7[0x111] = 1;
  }
  return;
}

