// rea decompile_all
// name: FUN_00615a60
// address: 0x615a60
// body: available
// range: 0x615a60-0x615b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615a60(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int in_EDX;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(in_ECX + 0x1450);
  iVar3 = *(int *)(in_ECX + 0xb5c + param_1 * 4);
  iVar6 = param_1 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar6 <= iVar7) {
    do {
      iVar7 = iVar6;
      if (bVar8 != iVar5 < 0) {
        uVar1 = *(ushort *)(in_EDX + *(int *)(in_ECX + 0xb60 + iVar6 * 4) * 4);
        uVar2 = *(ushort *)(in_EDX + *(int *)(in_ECX + 0xb5c + iVar6 * 4) * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            (*(byte *)(*(int *)(in_ECX + 0xb60 + iVar6 * 4) + 0x1458 + in_ECX) <=
             *(byte *)(*(int *)(in_ECX + 0xb5c + iVar6 * 4) + 0x1458 + in_ECX))))) {
          iVar7 = iVar6 + 1;
        }
      }
      iVar5 = *(int *)(in_ECX + 0xb5c + iVar7 * 4);
      uVar1 = *(ushort *)(in_EDX + iVar3 * 4);
      uVar2 = *(ushort *)(in_EDX + iVar5 * 4);
      if (uVar1 < uVar2) {
        *(int *)(in_ECX + 0xb5c + param_1 * 4) = iVar3;
        return;
      }
      if ((uVar1 == uVar2) &&
         (*(byte *)(iVar3 + 0x1458 + in_ECX) <= *(byte *)(iVar5 + 0x1458 + in_ECX))) break;
      *(int *)(in_ECX + 0xb5c + param_1 * 4) = iVar5;
      iVar4 = *(int *)(in_ECX + 0x1450);
      iVar6 = iVar7 * 2;
      bVar8 = SBORROW4(iVar6,iVar4);
      iVar5 = iVar6 - iVar4;
      param_1 = iVar7;
    } while (iVar6 <= iVar4);
  }
  *(int *)(in_ECX + 0xb5c + param_1 * 4) = iVar3;
  return;
}

