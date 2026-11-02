// rea decompile_all
// name: FUN_0065c660
// address: 0x65c660
// body: available
// range: 0x65c660-0x65c744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0065c660(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *in_EDX;
  int iVar8;
  int *piVar9;
  
  iVar2 = in_ECX[0x19];
  iVar3 = in_ECX[0x15];
  iVar8 = 1;
  do {
    iVar7 = iVar8;
    iVar8 = iVar7 + 1;
    iVar6 = iVar8;
    if (1 < iVar2) {
      iVar5 = iVar2 + -1;
      do {
        iVar6 = iVar6 * iVar8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  } while (iVar6 <= iVar3);
  if (iVar7 < 2) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x38;
    *(int *)(*in_ECX + 0x18) = iVar6;
    (**(code **)*in_ECX)();
  }
  iVar6 = 1;
  iVar8 = iVar2;
  piVar9 = in_EDX;
  if (0 < iVar2) {
    for (; iVar5 = iVar2, iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = iVar7;
      piVar9 = piVar9 + 1;
    }
    do {
      iVar6 = iVar6 * iVar7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  do {
    iVar7 = 0;
    bVar4 = false;
    iVar8 = iVar6;
    if (iVar2 < 1) {
      return iVar6;
    }
    do {
      iVar5 = iVar7;
      if (in_ECX[0xb] == 2) {
        iVar5 = (&DAT_00c17d0c)[iVar7];
      }
      iVar1 = in_EDX[iVar5] + 1;
      iVar6 = (iVar8 / in_EDX[iVar5]) * iVar1;
      if (iVar6 - iVar3 != 0 && iVar3 <= iVar6) {
        iVar6 = iVar8;
        if (!bVar4) {
          return iVar8;
        }
        break;
      }
      in_EDX[iVar5] = iVar1;
      iVar7 = iVar7 + 1;
      bVar4 = true;
      iVar8 = iVar6;
    } while (iVar7 < iVar2);
  } while( true );
}

