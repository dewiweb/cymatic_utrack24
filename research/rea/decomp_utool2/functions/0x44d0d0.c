// rea decompile_all
// name: FUN_0044d0d0
// address: 0x44d0d0
// body: available
// range: 0x44d0d0-0x44d14e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0044d0d0(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char local_14;
  char cStack_13;
  int local_c;
  char local_5;
  
  local_c = in_ECX[3];
  if (-1 < local_c) {
    return local_c;
  }
  uVar2 = in_ECX[2];
  uVar6 = 0;
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        uVar1 = *(undefined2 *)(*in_ECX + uVar6 * 2);
        local_14 = (char)uVar1;
        cStack_13 = (char)((ushort)uVar1 >> 8);
        local_5 = local_14;
      }
      else {
        local_5 = '\0';
        cStack_13 = '\0';
      }
      uVar5 = (int)cStack_13 >> 0x1f;
      iVar4 = ((int)cStack_13 ^ uVar5) - uVar5;
      uVar5 = (int)local_5 >> 0x1f;
      iVar3 = ((int)local_5 ^ uVar5) - uVar5;
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      if (local_c < iVar3) {
        in_ECX[3] = iVar3;
        local_c = iVar3;
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    return in_ECX[3];
  }
  return local_c;
}

