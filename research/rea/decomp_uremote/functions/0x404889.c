// rea decompile_all
// name: FUN_00404889
// address: 0x404889
// body: available
// range: 0x404889-0x404956 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404889(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int in_EDX;
  int iVar8;
  int *piVar9;
  
  iVar6 = param_1 * 0x1c + 0x2c + in_EDX;
  uVar1 = *(uint *)(iVar6 + 0x14);
  uVar5 = *(int *)(iVar6 + 0xc) * 0x30 + uVar1;
  if (((param_1 == 0) && ((*(byte *)(in_EDX + 0x68) & 1) != 0)) ||
     ((param_1 == 1 && ((*(byte *)(in_EDX + 0x68) & 2) != 0)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (uVar1 < uVar5) {
    piVar9 = (int *)(uVar1 + 0x28);
    iVar6 = ((uVar5 - uVar1) - 1) / 0x30 + 1;
    do {
      iVar8 = *piVar9;
      if (bVar4) {
        do {
          puVar7 = *(ushort **)(iVar8 + 0x28);
          while( true ) {
            iVar2 = piVar9[-8];
            if (param_1 == 0) {
              *puVar7 = *puVar7 | 0x40;
              *(int *)(puVar7 + 8) = iVar2;
            }
            else {
              *(int *)(puVar7 + 10) = iVar2;
              *puVar7 = *puVar7 | 0x80;
            }
            if (puVar7 == *(ushort **)(iVar8 + 0x2c)) break;
            puVar7 = *(ushort **)(puVar7 + 0x10);
          }
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *piVar9);
      }
      else {
        iVar2 = piVar9[-8];
        iVar3 = piVar9[-9];
        do {
          puVar7 = *(ushort **)(iVar8 + 0x28);
          while( true ) {
            if (param_1 == 0) {
              *(int *)(puVar7 + 8) = *(int *)(puVar7 + 8) + (iVar2 - iVar3);
              *puVar7 = *puVar7 | 0x40;
            }
            else {
              *(int *)(puVar7 + 10) = *(int *)(puVar7 + 10) + (iVar2 - iVar3);
              *puVar7 = *puVar7 | 0x80;
            }
            if (puVar7 == *(ushort **)(iVar8 + 0x2c)) break;
            puVar7 = *(ushort **)(puVar7 + 0x10);
          }
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *piVar9);
      }
      piVar9 = piVar9 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

